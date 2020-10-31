# Домашна работа 1 - група 1

## Задача 1

Дадени са ви елементите на целочислен масив **arr**, техния брой **n** и начален индекс **i**. Реализирайте следния алгоритъм:

Проверете по четност числото на текущия индекс i.
* Ако елемента е четен текущия индекс става i - arr[i]%5
* Ако елемента е нечетен текущия индекс става i + 3

Повторете алгоритъма ако текущия индекс е в границите на масива. Да се изпише на екрана броя на стъпките след, които се излиза от него. Да се изпише подходящо съобщение ако се достигне до безкрайно въртене в масива и да се изпише след колко стъпки се достига то.

Първо ще се подаде броя на елементите в масива <img  style = "vertical-align:middle;height:1em" src="https://render.githubusercontent.com/render/math?math=0< n\leq 100">, след това ще бъдат изброени с разстояния елементите и накрая ще бъде подаден индекса, от който да започнете.

```
Пример 1:
  Вход: 
    7
    9 6 7 6 5 14 2
    3
  Изход:
    A loop is encountered after 5 steps!
```
```
Пример 2:
  Вход: 
    6
    6 11 22 15 12 14
    5
  Изход:
    After 5 steps we are out of the array!
```

## Задача 2

Подадени са ви две целочислени числа **a** и **b**. Да се реализира метода на Евклид за най-голям общ делител **d**.


**Алгоритъм на Евклид:**

Нека **a** и **b** са две положителни цели числа. Нека **a** да е по-голямото от двете числа. Тогава можем да представим **а** по следния начин:

<img  style = "height:1.2em" src="https://render.githubusercontent.com/render/math?math=a=b*q_0%2Br_1\quad\quad0\leq r_1< b\quad\quad r_1\in\mathbb{N}, q_0\in\mathbb{N}^{%2B}"> 

където <img  style="vertical-align:middle;height:0.8em" src="https://render.githubusercontent.com/render/math?math=r_1"> е остатъка от делението на **a** по модул от **b**, a <img  style="vertical-align:middle;height:0.8em" src="https://render.githubusercontent.com/render/math?math=q_0"> е цялата част от целочисленото деление.

Ако <img  style="vertical-align:middle;height:1em" src="https://render.githubusercontent.com/render/math?math=r_1=0"> то НОД<img  style="vertical-align:middle;height:1em" src="https://render.githubusercontent.com/render/math?math=(a, b) = b">, в противен случай повтаряме процеса като новите **a** и **b** са респективно **b** и <img  style="vertical-align:middle;height:0.8em" src="https://render.githubusercontent.com/render/math?math=r_1"> т.е

<img  style = "height:1.2em" src="https://render.githubusercontent.com/render/math?math=b=r_1*q_1%2Br_2\quad\quad0\leq r_2< r1\quad\quad r_2\in\mathbb{N}, q_1\in\mathbb{N}^{%2B}"> 
и повтаряме алгоритъма от начало.

Пример за числата 78 и 46:

<img  style="vertical-align:middle;height:1em" src="https://render.githubusercontent.com/render/math?math=a=78, b=46">
<br><br>
<img  style="vertical-align:middle;height:1em" src="https://render.githubusercontent.com/render/math?math=\Rightarrow78=46*1 %2B 32">
<br>
<img  style="vertical-align:middle;height:1em" src="https://render.githubusercontent.com/render/math?math=\Rightarrow46=32*1 %2B 14">
<br>
<img  style="vertical-align:middle;height:1em" src="https://render.githubusercontent.com/render/math?math=\Rightarrow32=14*2 %2B 4">
<br>
<img  style="vertical-align:middle;height:1em" src="https://render.githubusercontent.com/render/math?math=\Rightarrow14=4*3 %2B 2">
<br>
<img  style="vertical-align:middle;height:1em" src="https://render.githubusercontent.com/render/math?math=\Rightarrow4=2*2 %2B 0">
<br>
C:\Users\DevilPenta\Documents\ShareX\Screenshots\2020-10\chrome_5EmJpeuSTG.png

## Бонус задача

<img  style="width:80%;display:block;margin:auto;" src="./img/drawing.png">

По подадена точка от декартовата равнина проверете дали тя попада в някоя от областите оцветени в оранжево, където:

* К1 е окръжност с център (-2, 5) и радиус <img  style="vertical-align:middle;height:1em" src="https://render.githubusercontent.com/render/math?math=\sqrt{10}">
* К2 е окръжност с център (2, 2) и радиус 1
* P1 е параболата <img  style="vertical-align:middle;height:1.5em" src="https://render.githubusercontent.com/render/math?math=y = \frac{1}{5}x^2-1">
* P2 е параболата <img  style="vertical-align:middle;height:1.5em" src="https://render.githubusercontent.com/render/math?math=y = \frac{1}{4}x^2-2">