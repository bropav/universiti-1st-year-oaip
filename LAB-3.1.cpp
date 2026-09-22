#include <iostream> 
#include <windows.h> // Обязательно добавляем этот заголовок
#include <cmath> // библиотека для згака модуля
//using namespace std;

int main () // заголовок функции main 
{    
    // Принудительно устанавливаем кодировку UTF-8 для ввода и вывода в консоли
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    // начало “тела”  программы  
    int x1, y1, x2, y2, x3, y3, x4, y4, P;  // объявление  вещественных переменных  


    //запрос координат
    std::cout << "Введите значение аргумента x1:"; std::cin >> x1; // Шаг 1 
    std::cout << "Введите значение аргумента y1:"; std::cin >> y1; // Шаг 2        
    std::cout << "Введите значение аргумента x2:"; std::cin >> x2; // Шаг 3
    std::cout << "Введите значение аргумента y2:"; std::cin >> y2; // Шаг 4     
    std::cout << "Введите значение аргумента x3:"; std::cin >> x3; // Шаг 5 
    std::cout << "Введите значение аргумента y3:"; std::cin >> y3; // Шаг 6
    std::cout << "Введите значение аргумента x4:"; std::cin >> x4; // Шаг 7
    std::cout << "Введите значение аргумента y4:"; std::cin >> y4; // Шаг 8

    int width1 = abs(x2-x1);
    int heidth1 = abs(y2-y1);
    int first_gran = sqrt(width1 * width1 + heidth1 * heidth1);

    int width2 = abs(x3-x2);
    int heidth2 = abs(y3-y2);
    int second_gran = sqrt(width2 * width2 + heidth2 * heidth2);

    int width3 = abs(x4-x3);
    int heidth3 = abs(y4-y3);
    int therd_gran = sqrt(width3 * width3 + heidth3 * heidth3);

    int width4 = abs(x1-x4);
    int heidth4 = abs(y1-y4);
    int four_gran = sqrt(width4 * width4 + heidth4 * heidth4);
    
    P = first_gran + second_gran + therd_gran + four_gran;
    
    std::cout << "периметр равен "  << P << std::endl;    
    return 0;   
}         
// успешное завершение программы