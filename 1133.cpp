#include <iostream>
using namespace std;

int main(){
	int n1, n2, sum = 0;
	cin >> n1 >> n2;
	if(n1 > n2){
		int aux = n1;
		n1 = n2;
		n2 = aux;
  	}
	n1++;
	while(n1 < n2){
		if(n1%5 == 2 || n1%5 == 3)
			cout << n1 << endl;
		n1++;
	}
	return 0;
}
