#### Глава - 5, Задание - 7 ####

Разработайте структуру по имени ```car```, которая будет хранить следующую
информацию об автомобиле: название производителя в виде строки в символьном
массиве или в объекте ```string```, а также год выпуска автомобиля в виде целого
числа. Напишите программу, которая запросит пользователя, сколько
автомобилей необходимо включить в каталог. Затем программа должна применить new
для создания динамического массива структур ```car``` указанного пользователем
размера. Далее она должна пригласить пользователя ввести название
производителя и год выпуска для наполнения данными каждой структуры в массиве (см.
главу 4). И, наконец, она должна отобразить содержимое каждой структуры.
Пример запуска программы должен выглядеть подобно следующему: 

```objectivec
Сколько автомобилей поместить в каталог? 2 
Автомобиль #1: 
Введите производителя: Hudson Hornet 
Укажите год выпуска: 1952 
Автомобиль #2: 
Введите производителя: Kaiser 
Укажите год выпуска: 1951 
Вот ваша коллекция: 
1952 Hudson Hornet 
1951 Kaiser 
```

=================================================================================
#### Вывод ####
```objectivec
Enter the number of machines that you want to catalog: 2
Car - 1
Enter the manufacturer: Hudson Hornet
Please enter the year of manufacture: 1952
Car - 2
Enter the manufacturer: Kaiser
Please enter the year of manufacture: 1951
Here is your collection:
1952 : Hudson Hornet
1951 : Kaiser
```
