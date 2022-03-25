#include <iostream>
#include <string>
using namespace std;
struct Persona
{
    string nome;
    string cognome;
    int eta;
};

int main(){
    
    int tot=0;
    float media=0

    Persona p1,p2,p3;
    cout<<"nome, cognome, eta della prima persona"<<endl;
    cin>>p1.nome;
    cin>>p1.cognome;
    cin>>p1.eta;

    cout<<"nome, cognome, eta della prima persona"<<endl;
    cin>>p2.nome;
    cin>>p2.cognome;
    cin>>p2.eta;

    cout<<"nome, cognome, eta della prima persona"<<endl;
    cin>>p3.nome;
    cin>>p3.cognome;
    cin>>p3.eta;
    
    tot=tot+p1.eta+p2.eta+p3.eta;
    media=tot/3;

    cout<<"la media delle eta e' "<<media<<endl;

    return 0;
}