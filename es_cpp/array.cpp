/*scrivere un programma che permette all'utente di imserire 5 numeri memorizzati in un array
e successivamente stampa i numeri inseriti*/
#include <iostream>
using namespace std;
int main(){

	float v[5];
	int somma;
	float media=0;
	
	for(int i=0;i<5;i++){
		cout<<"inserisci un numero: ";
		cin>>v[i];
	}
	for(int n=0;n<5;n++){
		somma+=v[n];
	}
	media=somma/5;
	cout<<"somma: "<<somma<<endl;
	cout<<"media: "<<media;

	return 0;
}
