#include<iostream>

using namespace std;

class Kasir{
	private:
		int tag;
		string barang;
		string harga;
	public:
	
	Kasir(int tag,string barang,string harga);
			int getTag();
			string getBarang();	
			string getHarga();
};

Kasir::Kasir(int tag,string barang,string harga){
	this->tag=tag;
	this->barang=barang;
	this->harga=harga;
	
}

int Kasir::getTag(){
	return this->tag;
	
}
string Kasir::getBarang(){
	return this->barang;
}
string Kasir::getHarga(){
	return this->harga;
}
int main(){
Kasir kasir = Kasir(4535,"Buku","10000");
cout<< "tag : "<<kasir.getTag()<<endl;
cout<< "Barang : "<<kasir.getBarang()<<endl;
cout<< "Harga : "<<kasir.getHarga()<<endl;
return 0;}

