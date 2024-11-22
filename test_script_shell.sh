#!/bin/bash

# Nom du fichier à tester
PROGRAM="$1"

if [ -z "$PROGRAM" ]; then
    echo "Usage: $0 <nom_du_programme>"
    exit 1
fi

# Vérifier si le fichier existe
if [ ! -f "$PROGRAM" ]; then
    echo "Erreur : le fichier $PROGRAM n'existe pas."
    exit 1
fi

echo "=== Étape 1 : Limitation des ressources avec ulimit ==="
ulimit -t 5        # Limiter le temps CPU à 5 secondes
ulimit -v 50000    # Limiter la mémoire virtuelle à 50 Mo
ulimit -c 0        # Désactiver les fichiers de core dump
echo "Ressources limitées."

echo "=== Étape 2 : Recherche des symboles non définis avec nm -u ==="
UNDEFINED_SYMBOLS=$(nm -u "$PROGRAM")
if [ -z "$UNDEFINED_SYMBOLS" ]; then
    echo "Pas de symboles non définis trouvés."
else
    echo "Symboles non définis détectés :"
    echo "$UNDEFINED_SYMBOLS"
fi

echo "=== Étape 3 : Test des erreurs de mémoire avec Valgrind ==="
if command -v valgrind >/dev/null 2>&1; then
    valgrind --leak-check=full --show-leak-kinds=all ./"$PROGRAM"
else
    echo "Valgrind n'est pas installé. Installez-le avec : sudo apt install valgrind"
    exit 1
fi

echo "=== Étape 4 : Mesure du temps d'exécution avec time ==="
if command -v time >/dev/null 2>&1; then
    /usr/bin/time -v ./"$PROGRAM"
else
    echo "La commande 'time' n'est pas disponible. Assurez-vous qu'elle soit installée."
fi

echo "=== Étape 5 : Test de la sortie ==="
./"$PROGRAM" > output.txt 2> error.txt
if [ -s error.txt ]; then
    echo "Des erreurs ont été détectées dans la sortie d'erreur :"
    cat error.txt
else
    echo "Aucune erreur détectée dans la sortie."
fi

echo "=== Étape 6 : Vérification des dépendances de bibliothèque ==="
ldd "$PROGRAM"

echo "=== Étape 7 : Test avec différentes entrées ==="
echo "Entrée de test 1" | ./"$PROGRAM"
echo "Entrée de test 2" | ./"$PROGRAM"

echo "=== Étape 8 : Nettoyage ==="
rm -f "$PROGRAM"  # Supprimer le programme compilé

echo "=== Tests terminés ==="

