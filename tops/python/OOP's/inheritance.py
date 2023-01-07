class parent():
    def method(self):
        print("this is parent class")
class child(parent):
    pass

obj = child()
obj.method()