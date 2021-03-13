#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int n;
    float v, avg = 0, kg = 0;
    string str;
    char split_char = ' ';
    vector<int> vI;
    vector<float> vV;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        avg += v;

        getline(cin, str);
        while (str.length() == 0)
            getline(cin, str);

        int count = 0;
        istringstream split(str);
        for (string each; getline(split, each, split_char); count++);
        vI.push_back(count);
    }
    for (int i = 1; i <= vI.size(); i++)
    {
        cout << "day " << i << ": " << vI[i-1] << " kg" << endl;
        kg += vI[i-1];
    }

    cout << fixed;
    cout << setprecision(2);
    cout << (float)(kg / n) << " kg by day" << endl;
    cout << "R$ " << (float)(avg / n) << " by day" << endl;
    return 0;
}
