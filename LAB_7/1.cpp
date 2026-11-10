#include <iostream> 
#include <windows.h> // Обязательно добавляем этот заголовок
#include <cmath> // библиотека для згака модуля
//using namespace std;

int main () // заголовок функции main 
{
    // Принудительно устанавливаем кодировку UTF-8 для ввода и вывода в консоли
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float xnach;
    float n = 1;
    float F;
    float otv = 0;
    float end = 0;
    
    std::cout << "введите число x " << std::endl;
    std::cin >> xnach;

    F = (xnach * xnach) + (sin(xnach * xnach * xnach));
    std::cout << "значение f(x) == " << F << std::endl;


    do
    {
        otv = 1/n;
        n += 1;
        end += otv;
    } while ( end <= F);

    std::cout << n-1 << std::endl;
}