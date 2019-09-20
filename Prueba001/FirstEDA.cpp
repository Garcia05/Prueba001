#include <bits/stdc++.h>

using namespace std;
#define Rango 255

void countSort(int lista[])
{
	int salida[Rango+1],i;
	int count[strlen()];
	for(i=0;i<strlen(lista);i++)
	{
		count[i]=0;
	}
	for(i=0;lista[i];++i){
		++count[lista[i]];
	}
	for(i=0;Rango;++i){
		count[i]+=count[i-1];
	}
	for(i=0lista[i];++i){
		salida[count[lista[i]]-1]=lista[i];
		--count[lista[i]];
	}
	for(i=0;lista[i];++i){
		lista[i]=salida[i];
	}

}
int main()
{
	int lista[]={2,3,4,6,1,23};
	countSort(lista);
	cout<<""<<lista;
	return 0;
}