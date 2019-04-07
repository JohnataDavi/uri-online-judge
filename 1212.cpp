#include <iostream>
using namespace std;
/*
+---------------------------------------------------+
|   URI    	|   www.urionlinejudge.com.br	    |
|---------------------------------------------------|
|   NOME                    |                       |
|---------------------------------------------------|
|   Johnata Davi 	    |   	            |
+---------------------------------------------------+
|   GITHUB 	|   www.github.com/JohnataDavi      |
+---------------------------------------------------+
|   LINKEDIN	|   www.linkedin.com/in/johnatadavi |
+---------------------------------------------------+
*/
long carry(long a, long b);
int main()
{
    long a, b;
    int qtd;
    cin >> a >> b;
    while( a > 0 || b > 0){
        if( a==0 && b==0 ) break;
        qtd = carry(a,b);
        if( qtd==0 )
            cout << "No carry operation.\n";
        else if( qtd==1 )
            cout << "1 carry operation.\n";
        else
            cout << qtd << " carry operations.\n";
        cin >> a >> b;
    }
    return 0;
}

long carry(long a, long b)
{
    long n1, n2;
    int soma, carry = 0, cont = 0;
    while(1)
    {
        n1 = a%10;
        n2 = b%10;
        soma = n1+n2+carry;
        if( soma>=10 ){
            cont++;
            carry=1;
        }
        else carry=0;
        a = a/10;
        b = b/10;
        if( a==0 && b==0 ) break;
    }
    return cont;
}

