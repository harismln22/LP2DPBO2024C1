<?php

require('Clothing.php');

class Shirt extends Clothing
{
	private $color, $sleeveType;
	
	public function __construct($color ='', $Type ='')
	{
		$this->color = $color;
		$this->sleeveType= $Type;
	}
	
	public function setColor($color)
	{
		$this->color = $color;
	}
	
	public function setSleeve($Type)
	{
		$this->sleeveType= $Type;
	}
	
	public function getColor()
	{
		return $this->color;
	}
	
	public function getSleeve()
	{
		return $this->sleeveType;
	}
	
	public function tampil($list)  // menampilkan anggota
	{
		if($list != null && !empty($list)) // jika list tidak kosong
		{
			echo "<table border='1'>";
			echo "<tr><th>Nama</th><th>Id</th><th>Brand</th><th>Harga</th><th>Ukuran</th><th>Material</th><th>Gender</th><th>Warna</th><th>Sleeve Type</th></tr>";
			foreach ($list as $human)
			{
				echo "<tr>";
				echo "<td>" . $human->getNama() . "</td>";
				echo "<td>" . $human->getId() . "</td>";
				echo "<td>" . $human->getBrand() . "</td>";
				echo "<td>" . $human->getPrice() . "</td>";
				echo "<td>" . $human->getSize() . "</td>";
				echo "<td>" . $human->getMaterial() . "</td>";
				echo "<td>" . $human->getGender() . "</td>";
				echo "<td>" . $human->getColor() . "</td>";
				echo "<td>" . $human->getSleeve() . "</td>";
				echo "</tr>";
			}
			echo "</table>";
		}
		else // jika list kosong
		{
			echo "Kosong!\n";
		}
	}
}

?>