/* 1)	Definire una struct casa per memorizzare i dati delle case da parte di un’agenzia immobiliare. 
Ogni casa è caratterizzata da:
-numero intero di metri quadri 
-classe energetica (definita da una lettera, dove la A rappresenta la casa a minor consumo energetico la F quella a maggior consumo) 
-costo in migliaia di euro.
Chiedere all’utente i dati di tre case e poi dire qual è quella col minor costo al metro quadro e quella con la migliore classe energetica 
(in caso di parità di livello di classe energetica si riporti quella più grande).
*/
#include <iostream>
using namespace std;

struct casee
{
    int mq;
    int costo;
    char ce; 
};


int main(){
    
    int max=0,max2=0,max3=0;
    casee c1,c2,c3;

    cout<<"inserire metri quadrati, classe energetica e costo della prima casa: "<<endl;
    cin>>c1.mq;
    cin>>c1.ce;
    cin>>c1.costo;
    max=c1.costo;

    cout<<"inserire metri quadrati, classe energetica e costo della seconda casa: "<<endl;
    cin>>c2.mq;
    cin>>c2.ce;
    cin>>c2.costo;
    max2=c2.costo;

    cout<<"inserire metri quadrati, classe energetica e costo della terza casa: "<<endl;
    cin>>c3.mq;
    cin>>c3.ce;
    cin>>c3.costo;
    max3=c3.costo;

    if(max>max2){
        cout<<"la casa meno costosa e' "<<max2;
    }else{
        if(max>max)
    }





    return 0;
}
