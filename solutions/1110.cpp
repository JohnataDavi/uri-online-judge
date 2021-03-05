#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n;
    queue<int> cards;
    cin >> n;
    while(n){
        for(int i=1; i<=n; i++)
            cards.push(i);
        cout << "Discarded cards: ";
        while(cards.size() > 1){
            cout << cards.front() << ((cards.size() > 2) ? ", " : "");
            cards.pop();
            cards.push(cards.front());
            cards.pop();
        }
        cout << "\nRemaining card: " << cards.front() << endl;
        cards.pop();
        cin >> n;
    }


    return 0;
}

