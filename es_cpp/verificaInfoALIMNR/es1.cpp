#include <iostream>
#include <string>
using namespace std;

struct veicolo{                                                                                     //struttura con tutti i dati relativi al veicolo
    string marca;
    string modello;
    int cilindrata;
    string dataq;
};

int main(){

    int i;                                                                                          //dichiaro il contatore
    veicolo veic[4];                                                                                //dichiaro un array veicolo
    
    for(i=0;i<4;i++){                                                                               //popolo l'array con i dati del veicolo richiesti
        cout<<"Inserire marca del "<<i+1<<" veicolo: "<<endl;
        cin>>veic[i].marca;
        cout<<"Inserire modello del "<<i+1<<" veicolo: "<<endl;
        cin>>veic[i].modello;
        cout<<"Inserire cilindrata del "<<i+1<<" veicolo: "<<endl;
        cin>>veic[i].cilindrata;
        cout<<"Inserire data di acquisti del "<<i+1<<" veicolo es.(30_novembre_2005): "<<endl;      //la data dell'esempio è la mia data di nascita, come firma digitale.
        cin>>veic[i].dataq;
    }
    
    for(i=0;i<4;i++){                                                                               //scorro l'array relativo alla cilindrata e stampo 
        if(veic[i].cilindrata>1000){                                                                //tutti i dati del veiolo con cilindrata superiore a 1000
            cout<<"Auto con cilindrata maggiore di 1000: "<<endl;
            cout<<"marca: "<<veic[i].marca<<endl;
            cout<<"modello: "<<veic[i].modello<<endl;
            cout<<"cilindrata: "<<veic[i].cilindrata<<endl;
            cout<<"data di acquisto: "<<veic[i].dataq<<endl;
        }
    }

    return 0;
}