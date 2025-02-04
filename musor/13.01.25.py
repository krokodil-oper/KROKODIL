#1
class Dog:
    def __init__(self, name, breed):
        self.name = name
        self.breed = breed
    def bark(self):
        return('Гав-гав!')
dog = Dog('baster', 'avhcarka')
print(dog.name)
print(dog.breed)
print(dog.bark())

#2
class Rectangle:
    def __init__(self, dlina, shirina):
        self.dlina = dlina
        self.shirina = shirina
    def ploshad(self):
        return self.dlina * self.shirina 
    def perimetr(self):
        return 2 * (self.dlina + self.shirina)
    
rectangle = Rectangle(15, 10)
print(rectangle.dlina)
print(rectangle.shirina)
print(rectangle.perimetr())
print(rectangle.ploshad())

#3
    




