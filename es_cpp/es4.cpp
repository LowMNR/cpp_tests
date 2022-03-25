#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){

    srand(time(NULL));
    int n,max=0,min=10;
    int pos,i,pos2=0,ver,c;
    int voti_4=0,voti_5=0,voti_6=0;
    float media,somma=0,aux;
    string cognome;
    bool trovato=false;
    cout<<"numero alunni: ";
    cin>>n;
    string alunni[n],c1;
    int voti[n][5],somma1[n],media1[n],max1[n],pos1[n],media2[n];

    // riempimento cognomi
    for(int i=0;i<n;i++){
        cout<<"cognome del "<<i+1<<" alunno: ";
        cin>>alunni[i];
    }

    // riempimento matrice
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            voti[i][j]=rand()%8+3;
        }
    }

    // cout matrice
    for(int i=0;i<n;i++){
        cout<<alunni[i]<<"\t";
        for(int j=0;j<5;j++){
            cout<<voti[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"inserire cognome: \n";
    cin>>cognome;
    i=0;

    // posizione cognome
    while(!trovato && i<n){
        if(cognome==alunni[i]){
            trovato=true;
            pos=i;
        }
        i++;
    }

    // voti alunno inserito
    cout<<"i voti dell'alunno "<<cognome<<" sono: \n";
    for(int j=0;j<5;j++){
        cout<<voti[pos][j]<<"\t";
    }
    cout<<endl;

    // massimo, minimo, media
    for(int j=0;j<5;j++){
        somma+=voti[pos][j];
        if(voti[pos][j]>max){
            max=voti[pos][j];
        }
        if(voti[pos][j]<=min){
            min=voti[pos][j];
        }
    }
    media=somma/5;
    cout<<"voto massimo di "<<cognome<<" e' "<<max<<endl;
    cout<<"minimo: "<<min<<endl;
    cout<<"media: "<<media<<endl;

    // voto massimo fra tutti
    max=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            if(voti[i][j]>max){
                max=voti[i][j];
                pos=i;
                pos2=j;
            }
        }
    }
    cout<<"il voto massimo e' "<<max<<" ed e' stato conseguito da "<<alunni[pos]<<endl;

    // media verifica richiesta
    cout<<"inserisci il numero della verifica: ";
    cin>>ver;
    ver--;
    somma=0;
    for(int i=0;i<n;i++){
        somma+=voti[i][ver];
        if(voti[i][ver]<=4){
            voti_4++;
        }else{
            if(voti[i][ver]==5){
                voti_5++;
            }else{
                if(voti[i][ver]>=6){
                    voti_6++;
                }
            }
        }
    }
    media=somma/n;
    cout<<"la media della verifica "<<ver+1<<" e' "<<media<<endl;
    cout<<"i voti con 4 o sotto 4 sono: "<<voti_4<<" quelli uguali a 5 sono: "<<voti_5<<" e quelli maggiori o uguali di 6 sono: "<<voti_6<<endl;

    // alunno con media più alta
    for(int i=0;i<n;i++){
        somma1[i]=0;
        for(int j=0;j<5;j++){
            somma1[i]+=voti[i][j];
        }
    }
    for(int i=0;i<n;i++){
        media1[i]=somma1[i]/5;
    }
    max=0;
    for(int i=0;i<n;i++){
        if(media1[i]>max){
            max=media1[i];
            pos=i;
        }
    }
    cout<<"l'alunno con la media piu' alta e': "<<alunni[pos]<<" con una media di: "<<max<<endl;

    //classifica
    cout<<endl;
    cout<<"classifica: "<<endl;
    for(int i=n;i>=0;i--){
        for(int i=n;i>-1;i--){
            if(media1[i]>media1[i-1] && i!=0){
                c=media1[i];
                media1[i]=media1[i-1];
                media1[i-1]=c;
                c1=alunni[i];
                alunni[i]=alunni[i-1];
                alunni[i-1]=c1;
            }
        }
    }
    
    // stampa medie e cognomi 
    for(int i=0;i<n;i++){
        cout<<alunni[i]<<"\t"<<media1[i]<<endl;
    }

    return 0;
}