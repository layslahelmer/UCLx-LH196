#include <iostream>
#include <stdlib.h>

using namespace std;

void thesort(int *min, int *max, int *v, int i){
	cout << "Digite o elemento " << i + 1 << ": ";
	cin >> v[i];
	if (v[i] > *max){*max = v[i];}
	if (v[i] < *min){*min = v[i];}
}
int main() {
	int mn, mx, N;
	cout << "Estes programa recebe o número de elementos de um vetor e seus respectivos valores e retorna o vetor, o maior elemento e o menor" << endl;
	cout << "Digite o número de elementos do vetor: ";
	cin >> N;

	int *v, *pmn, *pmx;
	v = (int*)malloc(N*sizeof(int));
	pmn = &mn;
	pmx = &mx;

	for (int z = 0; z < N; z++){v[z] = 0;}
	cout << "Digite o número de elemento 1: ";
	cin >> v[0];
	mn = v[0];
	mx = v[0];

	for (int a = 1; a < N; a++){thesort(pmn, pmx, v, a);}
	for (int a = 0; a < N; a++){cout << v[a] << " ";}
	cout << endl;

	cout << "O menor valor é: " << mn << endl << "O maior valor é: " << mx << endl;
	delete v;
	return 0;
}
