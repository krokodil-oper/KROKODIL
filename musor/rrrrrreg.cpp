#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm> 
#include <vector>

using namespace std;

string toLower(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

// Функция для проверки, существует ли пользователь с указанным логином в файле
bool userExists(const string& filename, const string& login) {
    ifstream file(filename);
    if (!file.is_open()) {
        // Если файла нет, считаем, что пользователей нет (логин не существует)
        return false;
    }

    string line;
    while (getline(file, line)) {
        // Разбираем строку (логин:пароль)
        size_t colonPos = line.find(':');
        if (colonPos != string::npos) {
            string existingLogin = line.substr(0, colonPos);
            if (toLower(existingLogin) == toLower(login)) { // Сравнение логинов (регистронезависимо)
                file.close();
                return true; // Логин найден
            }
        }
    }

    file.close();
    return false; // Логин не найден
}

// Функция для регистрации нового пользователя
bool registerUser(const string& filename, const string& login, const string& password) {
    if (userExists(filename, login)) {
        cout << "Ошибка: Пользователь с таким логином уже существует." << endl;
        return false; // Регистрация не удалась
    }

    ofstream file(filename, ios::app); // Открываем файл для добавления (ios::app)
    if (!file.is_open()) {
        cerr << "Ошибка: Не удалось открыть файл " << filename << " для записи." << endl;
        return false; // Регистрация не удалась
    }

    file << login << ":" << password << endl; // Записываем логин и пароль (через двоеточие)
    file.close();
    cout << "Регистрация успешна." << endl;
    return true; // Регистрация успешна
}

// Функция для проверки логина и пароля
bool loginUser(const string& filename, const string& login, const string& password) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Ошибка: Файл с пользователями не найден." << endl;
        return false;
    }

    string line;
    while (getline(file, line)) {
        // Разбираем строку (логин:пароль)
        size_t colonPos = line.find(':');
        if (colonPos != string::npos) {
            string existingLogin = line.substr(0, colonPos);
            string existingPassword = line.substr(colonPos + 1);

            if (toLower(existingLogin) == toLower(login) && existingPassword == password) { // Сравнение логина (регистронезависимо) и пароля
                file.close();
                cout << "Вход выполнен успешно." << endl;
                return true; // Вход успешен
            }
        }
    }

    file.close();
    cout << "Ошибка: Неверный логин или пароль." << endl;
    return false; // Вход не выполнен
}

int main() {
    string filename = "users.txt";
    string choice;
    string login, password;

    do {
        cout << "Выберите действие:" << endl;
        cout << "1. Зарегистрироваться" << endl;
        cout << "2. Войти" << endl;
        cout << "3. Выйти" << endl;
        cout << "Введите номер действия: ";
        cin >> choice;

        if (choice == "1") { // Регистрация
            cout << "Введите логин: ";
            cin >> login;
            cout << "Введите пароль: ";
            cin >> password;
            registerUser(filename, login, password);
        } else if (choice == "2") { // Вход
            cout << "Введите логин: ";
            cin >> login;
            cout << "Введите пароль: ";
            cin >> password;
            loginUser(filename, login, password);
        } else if (choice == "3") { // Выход
            cout << "Выход из программы." << endl;
            break;
        } else {
            cout << "Неверный выбор. Пожалуйста, выберите 1, 2 или 3." << endl;
        }
    } while (choice != "3");

    return 0;
}