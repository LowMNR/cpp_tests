/* Scrivere un programma che memorizzi in un vettore n voti (il programma deve controllare 
che i valori inseriti siano compresi tra 0 e 10!). In seguito, per ogni voto, il programma dovrà 
visualizzare, oltre al voto, la seguente frase 
(tramite una variabile di tipo string):
-- se voto <= 4  “gravemente insufficiente”
-- se 4<voto<=5,5 “insufficiente”
-- se 6<=voto<=7 “sufficiente”
-- se 7<voto<=8 “buono”
-- se voto > 8  “ottimo”
Calcolare e visualizzare anche:
-- la media totale
-- il numero di voti insufficienti
-- la media de voti insufficienti */
#include <iostream>
using namespace std;
int main(){
	
    int n;
    
    cout<<"inserisci n voti: ";
    cin>>n;
    
    float v[n],vi,media_vi=0,media_tot,somma=0,somma_ins;
    
    for(int i=0;i<n;i++){
        cout<<"inserisci il tuo voto: ";
        cin>>v[i];
        if(v[i]>10 || v[i]<0){
            cout<<"Inseriscilo di nuovo: ";
            cin>>v[i];
        }
		else{
            if(v[i]<=4){
                cout<<"voto gravemente insufficente"<<endl;
                vi++;
                somma_ins+=v[i];
            }
			else{
                if(v[i]<=5.5){
                    cout<<"voto insufficente"<<endl;
                    vi++;
                    somma_ins+=v[i];
                }
				else{
                    if(v[i]>=6 && v[i]<=7){
                        cout<<"voto sufficente"<<endl;
                    }
					else{
                        if(v[i]>7 && v[i]<=8){
                            cout<<"voto buono"<<endl;
                        }
						else{
                            cout<<"voto ottimo"<<endl;
                        }
                    }
                }
            }
        }
        somma+=v[i];
    }
    
    media_vi=somma_ins/vi;
    media_tot=somma/n;
    cout<<"la media totale e': "<<media_tot<<" i quali voti insufficenti sono: "<<media_vi<<" con "<<vi<<" voti insufficenti"<<endl;
    return 0;
}
