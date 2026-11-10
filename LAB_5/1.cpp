#include <iostream> 
#include <windows.h> // Обязательно добавляем этот заголовок
#include <cmath> // библиотека для згака модуля
//using namespace std;

int main () // заголовок функции main 
{
    // Принудительно устанавливаем кодировку UTF-8 для ввода и вывода в консоли
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int number;

    std::cout << "введите цифру "; std::cin >> number;
    
    switch (number)
    {
    case 1:
        std::cout << "один";
        break;

    case 2:
        std::cout << "два";
        break;

    case 3:
        std::cout << "три";
        break;

    case 4:
        std::cout << "четыре";
        break;

    case 5:
        std::cout << "пять";
        break;

    case 6:
        std::cout << "шесть";
        break;

    case 7:
        std::cout << "семь";
        break;

    case 8:
        std::cout << "восемь";
        break;

    case 9:
        std::cout << "девять";
        break;
    
    default:
        std::cout << "цифра введена не верно";
    }
}