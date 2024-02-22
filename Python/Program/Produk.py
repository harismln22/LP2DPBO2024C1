class Produk:
    __nama = ""
    __id = ""
    __brand = ""
    __price = ""
    
    def __init__ (self, name = "", id = "", brand = "", price = ""):
        self.__nama = name
        self.__id = id
        self.__brand = brand
        self.__price = price
        
    # getter #
    def getNama(self):
        return self.__nama
        
    def getId(self):
        return self.__id
    
    def getBrand(self):
        return self.__brand
    
    def getPrice(self):
        return self.__price
    
    # setter #
    def setNama(self, name):
        self.__nama = name
        
    def setId(self, id):
        self.__id = id
    
    def setBrand(self, brand):
        self.__brand = brand
    
    def setPrice(self, price):
        self.__price = price
    