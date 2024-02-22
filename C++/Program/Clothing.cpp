#include "Produk.cpp"

using namespace std;

class Clothing : public Produk
{
	private: 
		string size,material;
		string gender;
		
	public:
		// construct
		Clothing()
		{
			this->size = "";
			this->material = "";
			this->gender = "-";
		}
		
		Clothing(string size, string material, string gender)
		{
			this->size = size;
			this->material = material;
			this->gender = gender;
		}
		
		/* getter */
		string getSize()
		{
			return this->size;
		}
		
		string getMaterial()
		{
			return this->material;
		}
		
		string getGender()
		{
			return this->gender;
		}
		
		/* setter */
		void setSize(string size)
		{
			this->size = size;
		}
		
		void setMaterial(string material)
		{
			this->material = material;
		}
		
		void setGender(string gender)
		{
			this->gender = gender;
		}
};