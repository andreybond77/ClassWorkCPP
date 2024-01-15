#include <iostream>
using namespace std;

/*создать класс Дробь
Обьект данного класса должен состоять из
числителя и знаменателя в обязательном порядке
Зеализовать методом вывода дроби в виде:
3.6
*/

class drob {
private:
    int num;
     int denum;
     int total = 0;
public:
    drob(int num, int denum) {
        
            total = num / denum;
        
        this->num = num% denum;
        this->denum = denum;

    }
    void show() {
        cout <<total<< num << "/" << denum;
    }
  
};

class Student {
private:
   string num;
    string name;
    int ball;
public:
    Student(string num, string name, int ball) {
        this->num = num;
        this->name= name;
        this->ball=ball;
    }
    void show() {
        cout << num << ":" << name << ":" << ball << endl;
    }
    string getStatus(){
        if (ball == 5)  return "a" ;     
        if (ball == 4)  return "b" ; 
        if (ball == 3)  return "c" ;        
    }
};





int main() {
    /*
    Student st1("34", "Pol", 4);
    Student st2("35", "Per", 5);
    Student st3("32", "Pwe", 3);
    st1.show();
    st2.show();
    st3.show();
    cout << st1.getStatus() << endl;
    cout << st2.getStatus() << endl;
    cout << st3.getStatus() << endl;
    */
    drob f1(4, 7);
    drob f2(23, 10);
    f1.show();
    f2.show();
    return 0;
}