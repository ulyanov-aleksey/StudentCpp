# StudentCpp
Репозиторий для хранения примеров кода для обучения С++

## Заметки по теории
Какие есть хранятся в Wiki разделе: [Заметки на коленке по С++](https://github.com/StriderAJR/StudentCpp/wiki)

## Структура проекта
Проект организован немного нетипично.

Точка запуска программы находится в файле main.cpp и выступает исключительно как точка вызова нужной подпрограммы, которые хранятся в собственных файлах *.h. Каждый такой файл выступает в роли отдельной программы, упакованной в свое собственное пространство имен.

![Структура проекта](https://github.com/StriderAJR/StudentCpp/blob/master/illustr/Структура%20проекта.png)

В проекте нет простого примера программы типа HelloWorld, только примеры адаптированные под стиль "программа-в-программе". Поэтому разбор простейшей программы на языке С++ можно прочитать в теоритических заметках (см. ниже).
