#include <iostream>
#include <vector>

class MyVector {
private:
  std::vector<int> data;

public:
  // Конструктор, принимающий размер и значение для заполнения
  MyVector(int size, int value) : data(size, value) {
    std::cout << "Конструктор вызван. Размер: " << size << ", Значение: " << value << std::endl;
  }

  // Метод для вывода содержимого вектора (для проверки)
  void print() const {
    std::cout << "Содержимое вектора: ";
    for (int i = 0; i < data.size(); ++i) {
      std::cout << data[i] << " ";
    }
    std::cout << std::endl;
  }
};

int main() {
  // Создаем объект MyVector, используя конструктор
  MyVector myVec(5, 42); // Создаст вектор размера 5, заполненный значением 42

  // Выводим содержимое вектора
  myVec.print();

  return 0;
}