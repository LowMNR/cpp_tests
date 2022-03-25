#include <iostream>
#include <string>
using namespace std;
struct Allievo{

    string matricola;
    string cognome;
    string nome;

};

int main(){

    int n=10,i;
    Allievo a[n];

    for(i=0;i<n;i++){
        cout<<"Inserisci Matricola: ";
        cin >> a[i].matricola;
    }

    for(i=0;i<n;i++){
        cout<<"Matricola "<<i+1<<": ";
        cout<<a[i].matricola<<endl;
    }

    return 0;
}