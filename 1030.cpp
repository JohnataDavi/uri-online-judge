#include <iostream>
using namespace std;

int f(int n, int k){
	if(n>0)
		return (f(n - 1, k) + k - 1) % n + 1;
	else
		return 0;
}

int main(){
	int nc, n, k;
	cin >> nc;
	for(int i=1; i<=nc; i++){ 
		cin >> n >> k;
		cout << "Case " << i << ": "  << f(n, k) << endl;
	}	
	return 0;
}
