#include <stdio.h>
#include <stdlib.h>

#define MAX_FIOK 10
#define MAX_TARGY 20

typedef struct {
    char nev[MAX_TARGY];
} Targy;

typedef struct {
    char nev[MAX_FIOK];
    Targy targyak[3];
    int szam;
} Fiok;

typedef struct {
    Fiok fiokok[MAX_FIOK];
    int szam;
} Asztal;

Fiok legKevesebb(Asztal a) {
    Fiok legkevesebbFiok = a.fiokok[0];
    int minTargySzam = legkevesebbFiok.szam;

    for (int i = 1; i < a.szam; i++) {
        if (a.fiokok[i].szam < minTargySzam) {
            minTargySzam = a.fiokok[i].szam;
            legkevesebbFiok = a.fiokok[i];
        }
    }

    return legkevesebbFiok;
}

int ujTargy(Asztal a, Targy t) {
    Fiok legkevesebbFiok = legKevesebb(a);

    if (legkevesebbFiok.szam < 3) {
        legkevesebbFiok.targyak[legkevesebbFiok.szam] = t;
        legkevesebbFiok.szam++;
        return 1;
    }

    return 0;
}

typedef struct node {
    int value;
    struct node* left;
    struct node* right;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insertNode(Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->value) {
        root->left = insertNode(root->left, value);
    } else if (value > root->value) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

int findMaxDepth(Node* node) {
    if (node == NULL) {
        return 0;
    }

    int leftDepth = findMaxDepth(node->left);
    int rightDepth = findMaxDepth(node->right);

    return (leftDepth > rightDepth) ? leftDepth + 1 : rightDepth + 1;
}

int legtavolabbi(Node* b) {
    if (b == NULL) {
        return -1;
    }

    int maxDepth = findMaxDepth(b);
    int tavolabbiElem = b->value;

    while (b != NULL) {
        if (findMaxDepth(b->left) + findMaxDepth(b->right) == maxDepth - 2) {
            break;
        }

        if (b->left != NULL && findMaxDepth(b->left) == maxDepth - 1) {
            b = b->left;
        } else {
            b = b->right;
        }

        tavolabbiElem = b->value;
    }

    return tavolabbiElem;
}

int main() {
    Asztal asztal;
    asztal.szam = 3;

    Fiok fiok1 = { "Fiok1", { { "Targy1", }, { "Targy2", }, { "Targy3", } }, 3 };
    Fiok fiok2 = { "Fiok2", { { "Targy4", }, { "Targy5", } }, 2 };
    Fiok fiok3 = { "Fiok3", { { "Targy6", } }, 1 };

    asztal.fiokok[0] = fiok1;
    asztal.fiokok[1] = fiok2;
    asztal.fiokok[2] = fiok3;

    Targy ujTargy1 = { "Targy7" };
    int sikeres = ujTargy(asztal, ujTargy1);

    if (sikeres) {
        printf("Az uj targy hozzaadasa sikeres.\n");
    } else {
        printf("Nem sikerult hozzaadni az uj targyat, minden fiok tele van.\n");
    }

    Node* root = NULL;

    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 70);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    int legtavolabbiElem = legtavolabbi(root);
    printf("A legtavolabbi elem a gyokertol: %d\n", legtavolabbiElem);

    return 0;
}


/*
#include <stdio.h>

void zh(int X[], int N, int Y[], int M, int Z[], int* P) {
    int i = N;
    int j = M;
    int k = 1;

    while (i > 0 && j > 0) {
        if (X[i] % Y[j] == 0) {
            Z[k] = X[i];
            k++;
        }

        i--;
        j -= 2;
    }

    *P = k;
}

int main() {
    int X[] = { 1, 2, 3, 4, 5 };
    int N = sizeof(X) / sizeof(X[0]);
    int Y[] = { 2, 4, 6, 8, 10 };
    int M = sizeof(Y) / sizeof(Y[0]);
    int Z[100];
    int P;

    zh(X, N, Y, M, Z, &P);

    printf("P: %d\n", P);
    printf("Z: ");
    for (int i = 1; i < P; i++) {
        printf("%d ", Z[i]);
    }
    printf("\n");

    return 0;
}
*/
