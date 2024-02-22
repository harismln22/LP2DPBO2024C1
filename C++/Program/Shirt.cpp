#include "Clothing.cpp"

using namespace std;

class Shirt : public Clothing
{
	private:
		string color;
		string sleeve_type;
		
	public:
		// construct
		Shirt()
		{
			this->color = "";
			this->sleeve_type = "";
		}
		
		Shirt(string color, string type)
		{
			this->color = color;
			this->sleeve_type = type;
		}
		
		// setter
		void setType(string type)
		{
			this->sleeve_type = type;
		}
		
		void setColor(string color)
		{
			this->color= color;
		}
		
		// getter
		string getType()
		{
			return this->sleeve_type;
		}
		
		string getColor()
		{
			return this->color;
		}
		
		void BuatBaju(list<Shirt>& listShirt) // prosedur pembuatan baju
		{
			Shirt temp; // objek
			string req_nama, req_id, req_brand, req_price, req_size, req_material, req_color, req_tipe; // deklar
			string req_gender;
			/* input */
			cout << "Masukkan nama baju: ";
			cin >> req_nama;
			cout << "Masukkan ID baju: ";
			cin >> req_id;
			cout << "Masukkan brand baju: ";
			cin >> req_brand;
			cout << "Masukkan harga baju: ";
			cin >> req_price;
			cout << "Masukkan ukuran baju: ";
			cin >> req_size;
			cout << "Pilih material baju:" << endl; 
			cout << "1. Katun || 2. Kulit || 3. Linen || 4. Other" << endl;
			cout << "Pilih: ";
			cin >> req_material; // input sesuai opsi
			if(req_material == "1" || req_material == "Katun") 
			{
				req_material = "Katun";
			}
			else if(req_material == "2" || req_material == "Kulit")
			{
				req_material = "Kulit";
			}
			else if(req_material == "3" || req_material == "Linen")
			{
				req_material = "Linen";
			}
			else
			{
				cout <<"Masukkan material yang diinginkan: ";
				cin >> req_material;
			}
			cout << "Masukkan gender baju [L/P]: ";
			cin >> req_gender;
			while(req_gender != "L" && req_gender != "P") // selama yang diinput bukan L atau P
			{
				cout << "Jangan ngawur cik[L/P]: " << endl;
				cin >> req_gender;
			}

			cout << "Masukkan warna baju: ";
			cin >> req_color;
			cout << "Masukkan tipe lengan baju: "<< endl;
			cout << "1. Regular Sleeve || 2. Raglan Sleeve || 3. Cap Sleeve || 4. Other" << endl;
			cout << "Pilih: ";
			cin >> req_tipe; // memilih opsi
			if(req_tipe == "1" || req_tipe == "Regular")
			{
				req_tipe = "Regular";
			}
			else if(req_tipe == "2" || req_tipe == "Raglan")
			{
				req_tipe= "Raglan";
			}
			else if(req_tipe == "3" || req_tipe == "Cap")
			{
				req_tipe = "Cap";
			}
			else
			{
				cout <<"Masukkan tipe lengan baju yang diinginkan: ";
				cin >> req_tipe;
			}
			/* mengeset semua */
			temp.setNama(req_nama);
			temp.setId(req_id);
			temp.setBrand(req_brand);
			temp.setPrice(req_price);
			temp.setSize(req_size);
			temp.setMaterial(req_material);
			temp.setGender(req_gender);
			temp.setColor(req_color);
			temp.setType(req_tipe);
			
			listShirt.push_back(temp); // menambahkan ke dalam list
		}
		
		void tampil(list<Shirt> listShirt) 
		{
			if (!listShirt.empty()) 
			{
				int maxNameLength = strlen("Nama"), maxIdLength = strlen("Id"), maxBrandLength = strlen("Brand");
				int maxPriceLength = strlen("Price"), maxSizeLength = strlen("Size"), maxMaterialLength = strlen("Material");
				int maxGenderLength = strlen("Gender"), maxColorLength = strlen("Warna"), maxTypeLength = strlen("Sleeve type");

				for (Shirt shirt : listShirt) // loop semua list
				{
					/* mengambil string nama paling terpanjang untuk lebar tabel */
					if (shirt.getNama().length() > maxNameLength) maxNameLength = shirt.getNama().length();
					if (shirt.getId().length() > maxIdLength) maxIdLength = shirt.getId().length();
					if (shirt.getBrand().length() > maxBrandLength) maxBrandLength = shirt.getBrand().length();
					if (shirt.getPrice().length() > maxPriceLength) maxPriceLength = shirt.getPrice().length();
					if (shirt.getSize().length() > maxSizeLength) maxSizeLength = shirt.getSize().length();
					if (shirt.getMaterial().length() > maxMaterialLength) maxMaterialLength = shirt.getMaterial().length();
					if (shirt.getGender().length() > maxGenderLength) maxGenderLength = shirt.getGender().length();
					if (shirt.getColor().length() > maxColorLength) maxColorLength = shirt.getColor().length();
					if (shirt.getType().length() > maxTypeLength) maxTypeLength = shirt.getType().length();
				}

				string headers[] = {"Nama", "Id", "Brand", "Price", "Size", "Material", "Gender", "Warna", "Sleeve type"};
				int maxLengths[] = {maxNameLength, maxIdLength, maxBrandLength, maxPriceLength, maxSizeLength, maxMaterialLength, maxGenderLength, maxColorLength, maxTypeLength};

				cout << "|| ";
				for (int i = 0; i < sizeof(headers)/sizeof(headers[0]); i++) {
					cout << headers[i];
					for (int j = 0; j < maxLengths[i] - headers[i].length() + 1; j++) {
						cout << " ";
					}
					cout << "|| ";
				}
				cout << std::endl;

				for (Shirt shirt : listShirt) {
					string data[] = {shirt.getNama(), shirt.getId(), shirt.getBrand(), shirt.getPrice(), shirt.getSize(), shirt.getMaterial(), shirt.getGender(), shirt.getColor(), shirt.getType()};
					cout << "|| ";
					for (int i = 0; i < sizeof(data)/sizeof(data[0]); i++) {
						cout << data[i];
						for (int j = 0; j < maxLengths[i] - data[i].length() + 1; j++) {
							cout << " ";
						}
						cout << "|| ";
					}
					cout << endl;
				}
			} else {
				cout << "KOSONG!" << endl;
			}
		}
};