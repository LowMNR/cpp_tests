#include <iostream>
#include <string>
using namespace std;
int main(){

    int n,i=0,pos,d;
    cout<<"inserisci il numero di elementi: ";                                          //numero di elementi
    cin>>n;
    int v[n];


    for(i=1;i<n+1;i++){                                                                 //chiedo n volte la posizione in cui inserire il dato e il dato da inserire nella posizione
        cout<<"in che posizione vuoi inserire il dato: ";
        cin>>pos;
        cout<<"Inserire il dato: ";
        cin>>d;
        v[pos]=d;                                                                       //memorizzo il dato nella posizione dischiarata dall'utente
    }

    cout<<"Dati inseriti nell'array: "<<endl;                                           //stampo a video l'array
    for(i=1;i<n+1;i++){
        cout<<v[i]<<endl;
    }


    return 0;
}