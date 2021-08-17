#include <iostream>
#include <string>
#include <vector>
using namespace std;

void getResult(string r, int *a, int *b)
{
	size_t pos = 0;
	string delimiter = " ";
	string token;
	while ((pos = r.find(delimiter)) != string::npos) {
		token = r.substr(0, pos);
		if (token != "x")
			*a = stoi(token);
		r.erase(0, pos + delimiter.length());
	}
	*b = atoi(r.c_str());
}

int main()
{
	int n, at2, t1, t2, cont = 0;
	cin >> n;
	n *= 2;
	string result;
	while (n--) {
		getline(cin, result);
		if(result == "")
			getline(cin, result);
		if (n % 2 != 0) {
			getResult(result, &t1, &t2);
			at2 = t2;
		}
		else {
			getResult(result, &t2, &t1);
		}

		if (t1 > t2)
			cont += 3;
		else if (t2 > t1)
			cont -= 3;

		if (n % 2 == 0) {
			if (cont > 0)
				cout << "Time 1";
			else if (cont < 0)
				cout << "Time 2";
			else
				if (t1 > at2)
					cout << "Time 1";
				else if (t1 < at2)
					cout << "Time 2";
				else cout << "Penaltis";
			cout << endl;
			cont = 0;
		}
	}
}