<?php

require('Shirt.php');

echo '<h3>'. "Selamat datang di dunia kami!, buatlah pakaian sesuai dengan gaya anda!" . '</h3>'. '<br/>';

$person1 = new Shirt();
$person2 = new Shirt();
$person3 = new Shirt();


# pakaian pertama
echo '<b>'. "Membuat pakaian pertama" . '</b>'. '<br/>';
echo "Masukkan Nama baju: ". '<br/>';
$person1->setNama("Gemoy"). '<br/>';
echo $person1->getNama(). '<br/>';

echo "Masukkan Id baju: " . '<br/>';
$person1->setId("02"). '<br/>';
echo $person1->getId(). '<br/>';

echo "Masukkan Brand baju: ". '<br/>';
$person1->setBrand("Adibas"). '<br/>';
echo $person1->getBrand(). '<br/>';

echo "Masukkan Harga baju: ". '<br/>';
$person1->setPrice("70000"). '<br/>';
echo $person1->getPrice("70000"). '<br/>';

echo "Masukkan ukuran baju: ". '<br/>';
$person1->setSize("XL"). '<br/>';
echo $person1->getSize("XL"). '<br/>';

echo "Masukkan material baju: ". '<br/>';
$person1->setMaterial("Katun"). '<br/>';
echo $person1->getMaterial(). '<br/>';

echo "baju untuk (P/L): ". '<br/>';
$person1->setGender("L"). '<br/>';
echo $person1->getGender(). '<br/>';

echo "Masukkan Warna: ". '<br/>';
$person1->setColor("Gray"). '<br/>';
echo $person1->getColor(). '<br/>';

echo "Masukkan tipe lengan baju: ". '<br/>';
$person1->setSleeve("Regular"). '<br/>';
echo $person1->getSleeve(). '<br/>';
echo '<br/>';
# pakaian kedua
echo '<b>'. "Membuat pakaian kedua" . '</b>'. '<br/>';
echo "Masukkan Nama baju: ". '<br/>';
$person2->setNama("AMPUNDIJE"). '<br/>';
echo $person2->getNama(). '<br/>';

echo "Masukkan Id baju: " . '<br/>';
$person2->setId("03"). '<br/>';
echo $person2->getId(). '<br/>';

echo "Masukkan Brand baju: ". '<br/>';
$person2->setBrand("BIBD"). '<br/>';
echo $person2->getBrand(). '<br/>';

echo "Masukkan Harga baju: ". '<br/>';
$person2->setPrice("70000"). '<br/>';
echo $person2->getPrice(). '<br/>';

echo "Masukkan ukuran baju: ". '<br/>';
$person2->setSize("L"). '<br/>';
echo $person2->getSize(). '<br/>';

echo "Masukkan material baju: ". '<br/>';
$person2->setMaterial("Cotton"). '<br/>';
echo $person2->getMaterial(). '<br/>';

echo "baju untuk (P/L): ". '<br/>';
$person2->setGender("L"). '<br/>';
echo $person2->getGender(). '<br/>';

echo "Masukkan Warna: ". '<br/>';
$person2->setColor("White"). '<br/>';
echo $person2->getColor(). '<br/>';

echo "Masukkan tipe lengan baju: ". '<br/>';
$person2->setSleeve("Regular"). '<br/>';
echo $person2->getSleeve(). '<br/>';
echo '<br/>';
#pakaian ketiga
echo '<b>'. "Membuat pakaian ketiga" . '</b>'. '<br/>';
echo "Masukkan Nama baju: ". '<br/>';
$person3->setNama("Anisa") . '<br/>';
echo $person3->getNama() . '<br/>';

echo "Masukkan Id baju: " . '<br/>';
$person3->setId("01") . '<br/>';
echo $person3->getId() . '<br/>';

echo "Masukkan Brand baju: ". '<br/>';
$person3->setBrand("RAQUAT").  '<br/>';
echo $person3->getBrand() . '<br/>';

echo "Masukkan Harga baju: ". '<br/>';
$person3->setPrice("70000") . '<br/>';
echo $person3->getPrice() . '<br/>';

echo "Masukkan ukuran baju: ". '<br/>';
$person3->setSize("L") . '<br/>';
echo $person3->getSize() . '<br/>';

echo "Masukkan material baju: ". '<br/>';
$person3->setMaterial("Linen") . '<br/>';
echo $person3->getMaterial() . '<br/>';

echo "baju untuk (P/L): ". '<br/>';
$person3->setGender("L") . '<br/>';
echo $person3->getGender() . '<br/>';

echo "Masukkan Warna: ". '<br/>';
$person3->setColor("Blue") . '<br/>';
echo $person3->getColor() . '<br/>';

echo "Masukkan tipe lengan baju: ". '<br/>';
$person3->setSleeve("Raglan") . '<br/>';
echo $person3->getSleeve() . '<br/>';

$listShirt = array($person1, $person2, $person3);
$person1->tampil($listShirt);

?>