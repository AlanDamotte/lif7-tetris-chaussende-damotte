/* shapes.h */
#ifndef SHAPES_H
#define SHAPES_H

//const int NB_KINDS = 7; // Le nombre de types de pièces qu'on a
//const int NB_ROTATIONS = 4; // Le nombre de rotations de chaque pièce
//const int SIZE = 4; // La taille de la matrice de chaque rotation

/* const int PIVOT_X = 1;
const int PIVOT_Y = 2; */

static int PIECES[7][4][4][4] =
{
    { // O
        {
            {0, 0, 0, 0},
            {0, 1, 2, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 0, 0},
            {0, 1, 2, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 0, 0},
            {0, 1, 2, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 0, 0},
            {0, 1, 2, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0}
        }
    },

    { // I
        {
            {0, 0, 0, 0},
            {1, 1, 2, 1},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 1, 0},
            {0, 0, 2, 0},
            {0, 0, 1, 0},
            {0, 0, 1, 0}
        },

        {
            {0, 0, 0, 0},
            {1, 1, 2, 1},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 1, 0},
            {0, 0, 2, 0},
            {0, 0, 1, 0},
            {0, 0, 1, 0}
        }
    },

    { // S
        {
            {0, 0, 0, 0},
            {0, 0, 2, 1},
            {0, 1, 1, 0},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 1, 0},
            {0, 0, 2, 1},
            {0, 0, 0, 1},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 0, 0},
            {0, 0, 2, 1},
            {0, 1, 1, 0},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 1, 0},
            {0, 0, 2, 1},
            {0, 0, 0, 1},
            {0, 0, 0, 0}
        }
    },

    { // Z
        {
            {0, 0, 0, 0},
            {0, 1, 2, 0},
            {0, 0, 1, 1},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 0, 1},
            {0, 0, 2, 1},
            {0, 0, 1, 0},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 0, 0},
            {0, 1, 2, 0},
            {0, 0, 1, 1},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 0, 1},
            {0, 0, 2, 1},
            {0, 0, 1, 0},
            {0, 0, 0, 0}
        }
    },

    { // L
        {
            {0, 0, 0, 0},
            {0, 1, 2, 1},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 1, 0},
            {0, 0, 2, 0},
            {0, 0, 1, 1},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 0, 1},
            {0, 1, 2, 1},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },

        {
            {0, 1, 1, 0},
            {0, 0, 2, 0},
            {0, 0, 1, 0},
            {0, 0, 0, 0}
        }
    },

    { // J
        {
            {0, 0, 0, 0},
            {0, 1, 2, 1},
            {0, 0, 0, 1},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 1, 1},
            {0, 0, 2, 0},
            {0, 0, 1, 0},
            {0, 0, 0, 0}
        },

        {
            {0, 1, 0, 0},
            {0, 1, 2, 1},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 1, 0},
            {0, 0, 2, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0}
        }
    },

    { // T
        {
            {0, 0, 0, 0},
            {0, 1, 2, 1},
            {0, 0, 1, 0},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 1, 0},
            {0, 0, 2, 1},
            {0, 0, 1, 0},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 1, 0},
            {0, 1, 2, 1},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },

        {
            {0, 0, 1, 0},
            {0, 1, 2, 0},
            {0, 0, 1, 0},
            {0, 0, 0, 0}
        }
    }
};

#endif
