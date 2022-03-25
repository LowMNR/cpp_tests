#include <iostream>
#include <string>
using namespace std;
struct veicolo{
    string targa;
    string marca;
    float cilindrata;
    int matricola;
    int km;
    int prezzo;
};
int main(){

    int n,i;
    cout<<"inserire numero veicoli: ";
    cin>>n;
    veicolo v[n];

    for(i=0;i<n;i++){

        cout<<"Inserisci dati veicolo numero "<<i+1<<endl;
        cout<<"Inserisci Targa: ";
        cin>>v[i].targa;
        cout<<"Inserisci Marca: ";
        cin>>v[i].marca;
        cout<<"Inserisci cilindrata: ";
        cin>>v[i].cilindrata;
        cout<<"Inserire Anno di immatricolazione: ";
        cin>>v[i].matricola;
        cout<<"Inserire km: ";
        cin>>v[i].km;
        cout<<"Inserire il prezzo: ";
        cin>>v[i].prezzo;
        cout<<endl;
    }

    return 0;
}