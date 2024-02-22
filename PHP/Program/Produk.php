<?php

class Produk
{
	private $nama, $id, $brand, $price;
	
	public function __construct($nama ='', $id = '', $brand = '', $price ='')
	{
		$this->nama = $name;
		$this->id = $id;
		$this->brand = $brand;
		$this->price = $price;
	}
	
	public function setNama($name)
	{
		$this->nama = $name;
	}
	
	public function setId($id)
	{
		$this->id= $id;
	}
	
	public function setBrand($brand)
	{
		$this->brand = $brand;
	}
	
	public function setPrice($price)
	{
		$this->price = $price;
	}
	
	public function getNama()
	{
		return $this->nama;
	}
	
	public function getId()
	{
		return $this->id;
	}
	
	public function getBrand()
	{
		return $this->brand;
	}
	
	public function getPrice()
	{
		return $this->price;
	}
}

?>