#include <bits/stdc++.h>

using namespace std;

int p=-1;
string productos[150000];
string input;
int contador = 0;

int main(){
	cin >> p;
	getline(cin,input);
	while(p!=0){
		contador = 1;
		for(int i = 0; i < p; i++){
			getline(cin,input);
			//cout << input << "\n";
			for(int j = 0; j < input.size(); j++){
				if(input[j] < 91 && input[j] > 64)
				input[j] += 32;
			}
			productos[i] = input;
		}
		//getline(cin,input);
		sort(productos, productos+p);
		/* for(int i = 0; i < p; i++){
		cout <<"["<<i<<"]  " << productos[i]<<"\n";
		}*/
		for(int i = 1; i < (p); i++){
			if(productos[i] != productos[i-1]){
			contador++;
			//cout << "c "<<i<<" " << contador << "\n";
			}
		}
		cout << contador << "\n";
		cin >> p;
		getline(cin,input);
	}
		return 0;
}
