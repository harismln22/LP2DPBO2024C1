#include <iostream>
#include <string>

using namespace std;

class Produk
{
	private:
		string nama;
		string id;
		string brand;
		string price;
	
	public:
	// construct
	Produk()
	{
		this->nama = "";
		this->id = "";
		this->brand = "";
		this->price = "";
	}
	
	Produk(string nama, string id, string brand, string price)
	{
		this->nama = nama;
		this->id = id;
		this->brand = brand;
		this->price = price;
	}
	/* setter */
	void setNama(string nama)
	{
		this->nama = nama;
	}
	
	void setId(string id)
	{
		this->id = id;
	}
	
	void setBrand(string brand)
	{
		this->brand = brand;
	}
	
	void setPrice(string price)
	{
		this->price = price;
	}
	/* getter */
	string getNama()
	{
		return this->nama;
	}
	
	string getId()
	{
		return this->id;
	}
	
	string getBrand()
	{
		return this->brand;
	}
	
	string getPrice()
	{
		return this->price;
	}	
};