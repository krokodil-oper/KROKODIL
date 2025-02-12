# инкапсуляция процессс создания функций внутри определенного класа, 
# который в последствии могут быть вызваны только через экземпляр этого класса
# 
# полиморфизм изменение поведения метода класса при его наследовании
# 
# наследование процесс передвчи всех свойств и методов от родительского класса дочернему 

#класс - обьект который описывает определенную сущность через свойства и методы 

#метод функция созданная внутри класса

class Car:
#self - это обращение к классу
#он нужен что бы связать функцию с классом


    def __init__(self, model, year, color):
        pass

car = Car()
print(car.model)
print(car.year)
print(car.color)

car = Car('Ford Focus', 2000, 'gray')
def start_engine(self):
    self.started = True
    return 'машина заведена'
def off_engine(self):
    self.started = False 
    return 'машина заглушенна'
car = Car('Ford Focus', 2000, 'grey')
print(car.model)
print(car.year)
print(car.color)

print(car.start_engine())
print(car.off_engine())

class Animal:
    def __init__(self, birth_year, animal_type, is_wild):
        self.animal_type = animal_type
        self.is_wild = is_wild

    def introduce(self):
        return f'Привет. Я {self.animal_tepe}'

class Lion(Animal):
    def __init__(self, animal_type, is_wild, place, age):
        super().__init__(animal_type, is_wild)
        self.place = place
        self.age = age

lion = Lion('Лев', is_wild=True)
print(lion.introduce())
print(lion.animal_type())