
#include <iostream>
using namespace std;
int main(){
	int uf[5], lav[20], i=0, stip[20], cn[5]={0},somm[5]={0}, p=0, max, max2=0, max3=0, pe=0;
	float med[5];
	cout << "E' necessario inserire l'ufficio del lavoratore e lo stipendio.\n";
	for(i=0;i<20;i++){
		cout << "Lavoratore N." << i << ":\n-Ufficio: ";
		cin >> uf[i];
		while(uf[i]>5 && uf[i]<0){
			cout << "ERRORE, non esiste un ufficio N.6 o superiore. \nSono disponibili solo gli uffici N.1-2-3-4-5.\n Re-inserire ufficio: ";
			cin >> uf[i];
		}
		cout << "-Stipendio: Eur. ";
		cin >> stip[i];
		if(max2<stip[i]){
			max2=stip[i];
			p=i;
		}
		switch (uf[i]){
			case 1:
				somm[0]+=stip[i];
				cn[0]++;
				break;
			case 2:
				somm[1]+=stip[i];
				cn[1]++;
				break;
			case 3:
				somm[2]+=stip[i];
				cn[2]++;
				break;
			case 4:
				somm[3]+=stip[i];
				cn[3]++;
				break;
			case 5:
				somm[4]+=stip[i];
				cn[4]++;
				break;
		}
	}
	max=somm[0];
	for(i=0;i<5;i++){
		med[i]=somm[i]/cn[i];
		if(max<somm[i]){
			max=somm[i];
			pe=i;
		}
	}
	cout << "\n lavoratori ufficio 4: " << cn << ".";
	cout << "\n stipendio piu' alto e': Ufficio N." << pe << ",\ncon stipendio: Eur." << max << ".";
	cout << "\n lavoratore con lo stipendio piu' alto e' il numero: " << pe << " con: Eur." << max2 << ".";
	cout << "La media degli stipendi dell'ufficio 2 e': " << med[1];
	return 0;
}
