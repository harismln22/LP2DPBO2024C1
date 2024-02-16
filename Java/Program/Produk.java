class Produk // sebagai orangtua
{
	private String nama,id, brand, price;
	
	// construct
	public Produk()
	{
		this.nama = "";
		this.id = "";
		this.brand = "";
		this.price = "";
	}
	
	public Produk(String nama, String Id, String brand, String price)
	{
		this.nama = nama;
		this.id = Id;
		this.brand = brand;
		this.price = price;
	}
	
	/* getter*/
	public String getName()
	{
		return this.nama;
	}
	
	public String getId()
	{
		return this.id;
	}
	
	public String getBrand()
	{
		return this.brand;
	}
	
	public String getPrice()
	{
		return this.price;
	}
	
	/* setter */
	public void setNama(String name)
	{
		this.nama = name;
	}
	
	public void setId(String Id)
	{
		this.id= Id;
	}
	
	public void setBrand(String brand)
	{
		this.brand = brand;
	}
	
	public void setPrice(String price)
	{
		this.price= price;
	}
	
	
}