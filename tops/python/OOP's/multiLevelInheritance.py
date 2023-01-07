class father:
    def  place(self):
        print("this father place")

class BadaBhai(father):
    def room(slef):
        print("this is BadaBhai ka room")

class ChotaBhai(BadaBhai):
    pass

obj = ChotaBhai()
obj.place()
obj.room()

