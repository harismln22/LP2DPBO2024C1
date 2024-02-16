class Clothing extends Produk // anaknya
{
	private String size,material;
	private char gender;
	
	// construct
	public Clothing()
	{
		this.size = "";
		this.material = "";
		this.gender = ' ';
	}
	
	public Clothing(String size, String material, char gender)
	{
		this.size = size;
		this.material = material;
		this.gender = gender;
	}
	
	/* getter*/
	public String getSize()
	{
		return this.size;
	}
	
	public String getMaterial()
	{
		return this.material;
	}
	
	public char getGender()
	{
		return this.gender;
	}
	
	/* setter */
	public void setSize(String size)
	{
		this.size = size;
	}
	
	public void setMaterial(String material)
	{
		this.material = material;
	}
	
	public void setGender(char gender)
	{
		this.gender = gender;
	}
}