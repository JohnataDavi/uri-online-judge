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
	while(n1 <= n2){
		if(n1%13 > 0)
			sum += n1;
		n1++;
	}
	cout << sum << endl;
	return 0;
}
