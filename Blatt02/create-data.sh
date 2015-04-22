#!/bin/bash


SIZEX=1000
SIZEY=3000

echo "Erstelle die Matrizen matrix-a und matrix-b mit den Dimensionen $SIZEX x $SIZEY"

./create-matrix.py matrix-a ${SIZEX} ${SIZEY}
./create-matrix.py matrix-b ${SIZEY} ${SIZEX} 

echo 5 > scalar
