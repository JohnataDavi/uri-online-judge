#include<iostream>
#include<bits/stdc++.h>
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
int main(){
    int n, aux=0, vaux=0;
    float v;
    cin >> v;
    n = v;
    vaux = v - n;

    cin >> v;

    aux = v;
    cout << aux << endl;
    v=v-aux;
    cout << v << endl;
    v=v*100;
    cout << v << endl;

    aux = v;
    vaux = v;

    vaux*=100;
    cout << setprecision(2) << vaux << "\n";
    cout << n << "\n";
    aux=n/100;
    n%=100;
    cout<<aux<<" nota(s) de R$100,00\n";
    aux=n/50;
    n%=50;
    cout<<aux<<" nota(s) de R$50,00\n";
    aux=n/20;
    n%=20;
    cout<<aux<<" nota(s) de R$20,00\n";
    aux=n/10;
    n%=10;
    cout<<aux<<" nota(s) de R$10,00\n";
    aux=n/5;
    n%=5;
    cout<<aux<<" nota(s) de R$5,00\n";
    aux=n/2;
    n%=2;
    cout<<aux<<" nota(s) de R$2,00\n";
    cout << "MOEDAS:\n";
    aux=n/1;
    n%=1;
    cout<<aux<<" moeda(s) de R$1,00\n";

    n*=100;

    cout << v << endl;
    cout << aux << endl;
    cout << vaux << endl;
    aux = vaux/50;
    vaux%=50;
    cout << vaux << endl;
    cout << aux << " moeda(s) de R$ 0.50\n";

    aux = vaux/25;
    vaux%=25;
    cout << vaux << endl;
    cout << aux << " moeda(s) de R$ 0.25\n";

    aux = vaux/10;
    vaux%=10;
    cout << vaux << endl;
    cout << aux << " moeda(s) de R$ 0.10\n";

    aux = vaux/5;
    vaux%=5;
    cout << vaux << endl;
    cout << aux << " moeda(s) de R$ 0.05\n";
    cout << vaux << " moeda(s) de R$ 0.01\n";
    return 0;
}
