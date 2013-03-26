#include <stdlib.h>
#include <stdio.h>

#include <assert.h> /* Pour la fonction assert */
#include <string.h> /* Pour les fonctions sur les chaines de caractères */

#include "binarytrees.h"

void setNodeValue (Node * node, const Player player)
{
    node->value = player;
}

Player getNodeValue(const Node * node)
{
    return node->value;
}

void setNodeLeft_Child(Node * node, const Node * pnode)
{
    node->left_child = pnode;
}

Node * getNodeLeft_Child(const Node * node)
{
    return node->left_child;
}

void setNodeRight_Child(Node * node, const Node * pnode)
{
    node->right_child = pnode;
}

Node * getNodeRight_Child(const Node * node)
{
    return node->right_child;
}

void setTreeRoot(Tree * tree, const Node * root)
{
    tree->root = root;
}

Node * getTreeRoot(const Tree * tree)
{
    return tree->root;
}

void setTreeNb_Elements(Tree * tree, const unsigned int n)
{
    tree->nb_elements = n;
}

int getTreeNb_Elements(const Tree * tree)
{
    return tree->nb_elements;
}

void initNode(Node * node, const Player player)
{
    /* Vérification fiche joueur valide */

    assert(player.score >= 0 && strlen(player.name[25])>0);

    /* Initialisation */

    setNodeValue(node, player);
    setNodeLeft_Child(node, NULL);
    setNodeRight_Child(node, NULL);
}

Node * createNode(const Player player)
{
    Node * node = (Node *)malloc(sizeof(Node));

    initNode(node, player);
    return node;
}

void freeNode(Node * node)
{
    setNodeLeft_Child(node, NULL);
    setNodeRight_Child(node, NULL);
    free(node);
}

void initTree (Tree * tree)
{
    Node * pnode;
    pnode = (Node *) malloc(sizeof(Node));

    setTreeRoot(tree, pnode);
    setTreeNb_Elements(tree, 1);
}

void freeTree_recursion(Node * node)
{
    freeTree_recursion(node->left_child);
    freeTree_recursion(node->right_child);
    free(node);
}

void freeTree (Tree * tree)
{
    freeTree_recursion(tree->root);
}

