#include <iostream>
#include <stack>

using namespace std;

int main()
{
  string entrada;
  while (cin >> entrada)
  {
    short unsigned int resp = 0;
    stack<char> pilha;
    for (auto matico : entrada)
    {
      if (pilha.empty())
      {
        pilha.push(matico);
      }
      else
      {
        char aux = pilha.top();
        if (aux == 'B' && matico == 'S' ||
            aux == 'S' && matico == 'B' ||
            aux == 'C' && matico == 'F' ||
            aux == 'F' && matico == 'C')
        {
          ++resp;
          pilha.pop();
        }
        else
        {
          pilha.push(matico);
        }
      }
    }
    cout << resp << endl;
  }

  return 0;
}