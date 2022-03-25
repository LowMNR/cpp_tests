#include <iostream>
#include <string>
using namespace std;
int main(){
    for(int i=1;i<=3;i++){
        cout<<i<<" Elenco1"<<endl;
        for(int x=1;x<=i;x++){
            cout<<"\t"<<x<<" Elenco2"<<endl;
        }
    }
    return 0;
}
