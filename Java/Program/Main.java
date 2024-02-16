import java.util.Scanner;
import java.util.ArrayList;
import java.util.Iterator;

public class Main
{
	public static void main(String [] args)
	{
		Scanner scan = new Scanner(System.in); // scanner
		
		System.out.println("Selamat datang di Dunia Mode kami!, buatlah pakaian sesuai dengan gaya anda!");
		int stop = 0, stop2 = 0; // marking
		
		ArrayList<Shirt> listShirt = new ArrayList<>(); // list
		while(stop == 0) // selama belum stop
		{
			Shirt Baju = new Shirt(); // deklar 1
			Shirt Baju2 = new Shirt(); // deklar 2
			Shirt Baju3 = new Shirt(); // deklar 3
			System.out.println("====================================");
			System.out.println("Pilih fitur dibawah ini!");
			System.out.println("1. Buat baju");
			System.out.println("2. Tampilkan baju");
			System.out.println("====================================");
			System.out.print("pilih (1/Buat, 2/Tampil, 3/Keluar): ");
			
			String milih = scan.next();
			switch(milih)
			{
				case "Buat": // masuk ke pembuatan baju jika secara input string "Buat"
				case "1": // masuk ke pembuatan baju jika secara input '1'
				Baju.BuatBaju(listShirt); // masuk ke fungsi membuat baju
				System.out.print("Mau buat baju kedua (y/n)?: "); // jika pengen membuat baju ke dua
				String pilih_dua = scan.next();
				if(pilih_dua.equals("y")) // jika iya
				{
					Baju2.BuatBaju(listShirt); // masuk ke fungsi membuat baju
					System.out.print("Mau buat baju ketiga (y/n)?: "); // jika pengen membuat baju ke tiga
					String pilih_tiga = scan.next();
					if(pilih_tiga.equals("y")) // jika iya
					{
						Baju3.BuatBaju(listShirt); // masuk ke fungsi membuat baju
					}
				}
				break;
				
				case "Tampil": // pilih berdasarkan input string dan akan masuk ke fungsi tampilkan baju
				case "2": // pilih berdasarkan input '2' dan akan masuk ke fungsi tampilkan baju
				Baju.TAMPILKAN(listShirt);
				break;
				
				default:
				System.out.println("Keluar? (y/n):"); // jika yakin ingin keluar
				String keluar = scan.next();
				if(keluar.equals("y")) // jika iya
				{
					stop = 1; // maka keluar
				}
				break;
			}
		}
	}
}