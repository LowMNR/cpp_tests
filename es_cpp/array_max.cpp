#include <iostream>
using namespace std;
int main(){
	
	int n,p,nmax=0,nmax1=0;
	
	cout<<"quanti elemento vuoi inserire?"<<endl;
	cin>>n;
	int v[n];
	for(int i=0;i<n;i++){
		cout<<"inserisci array: \n";
		cin>>v[i];
		if(nmax<v[i]){
			nmax=v[i];
			p=i;
		}
	}
	v[p]=0;
	for(int i=0;i<n;i++){
		if(nmax1<v[i]){
			nmax1=v[i];
		}
	}
	cout<<"il primo piu grande: "<<nmax<<endl;
	cout<<"il secondo piu grande: "<<nmax1;
	

	return 0;
}

