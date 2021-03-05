#include <iostream>

using namespace std;

struct No {
   int info;
   struct No *esq;
   struct No *dir;
};

typedef struct No *Arvore;

void insere (Arvore& a, int c) {

  if (a == NULL) {  
     a = new No;
     a->info = c;
     a->dir = NULL;
     a->esq = NULL;
  }
  else if (c > a->info)
           insere (a->dir, c); 
         else
           insere (a->esq, c); 
}

void preor (Arvore& a) { 
  if (a!=NULL) {
     cout << " " << a->info;
     preor (a->esq);
     preor (a->dir);
  }
}

void inor (Arvore& a) { 
  if (a!=NULL) {
     inor (a->esq); 
     cout << " " << a->info;
     inor (a->dir);
  }
}

void posor (Arvore& a) { 
  if (a!=NULL) {
     posor (a->esq);
     posor (a->dir);
     cout << " " << a->info;
  }
}

int main () {
	int n, qtd, val = 0;
	cin >> n;
	Arvore arv = NULL;
	for(int j=0; j<n; j++){ 
		arv = NULL;
		cin >> qtd;
		for(int i = 0; i < qtd; i++){
			cin >> val;
			insere(arv, val);
		}
		cout << "Case " << j + 1<< ":";
		cout << "\nPre.:"; preor(arv);
		cout << "\nIn..:"; inor(arv);
		cout << "\nPost:"; posor(arv);
		cout << endl << endl;
	}
	
	return 0;
}