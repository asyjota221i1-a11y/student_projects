#include <iostream>

using namespace std;

int main(){
	char x ='e';
	int wynik = 0;
	int a = 0;
	while(x!='q'){
	cout<<"kliknij q by zatrzymać"<<endl;
	cout<<"Podaj liczbę: "<<endl;
	cin>>a;
	if(a>=0){
		wynik=wynik + a;
		cout<<"  Czy dodać następną liczbę?tak(t)/nie(n)"<<endl;
		cin>>x;
	}else{
		cout<<"Nie możesz podawać wartości ujemnych!"<<endl;
	}

}
cout<<"Suma wynosi: "<<wynik;

	return 0;
}
