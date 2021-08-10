#include <iostream>
using namespace std;

long int gcd(long int a, long int b)
{
  return b == 0 ? a : gcd(b, a % b);
}
long int lcm(long int a, long int b)
{
  return a * (b / gcd(a, b));
}

int main()
{
  long long int lastOcurrance;
  while (cin >> lastOcurrance)
  {
    long long int l1, l2, l3, mmc;
    cin >> l1 >> l2 >> l3;

    mmc = lcm(l1, l2);
    mmc = lcm(l3, mmc);
    cout << mmc - lastOcurrance << endl;
  }
}