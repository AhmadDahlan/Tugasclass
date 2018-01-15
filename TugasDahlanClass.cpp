#include <iostream>
#include <string>
using namespace std;

class ular{
	public:
	void beracun(string racun);
	string perilaku, habitat, makanan;
	
};

int main(){
	ular kobra, derik, piton;
	
	kobra.perilaku = "Berperilaku Agresive ";
	derik.perilaku = "Berperilaku Agresive ";
	piton.perilaku = "Berperilaku Tenang ";
	
	kobra.habitat = "Habitatnya Di Hutan ";
	derik.habitat = "Habitatnya Di Gurun Pasir ";
	piton.habitat = "Habitatnya Di Rawa ";
	
	kobra.makanan = "Makanannya Tikus ";
	derik.makanan = "Makanannya Katak ";
	piton.makanan = "Makanannya Kerbau ";
}
