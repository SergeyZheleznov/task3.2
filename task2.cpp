#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <conio.h>

class Counter {
protected:
    int i;
public:
    Counter() {
        i = 1;
    }
    Counter(int number) {
        this->i = number;
    }
    void plus() {
       this->i = i + 1;
    };
    void minus() {
        this->i = i - 1;
    };
    void look() {
        std::cout << i << std::endl;
    }
};

int main()
{
    char c;
    setlocale(LC_ALL, "");
    std::system("chcp 1251");

    std::string answer;
    std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
    std::cin >> answer;

    int count = 0;
    bool flag = false;

    if (answer == "��") {
        std::cout << "������� ��������� �������� ��������: ",
            std::cin >> count,
            flag = true;
    }
     
    Counter one = flag ? Counter(count) : Counter();

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







































/*
int main()
{
    char c;
    setlocale(LC_ALL, "");
    std::system("chcp 1251");
  
    std::string answer;
    std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
    std::cin >> answer;
    if (answer == "��") {
        std::cout << "������� ��������� �������� ��������: ";
        int number;
        std::cin >> number;
        Counter one = Counter(number);
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
    else if (answer == "���")
    {
        Counter one;
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
    return 0;
}
*/
    

