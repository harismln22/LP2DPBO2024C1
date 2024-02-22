from Shirt import Shirt

listShirt = [] # list
Baju = Shirt() # objek cucu 1
Baju2 = Shirt() # objek cucu 2
Baju3 = Shirt() # obejk cucu 3

stop = 0 # marking
fitur = 0 # var milih input
while stop == 0:
    print("++++++++++++++++++++++++++++++++++++++++")
    print("Pilih fitur dibawah ini!")
    print("1. Buat baju")
    print("2. Tampilkan baju")
    print("3. Keluar")
    print("++++++++++++++++++++++++++++++++++++++++")
    pilih = int(input("pilih (1/2/3): "))  # milih fitur
    if pilih == 1:
        Baju.BuatBaju(listShirt)  # masuk ke prosedur pembuatan baju
        kedua = input("Ingin membuat baju ke dua? (y/n): ")
        if kedua.lower() == 'y':  # jika ingin membuat baju ke 2
            Baju2.BuatBaju(listShirt)  # masuk ke prosedur pembuatan baju
            ketiga = input("Ingin membuat baju ke tiga? (y/n): ")
            if ketiga.lower() == 'y':  # jika ingin membuat baju ke 3
                Baju3.BuatBaju(listShirt)  # masuk ke pembuatan baju
    elif pilih == 2:
        Baju.tampil(listShirt)  # menampilkan baju/produk
    else:
        keluarr = input("Mau keluar? (y/n):")
        if keluarr.lower() == 'y':  # jika ingin keluar
            stop = 1  # loop berhenti

        