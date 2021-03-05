#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
/*
1 - Somente caracteres que sejam letras minúsculas 
e maiúsculas devem ser deslocadas 3 posições para a direita, segundo a 
tabela ASCII: letra 'a' deve virar letra 'd', letra 'y' deve virar 
caractere '|' e assim sucessivamente. 

2 - A linha deverá ser invertida. 

3 - Todo e qualquer caractere a partir da metade em diante (truncada) 
devem ser deslocados uma posição para a esquerda na tabela ASCII. 
Neste caso, 'b' vira 'a' e 'a' vira '`'.
*/
void change1(string &str, int &len)
{
    len = str.length();
    for (int i = 0; i < len; i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            str[i] += 3;
        }
    }
}

void change2(string &str)
{
    reverse(str.begin(), str.end());
}

void change3(string &str, int len)
{
    int center = len / 2;
    for (int i = center; i < len; i++)
    {
        str[i]--;
    }
}

int main()
{
    int n, len;
    string m;

    cin >> n;
    while (n--)
    {
        while (getline(cin, m))
            if (m != "")
                break;

        change1(m, len);
        change2(m);
        change3(m, len);
        cout << m << endl;
    }
    return 0;
}
