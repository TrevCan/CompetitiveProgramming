#include <iostream>

using namespace std;

int casos = 0;
int a, b, N;



int main()
{
	cin >> casos;
	for (int i = 0; i<casos; i++){
		cin >> a >> b >> N;
		int compuno = N - a + 1;
		int compdos = b + 1;
		int output = compuno>compdos ? compdos : compuno;
		cout << output << endl;
	}
}

