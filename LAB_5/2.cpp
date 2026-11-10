#include <iostream> 
#include <windows.h> // Обязательно добавляем этот заголовок
#include <cmath> // библиотека для згака модуля
//using namespace std;

int main () // заголовок функции main 
{
    // Принудительно устанавливаем кодировку UTF-8 для ввода и вывода в консоли
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char letter;

    std::cout << "введите одну из 5 букв: N, B, P, D, S  "; std::cin >> letter;

    switch (letter)
    {
    case 'N':
        std::cout << "Neman";
        break;
    
    case 'B':
        std::cout << "Berezina";
        break;
    
    case 'P':
        std::cout << "Pripyat";
        break;
    
    case 'D':
        std::cout << "Dnepr";
        break;
    
    case 'S':
        std::cout << "Svislach";
        break;
    
    default:
        std::cout << "Error";
    }
}