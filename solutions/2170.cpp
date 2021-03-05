#include<iostream>
#include<cstdio>
using namespace std;


int main(){
    int cont=1;
    long int n1, n2;
    float r=0;
    while(cin>>n1>>n2){
        r = (float) ((n2-n1)*100)/n1;
        cout << "Projeto "<< cont << ":" << endl;
        printf("Percentual dos juros da aplicacao: %.2f", r);
        cout << " %\n";
        r=0;
        cont++;
    }
    return 0;
}
