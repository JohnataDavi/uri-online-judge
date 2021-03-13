#include <iostream>
#include <vector>

using namespace std;

int vSize = 0;

struct No
{
    int val;
    No *Lig;
    No *Ant;
};

typedef struct No *NoPtr;

void insert(NoPtr &L, int value)
{
    if (L == NULL)
    { // INSERÇÃO DO PRIMEIRO NÓ
        L = new No;
        L->val = value;
        L->Lig = NULL;
        L->Ant = NULL;
        vSize = 1;
    }
    else
    {
        NoPtr Ant = NULL;
        NoPtr Aux = L;
        Ant = new No;

        Ant->val = value;
        Ant->Ant = NULL;
        Ant->Lig = Aux;
        Aux->Ant = Ant;
        L = Ant;
        vSize++;
    }
}

int remove(NoPtr &L, int value)
{
    if (vSize < 4)
    {
        return 1;
    }
    NoPtr Ant = NULL;
    NoPtr Aux = L;
    while ((Aux != NULL) && (Aux->val != value))
    {
        Ant = Aux;
        Aux = Aux->Lig;
    }
    if (Aux == NULL) // removendo o ultimo
    {
        Ant->Ant->Lig = NULL;
        Ant->Ant = NULL;
        Ant = NULL;
        delete Ant;
        vSize--;
        return 1;
    }
    if (Aux == L)
    {
        if (vSize == 1)
        {
            NoPtr x = NULL;
            L = x;
            L->Lig = NULL;
            L->Ant = NULL;
            vSize--;
            return 0;
        }
        L = L->Lig;
        L->Ant = NULL;
    }
    else
    {
        Ant->Lig = Aux->Lig;
        if (Aux->Lig)
            Aux->Lig->Ant = Ant;
    }
    vSize--;
    delete Aux;
    return 0;
}

void ImprimeListaRec(NoPtr L)
{
    if (!(L == NULL))
    {
        cout << L->val << " -> ";
        ImprimeListaRec(L->Lig);
    }
    else
        cout << "NULL" << endl;
}

int main()
{
    int n, aux, count = 0, x = 0;
    cin >> n;
    NoPtr a = NULL;

    while (n--)
    {
        cin >> aux;

        if (count > 1)
            x += remove(a, aux);
        else
            x++;
        insert(a, aux);
        count++;
        ImprimeListaRec(a);
    }
    cout << x << endl;
    return 0;
}
//  while (n--)
//     {
//         cin >> aux;
//         count++;
//         if (count > 4)
//         {
//             x += remove(a, aux);
//             insert(a, aux);
//         }else{
//             x++;
//             insert(a, aux);
//         }
//         // ImprimeListaRec(a);
//     }