#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream liczby("liczby.txt");
	string linia;
	int suma = 0;
	while (getline(liczby, linia)){
	cout<<linia<<endl;
	if(linia.size() > 0){
	suma+= stoi(linia);
}
}
	cout<<"Suma równa się: "<<suma<<endl;
liczby.close();
	return 0;
}
