
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
	
	//srand(time(NULL));
	int a[10];
	int	z=0;
	for(int i=0;i<10;i++){
		a[i]=rand()%10;
		cout<<a[i]<<endl;
		if(a[i]==0){
			z++;
		}
	}
	cout<<"zero e' uscito "<<z<<" volte";

	return 0;
}

