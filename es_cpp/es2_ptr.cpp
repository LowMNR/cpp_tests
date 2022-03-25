//Scrivere un programma che scambia il 
//contenuto di due variabili inserite da tastiera tramite 
//una funzione rinominata Scambio usando i puntatori
#include <iostream>
using namespace std;
int main(){

    int a=5,b=23,c;
    int *ptr,*ptr1,*ptr2;
    cout<<"a e' uguale a: "<<a<<endl;
    cout<<"b e' uguale a: "<<b<<endl;
    cout<<"---------------------"<<endl;

    ptr=&a;
    ptr1=&b;
    ptr2=&c;

    *ptr2=*ptr;
    *ptr=*ptr1;
    *ptr1=*ptr2;

    cout<<"valori invertiti: \n";
    cout<<"a e' uguale a: "<<*ptr<<endl;
    cout<<"b e' uguale a: "<<*ptr1<<endl;




    return 0;
}