/*
6) Scrivere un programma per analizzare i voti conseguiti dagli studenti di una classe durante leverifiche di Informatica. Le strutture dati a disposizione sono due:
– Vettore di stringhe contenete i cognomi degli alunni
– Una matrice di interi contenete i voti
Le verifiche sono 5 e i voti conseguiti da ogni studente sono insiti nella colonna corrispondentedella matrice. Quindi ogni riga della matrice contiene i voti di uno studente nelle varie verifiche. Diseguito lo schema delle strutture dati.
Pippo    7  6  8 10 9
Pluto    6  5  3  4  7
Paperino 7  8  9  9  8
Bruto    3  4  6  7  7
Minnie   6 10  3  2  4
Il programma deve consentire:
a) Dato il cognome di un allievo stampare i voti conseguiti nelle 5 verifiche, il voto massimo, ilvoto minimo e la media.
b) Determinare il voto massimo tra tutte le verifiche e dire da chi è stato conseguito e inquale verifica. Nell’esempio il voto massimo è 10 ed è stato conseguito da Pippo nellaverifica 4 e da Minnie nella verifica 2 (La numerazione delle verifiche è 1, 2, 3, 4 e 5). Ilformato dell’output è a piacere.
c) Data una verifica letta in input (leggere il numero, es. 3) calcolare la media verifica e direanche quanti sono stati i voti <= 4, i voti uguali a 5, i voti >=6.
d) Determinare l’allievo con la media più alta
e) Stampare la classifica in base alla media, partendo dagli studenti con la media più alta
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
int main(){
	srand(time(NULL));
	int o,i,j;
	int p,p2;
	cout << "Studenti nella classe: ";
	cin >> o;
	string stu[o];
	float gra[o][5];
	float max2=0;
	float min2=11;
	//inserimento voti e cognomi
	//esercizio B
	for(int i=0;i<o;i++){
		cout << "Studente N." << i << ": " << endl << "\tCognome: ";
		cin >> stu[i];
		for(int j=0;j<5;j++){
			cout << "Voto N." << j << ": ";
			cin >> gra[i][j];
			if(gra[i][j]>10 && gra[i][j]<2){
				while(gra[i][j]>10 && gra[i][j]<2){
					cout << "Errore: non esiste un voto maggiore di 10." << endl;
					cin >> gra[i][j];
					
					if(gra[i][j]>max2)
					max2=gra[i][j];
					p=i;
					p2=j;
					if(gra[i][j]<min2)
					min2=gra[i][j];
				}
			}
			if(gra[i][j]>max2)
			max2=gra[i][j];
			
			if(gra[i][j]<min2)
			min2=gra[i][j];
		}
	}
	for(int i=0;i<o;i++){
		cout << stu[i];
		for(int j=0;j<5;j++){
			cout << "\t" <<gra[i][j];
		}
		cout << endl;
	}
	//esercizio A
	char ch1;
	cout << "Desidera cercare i voti di uno studente?(y/n)?";
	cin >> ch1;
	if(ch1=='y' && ch1=='n'){
		
	}
	else{
		while(ch1=='y' || ch1=='n'){
		cout << "Errore: non e' prevista un carattere al di fuori di y e n.";
		cin >> ch1;
		}
	}
	string ch2;
	if(ch1=='y'){
		cout << "Cognome: ";
		cin >> ch2;
	}
	int r;
	for(i=0;!(stu[i]==ch2) && i<o ;i++){
		r=i;
	}
	float max=0;
	float min=11;
	float med;
	for(i=0;i<5;i++){
		if(gra[r][i]>max)
		max=gra[r][i];
		if(gra[r][i]<min)
		min=gra[r][i];
		med+=gra[r][i];
	}
	med/=5;
	for(i=0;i<5;i++){
		cout << stu[i];
		cout << "\t" << gra[r][i];
		cout << endl;
	}
	cout << "Voto maggiore: ";
	cout << max;
	cout << endl;
	cout << "Voto minore: ";
	cout << min;
	cout << "La media dei voti e': ";
	cout << med;
	//esercizio B
	cout << "Il voto maggiore lo possiede: " << stu[p] << "\nIn posizione: " << p2+1;
	//esercizio C
	float v;
	float med2;
	float med3[o];
	float gra2[o];
	cout << "Desidera cercare una verifica?(y/n)?";
	cin >> ch1;
	if(ch1=='y' || ch1=='n'){
		
	}
	else{
		while(ch1=='y' || ch1=='n'){
		cout << "Errore: non e' prevista un carattere al di fuori di y e n.";
		cin >> ch1;
		}
	}
	if(ch1=='y'){
		cout << "Inserire il numero della verifica(1-5).";
		cout << endl;
		cin >> v;
		for(j=v;i<5;i++){
		med2+=gra[i][j];
			if(gra[i][j]<=4){
				cout << "Il voto totalizzato nella verifica N." << v << " di " << stu[j] << " e' minore di 4 e dunque gravemente insufficente.";
			}
			else{
				if(gra[i][j]==5){
					cout << "Il voto totalizzato nella verifica N." << v << " di " << stu[j] << " e' uguale a 5 e dunque insufficente.";
				}
				else{
					cout << "Il voto totalizzato nella verifica N." << v << " di " << stu[j] << " e' uguale o maggiore a 6 e dunque sufficente.";
				}
			}
		}
	}
	//esercizio D
	float maxmed=0;
	int l;
	for(int i=0;i<o;i++){
		for(int j=0;j<5;j++){
		med3[i]=gra2[j];
		}
		med3[i]/=o;
		if(maxmed<med3[i]){
			maxmed=med3[i];
			l=i;
		}
	}
	cout << "Lo studente con la media piu' alta e': " << stu[l] << " con " << maxmed;
	//esercizio E
	float t;
	for(int i=0;i<o-1;i++){
		for(int j=i;j<o-1;j++){
			if(med3[j]>med3[j+1]){
				t=med3[j];
				med3[j]=med3[j+1];
				med3[j+1]=t;
			}
		}
	}
	cout << "La classifica delle media dal maggiore al minore e':\n";
	for(int i=0;i<o;i++){
		cout << med3[i];
		cout << endl;
	}
	return 0;
}
