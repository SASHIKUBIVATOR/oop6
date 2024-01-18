#include<iostream>
#include <vector>

using namespace std;

class Pizza {
public:
    virtual double GetCost() {
        return 0.0;
    }

    virtual void Price() {
        cout << "Не знаю цену для этой пиццы...\n";
    }

    virtual void Print_Info() {
        cout << "Информация о вашей пицце:\n";
    }

    virtual void SetSize(int value) {
        cout << "Вы хотите пиццу размером " << value << " сантиметров?\n Хорошо...\n";
    }

    virtual void AddCheese() {
        cout << "Почему вы хотите добавить сыр к пицце?...\n";
    }

    virtual void SaltPizza() {
        cout << "Почему вы хотите добавить соль к пицце?...\n";
    }
};

class Pepperoni : public Pizza {
private:
    string Name;
    string Info;
    unsigned int Size;
    double cost;
    int SaltValue;
    int CheeseValue;

public:
    Pepperoni() {
        Name = "Пепперони";
        Info = "Вкусная пицца. Хороший выбор!";
        Size = 0;
        cost = 0;
        SaltValue = 0;
        CheeseValue = 0;
    }

    void Price() override {
        switch (this->Size) {
            case 25:
                this->cost += 100 + this->CheeseValue * 20 + this->SaltValue * 0.5;
                break;
            case 30:
                this->cost += 100 + this->CheeseValue * 20 + this->SaltValue * 0.5;
                break;
            case 35:
                this->cost += 100 + this->CheeseValue * 20 + this->SaltValue * 0.5;
                break;
            case 40:
                this->cost += 100 + this->CheeseValue * 20 + this->SaltValue * 0.5;
                break;
            default:
                cout << "Выберите размер пиццы!\n";
                break;
        }
    }

    void Print_Info() override {
        cout << "Название: " << this->Name << endl;
        cout << "Информация: " << this->Info << endl;
        cout << "Размер: " << this->Size << endl;
        cout << "Добавка сыра: " << this->CheeseValue << endl;
        cout << "Добавка соли: " << this->SaltValue << endl;
        cout << "Цена: " << this->cost << endl;
    }

    double GetCost() override {
        return this->cost;
    }

    void AddCheese() override {
        unsigned int cheeseValue = 0;
        cout << "Сколько добавить сыра?\n";
        cin >> cheeseValue;
        if (cheeseValue > 0)
            this->CheeseValue = cheeseValue;
    }

    void SaltPizza() override {
        unsigned int saltValue = 0;
        cout << "Сколько добавить соли?\n";
        cin >> saltValue;
        if (saltValue > 0)
            this->SaltValue = saltValue;
    }

    void SetSize(int value) override {
        switch (value) {
            case 1:
                this->Size = 25;
                break;
            case 2:
                this->Size = 30;
                break;
            case 3:
                this->Size = 35;
                break;
            case 4:
                this->Size = 40;
                break;
            default:
                cout << "Этот размер не определен!\n";
                break;
        }
    }
};

class Margarita : public Pizza {
private:
    string Name;
    string Info;
    unsigned int Size;
    double cost;
    int SaltValue;
    int CheeseValue;

public:
    Margarita() {
        Name = "Маргарита";
        Info = "Классическая пицца с томатом и сыром";
        Size = 0;
        cost = 0;
        SaltValue = 0;
        CheeseValue = 0;
    }

    void Price() override {
        switch (this->Size) {
            case 25:
                this->cost += 120 + this->CheeseValue * 25 + this->SaltValue * 0.6;
                break;
            case 30:
                this->cost += 120 + this->CheeseValue * 25 + this->SaltValue * 0.6;
                break;
            case 35:
                this->cost += 120 + this->CheeseValue * 25 + this->SaltValue * 0.6;
                break;
            case 40:
                this->cost += 120 + this->CheeseValue * 25 + this->SaltValue * 0.6;
                break;
            default:
                cout << "Выберите размер пиццы!\n";
                break;
        }
    }

    void Print_Info() override {
        cout << "Название: " << this->Name << endl;
        cout << "Информация: " << this->Info << endl;
        cout << "Размер: " << this->Size << endl;
        cout << "Добавка сыра: " << this->CheeseValue << endl;
        cout << "Добавка соли: " << this->SaltValue << endl;
        cout << "Цена: " << this->cost << endl;
    }

    double GetCost() override {
        return this->cost;
    }

    void AddCheese() override {
        unsigned int cheeseValue = 0;
        cout << "Сколько добавить сыра?\n";
        cin >> cheeseValue;
        if (cheeseValue > 0)
            this->CheeseValue = cheeseValue;
    }

    void SaltPizza() override {
        unsigned int saltValue = 0;
        cout << "Сколько добавить соли?\n";
        cin >> saltValue;
        if (saltValue > 0)
            this->SaltValue = saltValue;
    }

    void SetSize(int value) override {
        switch (value) {
            case 1:
                this->Size = 25;
                break;
            case 2:
                this->Size = 30;
                break;
            case 3:
                this->Size = 35;
                break;
            case 4:
                this->Size = 40;
                break;
            default:
                cout << "Этот размер не определен!\n";
                break;
        }
    }
};

class Hawaiian : public Pizza {
private:
    string Name;
    string Info;
    unsigned int Size;
    double cost;
    int SaltValue;
    int CheeseValue;

public:
    Hawaiian() {
        Name = "Гавайская";
        Info = "Пицца с ветчиной и ананасами";
        Size = 0;
        cost = 0;
        SaltValue = 0;
        CheeseValue = 0;
    }

    void Price() override {
        switch (this->Size) {
            case 25:
                this->cost += 140 + this->CheeseValue * 30 + this->SaltValue * 0.8;
                break;
            case 30:
                this->cost += 140 + this->CheeseValue * 30 + this->SaltValue * 0.8;
                break;
            case 35:
                this->cost += 140 + this->CheeseValue * 30 + this->SaltValue * 0.8;
                break;
            case 40:
                this->cost += 140 + this->CheeseValue * 30 + this->SaltValue * 0.8;
                break;
            default:
                cout << "Выберите размер пиццы!\n";
                break;
        }
    }

    void Print_Info() override {
        cout << "Название: " << this->Name << endl;
        cout << "Информация: " << this->Info << endl;
        cout << "Размер: " << this->Size << endl;
        cout << "Добавка сыра: " << this->CheeseValue << endl;
        cout << "Добавка соли: " << this->SaltValue << endl;
        cout << "Цена: " << this->cost << endl;
    }

    double GetCost() override {
        return this->cost;
    }

    void AddCheese() override {
        unsigned int cheeseValue = 0;
        cout << "Сколько добавить сыра?\n";
        cin >> cheeseValue;
        if (cheeseValue > 0)
            this->CheeseValue = cheeseValue;
    }

    void SaltPizza() override {
        unsigned int saltValue = 0;
        cout << "Сколько добавить соли?\n";
        cin >> saltValue;
        if (saltValue > 0)
            this->SaltValue = saltValue;
    }

    void SetSize(int value) override {
        switch (value) {
            case 1:
                this->Size = 25;
                break;
            case 2:
                this->Size = 30;
                break;
            case 3:
                this->Size = 35;
                break;
            case 4:
                this->Size = 40;
                break;
            default:
                cout << "Этот размер не определен!\n";
                break;
        }
    }
};

class PizzeriaWindow {
private:
    vector<Pizza*> OrderList;

public:
    void PrintMenu() {
        int N = 0;
        cout << "Меню заказа\nВыберите действие:\n";
        cout << "1) Добавить пиццу в заказ\n";
        cout << "2) Вывести заказ\n";
        cout << "3) Подтвердить и оплатить\n";
        cout << "===> ";
        cin >> N;
        cout << endl;
        switch (N) {
            case 1:
                ChoosePizza();
                break;
            case 2:
                PrintOrder();
                PrintMenu();
                break;
            case 3:
                PrintOrder();
                break;
            default:
                cout << "Выберите правильное действие!\n\n";
                PrintMenu();
        }
    }

    void ChoosePizza() {
        int N = 0;
        Pizza* pizza = nullptr;
        cout << "Выберите пиццу:\n";
        cout << "1) Пепперони\n";
        cout << "2) Маргарита\n";
        cout << "3) Гавайская\n";
        cout << "4) Вернуться в меню\n";
        cout << "===> ";
        cin >> N;
        cout << endl;
        switch (N) {
            case 1:
                pizza = new Pepperoni();
                break;
            case 2:
                pizza = new Margarita();
                break;
            case 3:
                pizza = new Hawaiian();
                break;
            case 4:
                PrintMenu();
        }

        cout << "Выберите размер пиццы:\n";
        cout << "1) 25\n";
        cout << "2) 30\n";
        cout << "3) 35\n";
        cout << "4) 40\n";
        cout << "===> ";
        cin >> N;
        cout << endl;
        if (N > 0 && N < 5) {
            pizza->SetSize(N);
            pizza->AddCheese();
            pizza->SaltPizza();
            pizza->Price();
            this->OrderList.push_back(pizza);
            cout << endl;
            PrintMenu();
        } else {
            cout << "Неправильный параметр! Попробуйте снова...";
            PrintMenu();
        }
    }

    void PrintOrder() {
        int i = 1;
        for (Pizza* pizza : this->OrderList) {
            cout << "Позиция " << i << "\n\n";
            pizza->Print_Info();
            cout << endl;
            i++;
        }
        PrintTotalCost();
    }

    void PrintTotalCost() {
        double TotalCost = 0.0;
        for (Pizza* pizza : this->OrderList) {
            TotalCost += pizza->GetCost();
        }
        cout << "Итоговая стоимость = " << TotalCost << endl;
    }
};

int main() {
    PizzeriaWindow window;
    window.PrintMenu();
    return 0;
}