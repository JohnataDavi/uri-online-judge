#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;

int main(){

    map<string, pair<double, int> > purchase;
    pair<double, int> qtd;
    vector<string> names;
    unsigned int n, m, p;
    string name;
    double value;
    cin >> n;

    while(n--){
        double sum = 0.0;
        cin >> m;
        while(m--){
            cin >> name;
            cin >> value;
            qtd.first = value;
            qtd.second = 0;
            purchase.insert(pair<string, pair<double, int> >(name, qtd));
        }
        cin >> p;
        while(p--){
            cin >> name;
            cin >> value;
            purchase[name].second = value;
            names.push_back(name);
        }
        for(auto name:names)
            sum += purchase[name].first * purchase[name].second;
        cout << fixed << setprecision(2);
        cout << "R$ " << sum << endl;
        purchase.clear();
        names.clear();
    }
    return 0;
}
