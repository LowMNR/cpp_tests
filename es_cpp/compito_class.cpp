#include <iostream>
using namespace std;

int main()
{
	float v[10];
	int a,b=0,c=0,d=0,e=0,f=0;
	
	for(int i=0;i<10;i++){
		cout<<"Inserire il "<<i+1<<" numero:"<<endl;
		cin>>v[i];
	}
	cout<<"interno dell'array: "<<endl;

	for(int i=0;i<10;i++){
		cout<<v[i]<<"\t";
	}
	cout<<endl<<"array al contrario: "<<endl;

	for(int i=9;i>=0;i--){
		cout<<v[i]<<"\t";
	}

	if(v[0]>0){
		v[0]++;
		cout<<endl<<"Il primo numero e' stato aumentato di 1: "<<v[0]<<endl;
	}

	cout<<"I primi due numeri si sono invertiti"<<endl;
	a=v[0];
	v[0]=v[1];
	v[1]=a;
	cout<<v[0]<<"\t"<<v[1];

    cout<<endl<<"Numeri inseriti raddopiati: "<<endl;
    for(int i=0;i<10;i++){
        v[i]*=2;
        cout<<v[i]<<"\t";
    }
    
    for(int i=0;i<10;i++){
        if(v[i]>0){
            b++;
        }
        f=v[i];
        if(f%2==0){
            c++;
        }
    }

    for(int i=0;i<10;i++){
        d+=v[i];
    }
	
    cout<<"Numeri pari inseriti: "<<c<<endl<<"Numeri positivi inseriti: "<<b<<endl;
    e=d/10;
	cout<<"La somma dei numeri e': "<<d<<" La media dei numeri e': "<<e;
	return 0;
}
