# Лабораторная 2
**Изучаемые темы**: структуры, перечисляемый тип, обработка исключительных ситуаций, лямбда-выражения, делегаты

## Задание
Усложним наш калькулятор. Теперь перечень команд расширяется, добавляем текстовые команды, причем все команды нужно оформить в виде структур. У каждой команды есть имя, кол-во операндов, с которым она работает, является ли команда инфиксной, префиксной или постфиксной. Например, логарифм `log a;b` это постфиксная команда с 2 операндами - основание логарифма и аргумент. А `ln a` - натуральный логарифм, имеет только 1 операнд, также как и десятичный логариф - `lg a`. Операция сложения в случае `a+b` - инфиксная с 2 операндами. И так далее для всех перечисленных ниже команд.

Вам нужно создать описание для каждой команды, а затем производить парсинг пользовательской строки в соответствии с заданными данными. Если у команды несколько операндов, которые должны идти подряд, они должны в строке с выражением быть отделены друг от друга точкой с запятой

Вам нужно реализовать следующие команды (`a` и `b` - дробные или целые положительные или отрицательные числа):
* `a+b`, `a-b`, `a*b`, `a/b`
* `log a;b`
* `sqrt a;b` - взять корень степени `a` от числа `b`
* `pow a;b` - возвести число `a` в степень `b`

Пример ввода пользователя:
```
25 + 1.2 * (25.69 - log 2;4 / 10) - sqrt 3;27
```

Пример использования структуры:
```c++
#include <iostream>
#include <functional>
using namespace std;

enum CommandType
{
    Infix, Prefix, Postfix
};

struct Command
{
    char* name;
    unsigned short operandCount;
    CommandType type;
    std::function<double(double*)> execute; // прочитайте про эту магию
};

int main()
{
    Command plus;
    plus.name = "+";
    plus.operandCount = 2;
    plus.type = CommandType::Infix;
    plus.execute = [](double* operands) -> double { return operands[0] + perands[1]; }; // вот так творится магия

    cout << plus.execute(new double[2]{1.1, 1.2}); // использование магии, как обычной ф-ции
}
```
На что обратить внимание:
1. при защите вашей работы я буду менять названия команд, вводить новые, ранее неизвестные команды и парсинг и вычисление выражения должно идти верно;
2. в текущем варианте у вас может быть много исключительных ситуаций: выход за границы массива, утечка памяти и т.д. Воспользуйтесь обработкой исключительных ситуаций, чтобы ловить все скользкие моменты;
3. пользователь может ввести строку не только из консоли, но может передать строку из терминала или файла:
```
path\to\your\project: lab2.exe -s "5*2 - 1"
Result: 9
path\to\your\project: lab2.exe -f "file-with-expression.txt"
Result: 9
path\to\your\project: lab2.exe
Input expression: 5*2 - 1
Result: 9
```

## Вопросы для самопроверки
1. отличие структур в языках Си и С++
1. указатель на ф-цию, в каких ситуациях может быть полезен
1. что такое делегат
1. что такое лямбда выражение