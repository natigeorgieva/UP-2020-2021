# Упражнение 8



## Задача 1 

Да се напише рекурсивна функция, която по подадено естествено число n, да намери сумата на числата от 1 до n. 

<details><summary><i><u>Подсказка</u></i></summary>
Идеята е същата като при задачата с факториел.
</details>

## Задача 2 

Да се напише рекурсивна функция, която по подаден масив от "реални" стойности и неговия размер, да намери сумата им.

## Задача 3

Да се напише функция, която по подадено естествено число x, да намери стойността на израза <img style = "height:1rem; vertical-align:middle" src="https://latex.codecogs.com/svg.latex?f(x)=2f(x-2)+f(x-1)">, ако за <img style = "height:1rem; vertical-align:middle" src="https://latex.codecogs.com/svg.latex?f(1)=5,f(2)=1">

## Задача 4

Споделената рекурсия ни позволява да си играем с обикновената рекурсия (функция, която вика себе си до достигането на някакво условие), като се прилага за множество функции, които се викат една друга.

Напишете функции, които да реализират поредицата на Хофстадер (Hofstadter Female and Male sequences). Създайте две функции F и М, за които да е съществено следното

```txt
F(0) = 1
M(0) = 0
F(n) = n - M(F(n - 1))
M(n) = n - F(M(n - 1))
```

Не се безпокойте за отрицателни стойности, тестовите са по - големи или равни на 0.

## Задача 5
По даден двумерен масив от символи, да се определи дали в него има път от позиция 'S' до позиция 'Е', движейки се само нагоре, надолу, наляво или надясно. Символите, които ще използваме в масива са следните:
* S - стартова позиция от която тръгваме
* Е - изходната позиция до която искаме да стигнем
* \* - поле в което може да се стъпи (път)
* X - поле в което не може да се стъпим (стена)

Ако е намерен път, на екрана да се изпише как се стига до целта, използвайки буквите U - up, D - down, L - left , R - right. В противен случай да се изпише подходящо съобщение.

```
Input:
    X X X X X X X X X 
    X S * * * X * * X 
    X X X X * X * X X 
    X X * * * * * X X 
    X * * X X X X E X 
    X X * * * * * * X 
    X X X X X X X X X
Output:
    RRRDDLLDDRRRRRU
```

```
Input:
    X X X X X X X X X 
    X S * * * X * * X 
    X X X X * X * X X 
    X X * * * * * X X 
    X * * X X X X E X 
    X X * * X * * * X 
    X X X X X X X X X
Output:
    There is no path to the end point!
```
## Бонус към Задача 5
Нека вече имаме портали в лабиринта. Всеки портал се отбелязва с някакво число ( 0 - 9 ) и има точно 2 такива еднакви числа в двумерния масив. Ако стъпим на дадено число моментално отиваме на неговото друго съответстващо.

```
Input:
    X X X X X X X X X 
    X S * * * X * 0 X 
    X X X X * X * X X 
    X X X 1 * * * X X 
    X 1 * X X X X E X 
    X X * * X 0 * * X 
    X X X X X X X X X
Output:
    RRRDDRRUURRRU
```

## Задача 6

Да се напише рекурсивна функция, която по подаден символен низ проверява дали скобите в него са правилно затворени.

```
"alsd(jw023dfs{2e}) df()asd {34}" -> да
"ijd(sf9{0u3)2js}dfb2" -> не
```