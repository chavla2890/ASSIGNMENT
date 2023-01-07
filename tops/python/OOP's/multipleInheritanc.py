class father:
    def money(self):
        print("this is father money")

class mother:
    def food(self):
        print("this is mother money")

class child(father, mother):
    pass    

obj = child()
obj.food()
obj.money()
