#include <iostream>
#include <string>

using namespace std;

class IRunnable {
public:
    virtual void beg() = 0; 
    virtual ~IRunnable() {}   
};
class Iflyable {
public:
    virtual void let() = 0;  
    virtual ~Iflyable() {}   
};
class Crow : public IRunnable, public Iflyable {
public:
    void beg() override {
        cout << "Ворона бежит.";
    }
    void let() override {
        cout << "Ворона летит.";
    }
};

int main() {
    Crow crow;
    crow.beg();
    crow.let();
    IRunnable* runnableCrow = &crow;
    Iflyable* flyableCrow = &crow;

    runnableCrow->beg();
    flyableCrow->let();

    return 0;
}