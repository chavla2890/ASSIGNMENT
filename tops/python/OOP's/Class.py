# class is user define function as like structure 
class car():
    def method(self,name,model):
        self.name=name
        self.model=model
        return name, model
    
    def method2(self):
        pass

obj = car() #createrd object

print(obj.method("audi","l1"))