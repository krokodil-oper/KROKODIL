#include <iostream>
#include <string>


using namespace std;

class svo{
public:

    string krim = "Крым";
    string lnr = "Лнр";
    string dnr = "Днр";


void printRussia (){
    cout << "Состав России: " << endl;
    cout << krim << endl;
    cout << lnr << endl;
    cout << dnr << endl;    

} 
};

int main(){
    svo Russia;
    Russia.printRussia();

}