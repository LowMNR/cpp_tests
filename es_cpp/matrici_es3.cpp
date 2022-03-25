/* Data una matrice a[N][M] di elementi reali, produrre: 
•	Le somme di ogni riga 
•	Le somme di ogni colonna 
•	La riga di somma massima 
La colonna di somma massima */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

    int n,m,i,j,s,b,max_righe=0,max_colonne=0;
    srand(time(NULL));

    cout<<"inserire numero di righe: ";
    cin>>n;
    cout<<"inserire numero di colonne: ";
    cin>>m;

    int mat[n][m],sr[n],sc[m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            mat[i][j]=rand()%10+1;
        }
    }

    cout<<"la matrice contiene: \n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){  
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }    
    int somma_righe=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            somma_righe+=mat[i][j];
        }
        sr[i]=somma_righe;
        somma_righe=0;
    }
    for(i=0;i<n;i++){
        cout<<"la somma della righa e' "<<i+1<<"e' "<<sr[i]<<endl;
    }

    int somma_colonne=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            somma_colonne+=mat[i][j];
        }
        sc[i]=somma_colonne;
        somma_colonne=0;
    }
    for(int i=0;i<n;i++){
        cout<<"la somma della colonna "<<i+1<<" e': "<<sc[i]<<endl;
    }

    //riga massima
    for(int i=0;i<n;i++){
        if(sr[i]>max_righe){
            max_righe=sr[i];
            b=i+1;
        }
    }
    //colonna massima
    for(int i=0;i<m;i++){
        if(sc[i]>max_colonne){
            max_colonne=sc[i];
            s=i+1;
        }
    }
    cout<<"la riga di somma massima e': "<<b<<endl;
    cout<<"la colonna di somma massima e': "<<s<<endl;

    return 0;
}
