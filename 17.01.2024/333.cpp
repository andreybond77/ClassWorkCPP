#include <iostream>
#include <string>
using namespace std;


class Stydent {
private:
    string name;
    string num;
public: Stydent(string name, string num) {
    this -> name=name;
    this->num = num;
}
      void showInfo() {
          cout<<name<<
      }
};

int main() {
    string nams[] = { "Pol","Alex","ron","Tom" };
int countofStudents = 8;


}

/*
class Car {
private:
    string color;
    string model;
    int price;
public:Car() {
    cout << "car created" << endl;

}
      Car( string model,string color, float price ) {
          this->price = price;
          this->model = model;
          this->color = color;
      }

        
    void setColor(string color) {
        this->color = color;
}
    void setModel(string model) {
        this->model = model;
    }
    void setPrice(float price) {
        this->price = price;
    }

    string getModel() {
        return model;
    }
    string getColor() {
        return color;
    }
   int getPrice() {
        return price;
    }

    void show() {
        cout << price << ":" << model << ":" << color << ":" << endl;
    }
    string toString() {
        return"color: " + color + "model: " + model+"price: " + to_string(price);

    }

};

Car getMinPrice(Car &car1, Car &car2) {
    if (car1.getPrice() < car2.getPrice())
        return car1;
    else
        return car2;
}
void changeColor(Car& car) {
    car.setColor("gold");
}


Car&  createCopy(Car car) {
    return car;
}



Car* getALLCarsWithColor(Car* cars, int size, string color) {
    int count = 0;
    for (int i = 0; i < size;i++) {
        if (cars[i].getColor)
    }
}



int main() {
    Car* cars = new Car [4]{  Car("red","mers",1300000),
        Car("silver", "audi", 23000),
        Car("blac", "porsh", 43000),
        Car("grey", "opel", 3000) };
    float maxPrice = cars[0]. getPrice();
    string myColor = cars[0].getColor();
    int id = 0;
        for (int i = 0;i < 4;i++) {

           // if()
            if (maxPrice < cars[1].getPrice()) {
               maxPrice = cars[i].getPrice();
                id = i;
}
        }
        cout << cars[id].toString();


    setlocale(LC_ALL, "ru");
   Car car1;
    car1. setColor("red");
    car1.setModel("mers");
    car1.setPrice(1300000);
    cout << car1.toString();
    cout << endl;

   Car car2("silver", "audi", 23000);
   Car car3("dore", "porsh", 43000);
   Car car4("roki", "opel", 3000);
   cout << getMinPrice(car1, car2).toString();
   changeColor(car1);
   cout << car1.toString();
   cout << car2.toString();
   cout << car3.toString();
   cout << car4.toString();
   //Car car3 = createCopy(car2);
  
   cout<<
    system("pause");
    return 0;
}
*/