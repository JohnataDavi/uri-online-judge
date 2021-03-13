#include <iostream>

using namespace std;
struct No
{
    int val;
    No *Lig;
    No *Ant;
};

typedef struct No *NoPtr;

bool insert(NoPtr &L, int value)
{
    if (L == NULL)
    { // INSERÇÃO DO PRIMEIRO NÓ
        L = new No;
        L->val = value;
        L->Lig = NULL;
        L->Ant = NULL;
    }
    else
    {
        NoPtr Ant = NULL;
        NoPtr Aux = L;
        while ((Aux != NULL) && (Aux->val != value))
        {
            Ant = Aux;
            Aux = Aux->Lig;
        }
        if (Aux != NULL)
            return false;

        Ant = NULL;
        Aux = L;
        Ant = new No;
        Ant->val = value;
        Ant->Ant = NULL;
        Ant->Lig = Aux;
        Aux->Ant = Ant;
        L = Ant;
    }
    return true;
}

int remove(NoPtr &L, int value)
{
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
        delete Aux;
        delete Ant;
        return 1;
    }
    return 0;
}

int main()
{

    int n;
    while (cin >> n)
    {
        int aux, count = 0, x = 0;
        NoPtr a = NULL;
        while (n--)
        {
            cin >> aux;

            if (count < 4)
            {
                if (insert(a, aux))
                {
                    count++;
                    x++;
                }
            }
            else
            {
                x += remove(a, aux);
                insert(a, aux);
            }
        }
        cout << x << endl;
    }
    return 0;
}