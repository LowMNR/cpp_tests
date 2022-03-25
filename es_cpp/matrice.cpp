#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

    srand(time(NULL));
    int n,m,somma=0;

    cout<<"inserire numero righe: ";
    cin>>n;
    cout<<"inserire numero colonne: ";
    cin>>m;
    int c[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"inserire numero: ";
            cin>>c[i][j];
            somma+=c[i][j];
        }
    }

    cout<<"la matrice contiene: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<c[i][j]<<"  ";
        }
    }

    cout<<endl;
    cout<<"la somma è "<<somma<<endl;
    return 0;
}