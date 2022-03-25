#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

	srand(time(NULL));
	int n;
	int c_sette=0;
	cout<<"quanti lanci vuoi effettuare?"<<endl;
	cin>>n;
	
	cout<<"--------------------------------"<<endl;
	for(int i=0;i<n;i++){
		int valore=rand()%7+1;
		cout<<valore<<endl;
		if(valore==7){
			c_sette++;
		}
	}
	cout<<"hai estratto "<<c_sette<<" volte 7 su "<<n<<" lanci";
	
	return 0;
}

