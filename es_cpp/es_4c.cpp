/* Scrivere un programma che dopo aver caricato in memoria un array di n numeri float esegua le 
seguenti operazioni: se il primo elemento dell’array è maggiore dell’ultimo, scambia i due elementi
conta quante volte il primo elemento è presente nel resto dell’array visualizzando il risultato
visualizza i numeri in posizione multipla di 3(si visualizzi anche la posizione) */
#include <iostream>
using namespace std;
int main(){
	
    int n,sn=0;
    
    cout<<"Inserisci Numero: ";
    cin>>n;
    
    float v[n],a;
    for(int i=0; i<n; i++){
        cout<<"Inserisci Numero: "<<i+1<<": ";
        cin>>v[i];
        if(i==1 && v[i]==v[0]){
            sn++;
        }
    }
    
    if(v[0]>v[n-1]){
        a=v[0];
        v[0]=v[n-1];
        v[n-1]=a;
    }
    
    cout<<"Array moltiplicato per 3: ";
    for(int i=0;i<n;i++){
        cout<<"posizione "<<i+1<<": "<<v[i]*3<<"  ";
    }
    
    return 0;
}
