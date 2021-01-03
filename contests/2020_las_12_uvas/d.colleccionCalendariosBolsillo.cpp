/*
 * =====================================================================================
 *
 *       Filename:  colleccionCalendariosBolsillo.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  31-Dec-20 2:50:37 AM
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

int main(){
		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

		int n, c; int min = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
				cin >> c;
				int f[c];
				for(int j = 0; j < c; j++) cin >> f[j];
				
				sort(f, f+c);

				for(int j = 0; j < c-1; j++){
						if(f[j+1] - f[j] > 1)
								min += f[j+1]-f[j]-1;
				}
				cout << min << "\n";
				min = 0;
		}
		return 0;
}
