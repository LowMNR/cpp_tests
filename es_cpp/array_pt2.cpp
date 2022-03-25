#include <iostream>
using namespace std;
int main(){

	int vet[8];
	int somma;
	
	cout<<"inserire numero: \n";
	for(int i=1;i<=8;i++){
		cin>>vet[i];
		if(vet[i]<0){
			somma+=vet[i];
			vet[i]=0;
		}
	}
	cout<<"I numeri inseriti sono: \n";
	for(int s=1;s<=8;s++){
		cout<<vet[s]<<endl;
	}
	cout<<"somma: "<<somma<<endl;

	return 0;
}2
