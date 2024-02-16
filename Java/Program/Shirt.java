import java.util.Scanner;
import java.util.ArrayList;
import java.util.Iterator;

class Shirt extends Clothing // anaknya juga
{
	private String color, sleeve_type;
	
	// Constructor
	public Shirt()
	{
		this.color = "";
		this.sleeve_type = "";
	}
	
	public Shirt(String color, String sleeve_type)
	{
		this.color = color;
		this.sleeve_type = sleeve_type;
	}
	
	/* getter*/
	public String getColor()
	{
		return this.color;
	}
	
	public String getType()
	{
		return this.sleeve_type;
	}
	
	/* setter */
	public void setColor(String color)
	{
		this.color = color;
	}
	
	public void setType(String type)
	{
		this.sleeve_type = type;
	}
	
	// input membuat baju
	public void BuatBaju(ArrayList<Shirt> list)
	{
		Scanner scan = new Scanner(System.in);
		Shirt temp = new Shirt();
		
		System.out.println("Masukkan Nama baju: ");
		String isi_nama = scan.next();
		temp.setNama(isi_nama);
		
		System.out.println("Masukkan Id baju: ");
		String isi_id = scan.next();
		temp.setId(isi_id);
		
		System.out.println("Masukkan Brand baju: ");
		String isi_brand = scan.next();
		temp.setBrand(isi_brand);
		
		System.out.println("Masukkan Harga baju: ");
		String isi_price = scan.next();
		temp.setPrice(isi_price);
		
		System.out.println("Masukkan ukuran baju: ");
		String isi_size = scan.next();
		temp.setSize(isi_size);
		
		System.out.println("Masukkan material baju: ");
		String isi_material = scan.next();
		temp.setMaterial(isi_material);
		
		System.out.println("baju untuk (P/L): ");
		char isi_gender = scan.next().charAt(0);
		temp.setGender(isi_gender);
		
		System.out.println("Masukkan Warna: ");
		String isi_warna = scan.next();
		temp.setColor(isi_warna);
		
		System.out.println("Masukkan tipe lengan baju: ");
		String isi_tipe = scan.next();
		temp.setType(isi_tipe);
		
		list.add(temp); // menambahkan ke list
	}
	
	// print all semua baju yang sudah dibuat
	public void TAMPILKAN(ArrayList<Shirt> listShirt)
	{
		if(listShirt != null && !listShirt.isEmpty()) // jika list tidak kosong
		{
			// Inisialisasi panjang maksimum dari setiap atribut
			int maxNameLength = "Nama".length();
			int maxIdLength = "Id".length();
			int maxBrandLength = "Brand".length();
			int maxPriceLength = "Price".length();
			int maxSizeLength = "Size".length();
			int maxMaterialLength = "Material".length();
			int maxGenderLength = "Gender".length();
			int maxColorLength = "Warna".length();
			int maxTypeLength = "Sleeve type".length();

			// Iterasi melalui setiap objek Shirt dalam listShirt
			for (Shirt shirt : listShirt) {
				maxNameLength = Math.max(maxNameLength, shirt.getName().length());
				maxIdLength = Math.max(maxIdLength, String.valueOf(shirt.getId()).length());
				maxBrandLength = Math.max(maxBrandLength, shirt.getBrand().length());
				maxPriceLength = Math.max(maxPriceLength, String.valueOf(shirt.getPrice()).length());
				maxSizeLength = Math.max(maxSizeLength, shirt.getSize().length());
				maxMaterialLength = Math.max(maxMaterialLength, shirt.getMaterial().length());
				maxGenderLength = Math.max(maxGenderLength, String.valueOf(shirt.getGender()).length());
				maxColorLength = Math.max(maxColorLength, shirt.getColor().length());
				maxTypeLength = Math.max(maxTypeLength, shirt.getType().length());
			}

			// Membuat format string untuk mencetak setiap objek Shirt dalam daftar
			String format = "|| %-" + maxNameLength + "s || %-" + maxIdLength + "s || %-" + maxBrandLength + "s || %-" + maxPriceLength + "s || %-" + maxSizeLength + "s || %-" + maxMaterialLength + "s || %-" + maxGenderLength + "s || %-" + maxColorLength + "s || %-" + maxTypeLength + "s ||\n";

			System.out.printf(format, "Nama", "Id", "Brand", "Price", "Size", "Material", "Gender", "Warna", "Sleeve type"); // membuat tabelnya
			for (Shirt shirt : listShirt)
			{
				// print setiap nama,id,brand,price,size,material,gender,warna,sleeve type
				System.out.printf(format, shirt.getName(), shirt.getId(), shirt.getBrand(), shirt.getPrice(), shirt.getSize(), shirt.getMaterial(), shirt.getGender(), shirt.getColor(), shirt.getType());
			}
			System.out.println();
		}
		else // jika list kosong
		{
			System.out.println("KOSONG!");
		}
	}
}