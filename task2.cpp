#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <conio.h>


class Counter {
public:

    void plus() {
       this->i = i + 1;
    };

    void minus() {
        this->i = i - 1;
    };

    void look() {
        std::cout << i << std::endl;
    }

    void Set_1(){
        this->i = 1;
    }

    void Set_i(int i) {
        this->i = i;
    }

protected:
    int i;

};


int main()
{
    char c;
    setlocale(LC_ALL, "");
    std::system("chcp 1251");

    Counter one;

    int i;

   // do {
        std::string answer;
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> answer;
        if (answer == "да") {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> i;
            one.Set_i(i);
            char command;
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> command;

            while (command != 'x') {
                if (command == '+') {
                    one.plus();
                }            
                else if (command == '-') {
                    one.minus();
                }
                else if (command == '=') {
                    one.look();
                }
                std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
                std::cin >> command;
            }
                
            if (command == 'x') {
                std::cout << "До свидания!";
            }             
        }
        else if (answer == "нет"){
            one.Set_1();
            char command;
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> command;

            while (command != 'x') {
                if (command == '+') {
                    one.plus();
                }
                else if (command == '-') {
                    one.minus();
                }
                else if (command == '=') {
                    one.look();
                }
                std::cout << "Введите команду ('+', '-', '=' или 'x'): ";

                std::cin >> command;
            }

            if (command == 'x') {
                std::cout << "До свидания!";
            }
            return 0;
        } 
    //} while ((c = _getch()) == ' ');
    //_getch();
    return 0;
}
