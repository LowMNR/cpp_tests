//Scrivere un programma per stampare la dimensione di 4 tipi di variabili e puntatori: Int, Char, Float, Double e Long per ottenere il seguente risultato:
#include <iostream>
using namespace std;
int main(){
    //variabili
    int a;
    float b;
    char c;
    double d;
    long e;
    
    //puntatori
    int *ptr;
    float *ptr1;
    char *ptr2;
    double *ptr3;
    long *ptr4;

    //dimensione delle variabili
    cout<<"Dimesione delle Variabili: \n";
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(e)<<endl;

    //dimensione dei puntatori
    ptr=&a;
    ptr1=&b;
    ptr2=&c;
    ptr3=&d;
    ptr4=&e;

    cout<<"dimensione dei puntatori: \n";
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(ptr1)<<endl;
    cout<<sizeof(ptr2)<<endl;
    cout<<sizeof(ptr3)<<endl;
    cout<<sizeof(ptr4)<<endl;


    return 0;
}