#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

    srand(time(NULL));
    int n,i;
    cout<<"inserisci un numero: ";
    cin>>n;
    int a[n];

    for(i=0;i<n;i++){
        a[i]=rand()%n+1;
    }

    for(i=0;i<n;i++){
        
    }


}