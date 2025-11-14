#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string imie;
	cout<<"Podaj imie: "<<endl;
	cin>>imie;
	cout<<"Podaj nazwisko: "<<endl;
	cin>>nazwisko;
	ofstream plik("nazwy.txt");
	if (!plik.is_open()){
	cout<<"Nie otwarto pliku\n"<<endl;
	return 1;
	}
plik<<imie<<" "<<nazwisko;
plik.close();
	return 0;
}
