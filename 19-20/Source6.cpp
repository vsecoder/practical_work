#include <iostream>
#include <string>

using namespace std;


class Product {
public:
    string name;
    string category;
    double price;
    int quantityInStock;
    string manufacturer;

    Product(const string n, const string cat, double p, int qty, const string& man)
        : name(n), category(cat), price(p), quantityInStock(qty), manufacturer(man) {}

    void display() const {
        cout << "Товар: " << name << "\n";
        cout << "Категория: " << category << "\n";
        cout << "Цена: " << price << " руб.\n";
        cout << "Количество в наличии: " << quantityInStock << "\n";
        cout << "Производитель: " << manufacturer << "\n\n";
    }
};

class Customer {
public:
    string name;
    string address;
    string email;
    string phoneNumber;
    int customerID;

    Customer(const string n, const string addr, const string mail, const string phone, int id)
        : name(n), address(addr), email(mail), phoneNumber(phone), customerID(id) {}

    void display() const {
        cout << "Покупатель: " << name << "\n";
        cout << "Адрес: " << address << "\n";
        cout << "Электронная почта: " << email << "\n";
        cout << "Телефон: " << phoneNumber << "\n";
        cout << "ID покупателя: " << customerID << "\n\n";
    }
};

class Order {
public:
    int orderID;
    int customerID;
    int productID;
    int quantity;

    Order(int oID, int cID, int pID, int qty) : orderID(oID), customerID(cID), productID(pID), quantity(qty) {}

    void display() {
        cout << "Заказ #" << orderID << "\n";
        cout << "ID покупателя: " << customerID << "\n";
        cout << "ID товара: " << productID << "\n";
        cout << "Количество товара: " << quantity << "\n\n";
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    // 6
    const int numProducts = 5;
    const int numCustomers = 3;
    const int numOrders = 3;

    Product products[numProducts] = {
        {"Ноутбук", "Электроника", 50000.0, 10, "Acer"},
        {"Холодильник", "Бытовая техника", 30000.0, 5, "Samsung"},
        {"Фотоаппарат", "Электроника", 25000.0, 8, "Canon"},
        {"Микроволновка", "Бытовая техника", 10000.0, 12, "LG"},
        {"Книга", "Литература", 500.0, 20, "Издательство ABC"}
    };

    Customer customers[numCustomers] = {
        {"Иванов Иван", "ул. Ленина, 123", "ivanov@example.com", "+7 (123) 456-78-90", 1},
        {"Петров Петр", "пр. Победы, 456", "petrov@example.com", "+7 (987) 654-32-10", 2},
        {"Сидоров Сидор", "ул. Гагарина, 789", "sidorov@example.com", "+7 (111) 222-33-44", 3}
    };

    cout << "Информация о товарах:\n";
    for (int i = 0; i < numProducts; ++i) {
        products[i].display();
    }

    Order orders[numOrders] = {
        {1, 1, 3, 2},  // Первый покупатель заказывает 2 фотоаппарата
        {2, 2, 1, 1},  // Второй покупатель заказывает 1 ноутбук
        {3, 3, 4, 3}   // Третий покупатель заказывает 3 микроволновки
    };

    cout << "Информация о заказах:\n";
    for (int i = 0; i < numOrders; ++i) {
        orders[i].display();
    }

    return 0;
}