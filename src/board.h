#ifndef BOARD_H
#define BOARD_H

#include "piece.h"



/*
* FREE : indique que le point du tableau est vide
* FILLED: indique que le point du tableau contient un bloc (1 ou 2)
*/
typedef enum  { FREE,  FILLED }Fill;


/* Taille de la grille */
const int GRIDGE_X = 10;
const int GRIDGE_Y = 20;


typedef struct
{
    Piece * currentPiece; // Pièce actuellement sur la grille
    int gridge[10][20]; //grille de taille GRIDGE_X par GRIDGE_Y ----- Erreur : variably modified 'gridge' at file scope
}Board;

/* Mutateurs & Accesseurs */

void setCurrentPiece (Board * board, const Piece * piece);
Piece * getCurrentPiece (const Board board);

/* Autres méthodes */

void initBoard (Board * board);
void freeBoard (Board * board);

//Fonction d'initialisation de gridge ?

#endif
