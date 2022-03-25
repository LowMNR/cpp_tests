#include <iostream>
using namespace std;
int main(){

    int v[5]={6,9,4,2,5};
    //dichiarare variabile puntatore
    int *ptr;

    //assegno a ptr l'indirizzo della variabile x
    ptr=&[0];                                                                                                                                                
    cout<<(*(ptr+1)) - (*ptr+5) + (*(ptr+1))<<endl;

    return 0;
}