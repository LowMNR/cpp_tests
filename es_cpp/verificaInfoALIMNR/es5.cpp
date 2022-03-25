#include <iostream>
#include <string>
using namespace std;
int main(){

    int mat[3][3]={9,8,7,6,5,4,3,2,1},s=0,i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(mat[i][j]==9 || mat[i][j]==8 || mat[i][j]==7 || mat[i][j]==4 || mat[i][j]==6 || mat[i][j]==3){       //fisso i numeri della matrice superiore triangolare, stampo e sommo fra di loro
                cout<<mat[i][j];
                s+=mat[i][j];
            }
        }
    }
    cout<<"\nsomma: "<<endl<<s<<endl;

    return 0;
}