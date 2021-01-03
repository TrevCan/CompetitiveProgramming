/*
 * =====================================================================================
 *
 *       Filename:  duracionBombillasLED.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  31-Dec-20 2:21:25 AM
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
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
				int h, e, es;
				//horas, encendido, estimadoHoras
				cin >> h >> e >> es;
				if(e*es > h)
						cout << "HORAS\n";
				else if(e*es < h)
						cout << "ENCENDIDOS\n";
				else cout << "AMBAS\n";
		}
		return 0;
}

