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
        std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
        std::cin >> answer;
        if (answer == "��") {
            std::cout << "������� ��������� �������� ��������: ";
            std::cin >> i;
            one.Set_i(i);
            char command;
            std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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
                std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
                std::cin >> command;
            }
                
            if (command == 'x') {
                std::cout << "�� ��������!";
            }             
        }
        else if (answer == "���"){
            one.Set_1();
            char command;
            std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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
                std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";

                std::cin >> command;
            }

            if (command == 'x') {
                std::cout << "�� ��������!";
            }
            return 0;
        } 
    //} while ((c = _getch()) == ' ');
    //_getch();
    return 0;
}
