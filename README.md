# GUAP Лабораторная работа №4

Задание:

* Функция main должна располагаться в отдельном cpp файле.
* Реализовать динамическое выделение памяти и очищение. Не использовать библиотеку STL.
* Если требуется реализовать стек/очередь/дек/список/дерево, то элемент такой дисциплины обязан быть выполнен в виде класса.
* Обязательно реализовать работу с несколькими исключительными ситуациями для объекта класса. Если в ЛР студенту не очевидно какую исключительную ситуацию следует обрабатывать, следует обратиться к преподавателю. Обработка исключений должна производиться в обоих заданиях.
* Реализовать пользовательское меню согласно заданию. Обязательно реализовать возможность выбора типа данных, с которыми возможно взаимодействие в каждом задании: int, char, float, double, char*. Не должно быть в программе параметров, которые задаются в main, все, 98 что может задать пользователь должно задаваться с клавиатуры, если в задании не указано иначе (имеется в виду заполнение случайными данными).
* Класс должен содержать все необходимые конструкторы и деструктор.
* По списку студент определяет свой порядковый номер. Необходимо выполнить оба
задания.

Вариант задания:
Написать параметризованную функцию - сортировка методом Шелла.

Формализация:
При запуске программы пользователя просят ввести размер будущего массива, допустимы числа от 2 до 1000. При нарушении числового диапазона будет выведена соответствующая ошибка.
Далее с помощью клавиш «ВВЕРХ», «ВНИЗ» выбираем нужный тип данных (int, float, double, char) и заполняем массив. 

После заполнения массива начнётся его сортировка, сопровождающаяся анимацией перемещения элементов массива. 

После сортировки можно создать новый массив и выполнить новую сортировку.

![image](https://user-images.githubusercontent.com/43295090/169148710-b22f5364-0c3c-4497-8284-4132e6d3b0de.png)
![image](https://user-images.githubusercontent.com/43295090/169148714-962558f9-7d44-49f8-880a-5689ce4a71d3.png)
![image](https://user-images.githubusercontent.com/43295090/169148724-c0ca9a48-2c67-40ab-ba00-013633e55201.png)
![image](https://user-images.githubusercontent.com/43295090/169148736-8906c290-3422-4e17-a049-24236f6f976c.png)
![image](https://user-images.githubusercontent.com/43295090/169148746-45fd5f55-d6d6-4334-bb3e-7b43185c7695.png)
![image](https://user-images.githubusercontent.com/43295090/169148755-8fc40255-eda3-49dc-a2c7-1fcdfaedcad4.png)

