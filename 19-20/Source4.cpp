#include <iostream>
#include <string>

using namespace std;


class Animal {
protected:
    string name;

public:
    Animal(): name("Безымянное животное") {}

    void setName(string newName) {
        name = newName;
    }

    void makeSound() {
        cout << "Общий звук животного\n";
    }

    void feed() {
        cout << "Кормление кормом животных\n";
    }
};

class Lion: public Animal {
public:
    void makeSound() {
        cout << "Рррр!\n";
    }

    void feed() {
        cout << "Кормление мясом льва\n";
    }
};

class Elephant: public Animal {
public:
    void makeSound() {
        cout << "Тру-тру!\n";
    }

    void feed() {
        cout << "Кормление слона сеном\n";
    }
};

class Monkey: public Animal {
public:
    void makeSound() {
        cout << "У-у а-а-а!\n";
    }

    void feed() {
        cout << "Кормление обезьян бананами\n";
    }
};

class Giraffe: public Animal {
public:
    void makeSound() {
        cout << "*Звук жирафа*\n";
    }

    void feed() {
        cout << "Кормление жирафа листьями\n";
    }
};


int main() {
    setlocale(LC_ALL, "Russian");
    // 4
    Lion lion;
    lion.setName("Лёвушка");
    lion.makeSound();
    lion.feed();

    Elephant elephant;
    elephant.setName("Мамонтёнок");
    elephant.makeSound();
    elephant.feed();

    Monkey monkey;
    monkey.setName("Макака");
    monkey.makeSound();
    monkey.feed();

    Giraffe giraffe;
    giraffe.setName("Жирафик Рафик");
    giraffe.makeSound();
    giraffe.feed();

    return 0;
}