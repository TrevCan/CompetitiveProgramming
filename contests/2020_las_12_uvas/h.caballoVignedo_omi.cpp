/*
 * =====================================================================================
 *
 *       Filename:  h.caballoVignedo_omi.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17-Jan-21 1:10:11 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Héctor Alejandro Canizales Peña (TrevCan), heror0484@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <bits/stdc++.h>
using namespace std;

int n, objetivo;
int arreglo[300002];

int main() {

		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  //entrada
  cin>>n>>objetivo;
  while((n+objetivo)>0){
    for(int i=0; i<n; i++)cin>>arreglo[i];
     
    int ade=-1;
    int atr=0;
    int mini=INT_MAX;
    int act=arreglo[0];

    while (ade<n){
      if(act<objetivo){
        ade++;
        act+=arreglo[ade];
      } else {
        if(act>objetivo){
          act-=arreglo[atr];
          atr++;
        }
      }
      // si la suma >=ojetivo  guardas el minimo
      if(act>=objetivo){
        mini=min(mini, act);
      }
    }

    /* procesa el pedazo que falta desde
     desde indice atr hatas n-1;
    */
    
    while (atr<n){
      act-=arreglo[atr];
      atr++;
      // si la suma >=ojetivo  guardas el minimo
      if(act>=objetivo){
        mini=min(mini, act);
      }
    }
    ////
    

     if(mini==INT_MAX){
       cout<<"IMPOSIBLE";
     }
     else{
       cout<<mini;
     }
     cout<<'\n';
     
     cin>>n>>objetivo;
     act=0;
  }
  return 0;
}
