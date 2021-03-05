#include <iostream>

using namespace std;

int main()
{
    int n, espaco, qtd;
    while (cin >> n)
    {
        espaco = n / 2;
        qtd = 1;
        for (int i = 0; i < n && qtd != n + 2; i++)
        {
            for (int j = 0; j < espaco; j++)
                cout << " ";

            for (int k = 0; k < qtd; k++)
                cout << "*";

            cout << endl;
            qtd += 2;
            espaco--;
        }
        espaco = n / 2;
        qtd = 1;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < espaco; j++)
                cout << " ";

            for (int k = 0; k < qtd; k++)
                cout << "*";

            cout << endl;
            qtd += 2;
            espaco--;
        }
        cout << endl;
    }
    return 0;
}