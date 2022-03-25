#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

	srand(time(NULL));
	int n;
	int c_sette=0;
	cout<<"quanti lanci?"<<endl;
	cin>>n;
	cout<<"------------------------"<<endl;
	for(int i=0;i<n;i++){
		int valore=rand()%10+11;
		cout<<valore<<endl;
	}

	return 0;
}

