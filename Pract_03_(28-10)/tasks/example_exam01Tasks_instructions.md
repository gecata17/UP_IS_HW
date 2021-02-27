# Задача 1

Военните използват 4-цифрени числа, за да посочат даден момент от време. Например два и половина следобяд се записва като 1430. Напишете програма, която по дадени две числа проверява дали са валидни моменти от време и ако да, намира разликата им. Примери: 2500 1430 -> Invalid 1415 1755 -> 0340 (приема се и 340) 2300 0100 -> 0200 (приема се и 200)

# Задача 2

Напишете програма, която по дадени две естествени числа проверява дали има делител на първото, чийто квадрат дели и второто число. Примери: 6 14 -> No, 6 28 -> Yes.

# Задача 3

Трайчо иска да си купи кола, но има някои изисквания. Той е склонен да я вземе нова или втора ръка.

Ако е втора ръка, иска, ако има климатик да е на по-малко от 115 000 км., да е поне 70 конски сили и да струва най-много 6 000 лева, а ако няма климатик да е на по-малко от 180 000 км., да е поне 60 конски сили и да струва най-много 2 000 лева.

Ако е нова иска да е от 70 до 90 конски сили включително и да струва не повече от 25 000 лева.

Напишете булев израз, който по дадена информация за това дали колата е стара или нова, има ли климатик, мощността, пробегът и цената й, пресмята дали Трайчо е склонен да си купи колата.

Примери:

    Колата е стара, има климатик, мощността й е 70 конски сили, пробегът й е 100 000 км. и цената й е 5 000 лв.

Трайчо би си я купил, тъй като мощността й е поне 70 конски сили, пробегът й е по-малък от 115 000 км. и цената й е под 6 000 лева.

    Колата е стара, няма климатик, мощността й е 80 конски сили, пробегът й е 200 000 км. и цената й е 5 000 лв.

Трайчо не би си я купил, понеже колата не е с пробег по-малък от 180 000 км. и цената не е по-малка от 2 000 лв.

# Задача 4

Един билет в музей струва определена сума. За групи от 5 до 10 човека има 5% отстъпка, за групи от 11 до 20 човека има 10% отстъпка, а за групи от 21 или повече хора отстъпката е 15%. По даден брой хора и цена на един билет определете колко пари ще получи музеят от хората.

Пример:

Вход:

15 3,5 Изход:

47,25

# Задача 5

Нека имаме редица от естествени числа, в която всяко число присъства толкова пъти колкото самото то, тоест редицата 1 2 2 3 3 3 4 4 4 4 и тка нататъка. По подадено число N изкарайте първите N члена на редицата.