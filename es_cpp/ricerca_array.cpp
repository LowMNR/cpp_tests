#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	
	int v[4],n,p;
	int a[4];
	
	srand(time(NULL));
	for(int i=0;i<4;i++){
		v[i]=rand()%10;
	}
	
	cout<<"Gli elementi presenti nell'array sono: \n";
	for(int i=0;i<4;i++){
		cout<<v[i]<<endl;
	}
	
	cout<<"Inserisci numero da trovare: ";
	cin>>n;
	
	if(n>=10){
		cout<<"ERRORE"<<endl;
	}
	
	for(int i=0;i<4;i++){
		if(v[i]==n){
			a[i]=i+1;
			cout<<"il numero e' stato trovato nella posizione "<<a[i]<<endl;
		}
	}
	
	return 0;
}

