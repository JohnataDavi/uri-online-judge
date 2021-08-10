#include <iostream>

using namespace std;
long long int gcd(long long int a, long long int b)
{
  return b == 0 ? a : gcd(b, a % b);
}

long long int converter(string binary)
{
  long long int decimal = 0, power = 1;
  const int size = binary.size();
  for (int i = size - 1; i >= 0; i--)
  {
    if (binary[i] != '0')
      decimal += power;
    power = power * 2;
  }
  return decimal;
}

int main()
{
  int testCases, n1, n2;
  string s1, s2;
  cin >> testCases;

  for (int i = 1; i <= testCases; i++)
  {
    cin >> s1 >> s2;
    n1 = converter(s1);
    n2 = converter(s2);
    if (gcd(n1, n2) == 1)
    {
      cout << "Pair #" << i << ": Love is not all you need!\n";
    }
    else
    {
      cout << "Pair #" << i << ": All you need is love!\n";
    }
  }
}