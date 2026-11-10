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
    float xend;
    float hod;
    float otv;
    
    std::cout << "введите начальный и конечные х " << std::endl;
    std::cin >> xnach >> xend;

    std::cout << "ведите шаг преращения" << std::endl;
    std::cin >> hod;

    while (xnach <= xend)
    {
        otv = (xnach * xnach) + (9.5 / xnach) + (sin(xnach * xnach * xnach));
        if (xnach == 0)
        {
            std::cout << "функция не определена" << std::endl;
        }
        else
        {
            std::cout << "f(" << xnach << ") = " << otv << std::endl;
        }
        xnach += hod;
    }
}