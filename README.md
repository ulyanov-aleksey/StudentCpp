# StudentCpp
Репозиторий для хранения примеров кода для обучения С++.

ВНИМАНИЕ! Ресурс в режиме разработки. Многих мануалов, wiki страниц и примеров кода нет. Они появляются по мере моего свободного времени или просьб со стороны обучающихся.

## Теория
Какая есть хранится тут: [Небольшие заметки по С++](https://github.com/StriderAJR/StudentCpp/wiki)

## Структура репозитория
* [source](https://github.com/StriderAJR/StudentCpp/tree/master/source)

Самая важная папка в репозитории. Тут хранятся примеры кода для изучения С++ с комментариями, поясняющими, что происходит.
* [illstr](https://github.com/StriderAJR/StudentCpp/tree/master/illustr)

Это папка с картинками, чтобы добавлять их затем в файлы md в качестве иллюстраций к тексту. Интересующимся тут будет совершенно не интересно.
* [manuals](https://github.com/StriderAJR/StudentCpp/tree/master/manuals)

Папка с руководствами по настройке IDE, git'a и т.п.
* [susu-materials](https://github.com/StriderAJR/StudentCpp/tree/master/susu-materials)

Папка с разными материалами конкретно для студентов ЮУрГУ. Тут вам и слайды лекций, список литературы, рекомендуемых IDE и шаблоны для оформления пояснительных записок.
* [tasks](https://github.com/StriderAJR/StudentCpp/tree/master/tasks)

Папка с заданиями для выполнения

## Как запускать исходники
Проект (CLion или VS на выбор) организован немного нетипично.

Точка запуска программы находится в файле main.cpp и выступает исключительно как точка вызова нужной подпрограммы, которая хранится в собственном файле *.h. Каждый такой файл выступает в роли отдельной программы, упакованной в свое собственное пространство имен.

![Структура проекта](https://github.com/StriderAJR/StudentCpp/blob/master/illustr/Структура%20проекта.png)

В проекте нет простого примера программы типа HelloWorld, только примеры адаптированные под стиль "программа-в-программе". Поэтому разбор простейшей программы на языке С++ можно прочитать в теоритических заметках [Hello, World!](https://github.com/StriderAJR/StudentCpp/wiki/basics_02_hello-world-program)
