#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string imie;
	string nazwisko;
	cout<<"Podaj imie: "<<endl;
	cin>>imie;
	cout<<"Podaj nazwisko: "<<endl;
	cin>>nazwisko;
	ofstream plik("nazwy.txt", ios::trunc);
	if (!plik.is_open()){
	cout<<"Nie otwarto pliku\n"<<endl;
	return 1;
	}
plik<<imie<<" "<<nazwisko;
cout<<"Czy chcesz coś jeszcze dodać?"<<endl;
string odpowiedz;
cin>>odpowiedz;
	if(odpowiedz=="tak"){
	cout<<"dyktuj dalej..."<<endl;
	cin>>odpowiedz;
	plik<<" "<<odpowiedz;
	}else{
		plik.close();
			}
	return 0;
}
