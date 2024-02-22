from Clothing import Clothing

class Shirt(Clothing):
    __color = ""
    __sleeve_type = ""
    
    def __init__ (self, color = "", Type = ""):
        self.__color = color
        self.__sleeve_type = Type
        
    # getter #
    def getColor(self):
        return self.__color

    def getType(self):
        return self.__sleeve_type
        
    # setter #
    def setColor(self, color):
        self.__color = color

    def setType(self, type):
        self.__sleeve_type = type
        
    def BuatBaju(self, listShirt):  # prosedur pembuatan baju
        temp = Shirt()  # objek
        req_nama = input("Masukkan nama baju: ")
        req_id = input("Masukkan ID baju: ")
        req_brand = input("Masukkan brand baju: ")
        req_price = input("Masukkan harga baju: ")
        req_size = input("Masukkan ukuran baju: ")
        print("Pilih material baju:")
        print("1. Katun || 2. Kulit || 3. Linen || 4. Other")
        req_material = input("Pilih: ")  # input sesuai opsi
        if req_material == "1" or req_material.lower() == "katun":
            req_material = "Katun"
        elif req_material == "2" or req_material.lower() == "kulit":
            req_material = "Kulit"
        elif req_material == "3" or req_material.lower() == "linen":
            req_material = "Linen"
        else:
            req_material = input("Masukkan material yang diinginkan: ")

        req_gender = input("Masukkan gender baju [L/P]: ")
        while req_gender.upper() != "L" and req_gender.upper() != "P":  # selama yang diinput bukan L atau P
            print("Jangan ngawur cik[L/P]: ")
            req_gender = input()

        req_color = input("Masukkan warna baju: ")
        print("Masukkan tipe lengan baju:")
        print("1. Regular Sleeve || 2. Raglan Sleeve || 3. Cap Sleeve || 4. Other")
        req_tipe = input("Pilih: ")  # memilih opsi
        if req_tipe == "1" or req_tipe.lower() == "regular":
            req_tipe = "Regular"
        elif req_tipe == "2" or req_tipe.lower() == "raglan":
            req_tipe = "Raglan"
        elif req_tipe == "3" or req_tipe.lower() == "cap":
            req_tipe = "Cap"
        else:
            req_tipe = input("Masukkan tipe lengan baju yang diinginkan: ")
        # mengeset semua
        temp.setNama(req_nama)
        temp.setId(req_id)
        temp.setBrand(req_brand)
        temp.setPrice(req_price)
        temp.setSize(req_size)
        temp.setMaterial(req_material)
        temp.setGender(req_gender)
        temp.setColor(req_color)
        temp.setType(req_tipe)

        listShirt.append(temp)  # menambahkan ke dalam list

    # print all shirts that have been made
    def tampil (self,listShirt):
        if listShirt:
            maxNameLength = len("Nama")
            maxIdLength = len("Id")
            maxBrandLength = len("Brand")
            maxPriceLength = len("Price")
            maxSizeLength = len("Size")
            maxMaterialLength = len("Material")
            maxGenderLength = len("Gender")
            maxColorLength = len("Warna")
            maxTypeLength = len("Sleeve type")

            for shirt in listShirt:
                if len(shirt.getNama()) > maxNameLength: maxNameLength = len(shirt.getNama())
                if len(shirt.getId()) > maxIdLength: maxIdLength = len(shirt.getId())
                if len(shirt.getBrand()) > maxBrandLength: maxBrandLength = len(shirt.getBrand())
                if len(shirt.getPrice()) > maxPriceLength: maxPriceLength = len(shirt.getPrice())
                if len(shirt.getSize()) > maxSizeLength: maxSizeLength = len(shirt.getSize())
                if len(shirt.getMaterial()) > maxMaterialLength: maxMaterialLength = len(shirt.getMaterial())
                if len(shirt.getGender()) > maxGenderLength: maxGenderLength = len(shirt.getGender())
                if len(shirt.getColor()) > maxColorLength: maxColorLength = len(shirt.getColor())
                if len(shirt.getType()) > maxTypeLength: maxTypeLength = len(shirt.getType())

            headers = ["Nama", "Id", "Brand", "Price", "Size", "Material", "Gender", "Warna", "Sleeve type"]
            maxLengths = [maxNameLength, maxIdLength, maxBrandLength, maxPriceLength, maxSizeLength, maxMaterialLength, maxGenderLength, maxColorLength, maxTypeLength]

            print("|| ", end="")
            for i in range(len(headers)):
                print(headers[i] + " " * (maxLengths[i] - len(headers[i]) + 1) + "|| ", end="")
            print()

            for shirt in listShirt:
                data = [shirt.getNama(), shirt.getId(), shirt.getBrand(), shirt.getPrice(), shirt.getSize(), shirt.getMaterial(), shirt.getGender(), shirt.getColor(), shirt.getType()]
                print("|| ", end="")
                for i in range(len(data)):
                    print(data[i] + " " * (maxLengths[i] - len(data[i]) + 1) + "|| ", end="")
                print()
        else:
            print("KOSONG!")

