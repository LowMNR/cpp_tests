/* Assegnato una matrice di 10x10 valori interi, 
determinare valore max e valore min e 
rispettive posizioni (indici). */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

    srand(time(NULL));
    int m[10][10];
    int max=0,min=11;
    int pmin,pmin2,pmax,pmax2;

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            m[i][j]=rand()%10+1;
        }
    }

    cout<<"la matrice contiene: \n";
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(m[i][j]>max){
                max=m[i][j];
                pmax=i;
                pmax2=j;
            }
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(m[i][j]<min){
                min=m[i][j];
                pmin=i;
                pmin2=j;
            }
        }
    }
    cout<<"il numero massimo e'"<<max<<endl;
    cout<<"posizione del massimo: "<<pmax<<" "<<pmax2<<endl;
    cout<<"il numero minimo e'"<<min<<endl;
    cout<<"posizione del minimo: "<<pmin<<" "<<pmin2<<endl;


    return 0;
}