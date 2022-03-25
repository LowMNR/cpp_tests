#include <iostream>
using namespace std;
int main(){

	int i=0,f,i1=0;
	for(f=0;f<5;f++){
		for(i1=0;i1!=f;i1++){
			cout<<"$";
		}
		cout<<"*";
		cout<<endl;
		if(f==4){
			cout<<"$$$$$";
		}
	}

	return 0;
}

