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
    int H, M, S, h, m, s, Hi, Mi, Si;  // объявление  вещественных переменных  


    //запрос координат
    std::cout << "Введите сколько сейчас часов "; std::cin >> H; // Шаг 1 
    std::cout << "Введите сколько сейчас минут "; std::cin >> M; // Шаг 2        
    std::cout << "Введите сколько сейчас секунд "; std::cin >> S; // Шаг 3
    std::cout << "Введите сколько пройдет часов "; std::cin >> h; // Шаг 4     
    std::cout << "Введите сколько пройдет минут "; std::cin >> m; // Шаг 5 
    std::cout << "Введите сколько пройдет секунд "; std::cin >> s; // Шаг 6


    Hi = H + h;

    if (Hi > 23)
    {
        Hi = Hi % 24;
    }

    Mi = M + m;

    if (Mi > 59)
    {
        Mi = Mi % 60;
        Hi += 1;
    }

    Si = S + s;

    if (Si > 59)
    {
        Si = Si % 60;
        Mi += 1;
    }

    std::cout << "время сейчас "  << Hi << ":" << Mi << ":" << Si << std::endl;   
    
    system("pause");

    return 0;   
}         
// успешное завершение программы