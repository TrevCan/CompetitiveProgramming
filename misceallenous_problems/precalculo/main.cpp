#include <bits/stdc++.h>
using namespace std;

int n, p;
int preCalculo[100002];   // como es global se inicializan en cero
int a, b;

int main() {
  //leer datos
  cin>>n;
  for(int i=1; i<=n; i++){
    cin>>preCalculo[i];
  }

  cin>>p;

  //precálculo
  for(int i = 1; i <= n; i++){
      preCalculo[i] += preCalculo[i-1];
  }


  for(int i=0; i<p; i++) {
    cin>> a >> b;
    cout<< preCalculo[b] - preCalculo[a-1] << "\n";
  }
  
  return 0;
}
