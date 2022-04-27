### CS50

***[Algorithm](https://ru.wikipedia.org/wiki/%D0%90%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC#.D0.9C.D0.B0.D1.88.D0.B8.D0.BD.D0.B0_.D0.A2.D1.8C.D1.8E.D1.80.D0.B8.D0.BD.D0.B3.D0.B0)*** - набор действий для пошагового решения проблемы. Это конечная совокупность точно заданных правил решения некоторого класса задач или набор инструкций, описывающих порядок действий исполнителя для решения определённой задачи.

***Свойства алгоритмов***

Различные определения алгоритма в явной или неявной форме содержат следующий ряд общих требований:

***Дискретность*** — алгоритм должен представлять процесс решения задачи как упорядоченное выполнение некоторых простых шагов. При этом для выполнения каждого шага алгоритма требуется конечный отрезок времени, то есть преобразование исходных данных в результат осуществляется во времени дискретно.

***Детерминированность (определённость)***. В каждый момент времени следующий шаг работы однозначно определяется состоянием системы. Таким образом, алгоритм выдаёт один и тот же результат (ответ) для одних и тех же исходных данных. С другой стороны, существуют вероятностные алгоритмы, в которых следующий шаг работы зависит от текущего состояния системы и генерируемого случайного числа. 

***Завершаемость (конечность)*** — в более узком понимании алгоритма как математической функции, при правильно заданных начальных данных алгоритм должен завершать работу и выдавать результат за определённое число шагов.

***Массовость (универсальность)***. Алгоритм должен быть применим к разным наборам начальных данных.


***Время работы***

Распространённым критерием оценки алгоритмов является время работы и порядок роста продолжительности работы в зависимости от объёма входных данных.

Для каждой конкретной задачи составляют некоторое число, которое называют её размером. Например, размером задачи вычисления произведения матриц может быть наибольший размер матриц-множителей, для задач на графах размером может быть количество ребер графа.

Время, которое тратит алгоритм как функция от размера задачи `n`, называют временной сложностью этого алгоритма `T(n)`. Асимптотику поведения этой функции при увеличении размера задачи называют асимптотичной временной сложностью, а для её обозначения используют нотацию «O» большое. 

«***O***» большое и «***o***» малое — математические обозначения для сравнения ***асимптотического поведения (асимптотики)*** функций. Под асимптотикой понимается характер изменения функции при стремлении её аргумента к определённой точке.

Например, если алгоритм обрабатывает входные данные размером `n` за время `cn²`, где `c` — некоторая константа, то говорят, что временная сложность такого алгоритма `O(n²)`. 

Асимптотическая сложность важна тем, что является характеристикой алгоритма, а не его конкретной реализации: «оптимизацией» операций, без замены алгоритма, можно изменить только мультипликативный коэффициент `c`, но не асимптотику. Aсимптотическая сложность является главным фактором, который определяет размер задач, которые алгоритм способен обработать.

<img alt="image" src="images/Нотация_Ландау.jpg"> </img>

<img alt="image" src="images/распространённые асимптотические сложности.jpg"> </img>

Алгоритм — это точно определённая инструкция, последовательно применяя которую к исходным данным, можно получить решение задачи. Например, в алгоритме деления вещественных чисел делимое может быть любым, а делитель не может быть равен нулю.

Алгоритм служит, как правило, для решения не одной конкретной задачи, а некоторого класса задач. Так, алгоритм сложения применим к любой паре натуральных чисел. В этом выражается его свойство ***массовости***, то есть возможности применять многократно один и тот же алгоритм для любой задачи одного класса.

---
"Hello World" на языке Си

```C
#include <stdio.h>
int main(void) {
  printf("Hello World\n");
  return 0;
}
```

Программы в Cи состоят из функций, а те — из операторов и переменных. **Функция** — это кусок кода, в котором уже есть или подаются какие-то данные, а какие-то данные получаются в результате её исполнения. 

`printf()` из стандартной библиотеки `stdio` выводит любую строку на экран. Строки заключаются в двойные кавычки, а символ `\n` означает перевод курсора на новую строку. 

**Компилятор** - принимает на вход исходный код, и преобразует его в ассемблерный и затем в объектный код, т.е в 0 и 1, машинный код понятный компьютеру.
<img alt="image" src="images/hello.jpg"> </img>

`#include <stdio.h>` - дает доступ к библиотеке функций

Строка `#include` делает очень важную вещь: она подключает библиотеки уже написанного кода к вашей программе. 

Имя подключенной библиотеки идет в угловых скобках `(<>)` и носит расширение `(.h)`. Если бы не было библиотек, то любое, самое элементарное действие, пришлось бы каждый раз описывать снова и снова. Подключенная нами библиотека содержит функции ввода/вывода. Именно она позволяет нам использовать функцию `printf()` для вывода на экран. То есть, если бы мы не написали строку `#include <stdio.h>`, но оставили в теле программы функцию `printf ()`, при попытке запуска мы бы получили ошибку! Потому что без этой библиотеки компилятор не знает, что такое `printf()`. 

Есть библиотеки стандартные, они составляют словарный запас языка. Функция `printf()` не встроена в компьютер, но входит в стандартную библиотеку языка Cи

В технических терминах, библиотека — это двоичный файл, полученный путем объединения в коллекцию объектных файлов, используя компоновщик. **Объектные файлы** — это те файлы с расширением `(*.o)`, которые вы получаете при компиляции приложений

`printf("")` - функция для печати

```bash
$ ./hello
Hello World
```

`clang [name]` - один из компиляторов. Для компиляции можно также использовать уже знакомую вам программу `make`. По сути, она вызывает `clang` с определенными аргументами командной строки. 

`make [name]` - команда компилирует указанный файл `name`

`./a.out` - название первой скомпилированной программы по умолчанию

```bash
$ clang hello.c
$ ./hello
Hello World
$ ./a.out
Hello World
```

```bash
$ make hello
clang   hello.o   -o hello
```

```C
#include<stdio.h>

int main(void)
{
for (int i = 0; i < 10; i++)
printf("hello, world!\n");
}
```

```C
#include <stdio.h>

int main() {
int a, b, c;
    a = 5;
    b = 7;
    c = a + b;
    printf("%d + %d = %d\n", a, b, c);
    return 0;
}
```

Например, библиотека строк [string.h](https://ru.wikipedia.org/wiki/String.h), где описаны операции со строками (определение длины, сложение и прочее) 

255 в двоичной 11111111, так как начало счета с 0 и до 255 = 256 чисел

256 в двоичной 100000000

---

[**Жадный алгоритм**](https://ru.wikipedia.org/wiki/%D0%96%D0%B0%D0%B4%D0%BD%D1%8B%D0%B9_%D0%B0%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC) (*Greedy algorithm*) — алгоритм, заключающийся в принятии локально [оптимальных решений](https://ru.wikipedia.org/wiki/Оптимальное_решение) на каждом этапе, допуская, что конечное решение также окажется оптимальным.

Если глобальная оптимальность алгоритма имеет место практически всегда, его обычно предпочитают другим методам оптимизации, таким как [динамическое программирование](https://ru.wikipedia.org/wiki/Динамическое_программирование).

---

**Динамическое программирование** — способ решения сложных задач путём разбиения их на более простые подзадачи. Он применим к задачам с оптимальной подструктурой, выглядящим как набор перекрывающихся подзадач, сложность которых чуть меньше исходной. В этом случае время вычислений, по сравнению с «наивными» методами, можно значительно сократить.

Ключевая идея в динамическом программировании достаточно проста. Как правило, чтобы решить поставленную задачу, требуется решить отдельные части задачи (подзадачи), после чего объединить решения подзадач в одно общее решение. Часто многие из этих подзадач одинаковы. Подход динамического программирования состоит в том, чтобы решить каждую подзадачу только один раз, сократив тем самым количество вычислений. Это особенно полезно в случаях, когда число повторяющихся подзадач экспоненциально велико.

Метод *динамического программирования сверху* — это простое запоминание результатов решения тех подзадач, которые могут повторно встретиться в дальнейшем. *Динамическое программирование снизу* включает в себя переформулирование сложной задачи в виде [рекурсивной](https://ru.wikipedia.org/wiki/Рекурсия) последовательности более простых подзадач.

---

Общего критерия оценки применимости жадного алгоритма для решения конкретной задачи не существует, однако для задач, решаемых жадными алгоритмами, характерны две особенности:

**Принцип жадного выбора** - если последовательность локально оптимальных выборов даёт глобально оптимальное решение. В типичном случае доказательство оптимальности следует такой схеме:

1. Доказывается, что жадный выбор на первом шаге не закрывает пути к оптимальному решению: для всякого решения есть другое, согласованное с жадным выбором и не хуже первого.
2. Показывается, что подзадача, возникающая после жадного выбора на первом шаге, аналогична исходной.
3. Рассуждение завершается по индукции.

**Оптимальность для подзадач** - если оптимальное решение задачи содержит в себе оптимальные решения для всех её подзадач.

---
### Размен монет
Так, например, сумму в 24 копейки монетами в 1, 5 и 7 коп. жадный алгоритм разменивает так: 7 коп. — 3 шт., 1 коп. — 3 шт., в то время как правильное решение — 7 коп. — 2 шт., 5 коп. — 2 шт.

Представим, что кассир должен покупателю сдачу в 41 цент, а у него на поясе есть цилиндры с монетками для сдачи номиналом в 25, 10, 5 и 1 цент. Руководствующийся «жадным» алгоритмом кассир сразу же захочет выдать максимум, на первом же шаге. На этом шаге оптимальным или наилучшим решением будет выдать 25 пенсов. 41-25 = 16. Осталось выдать 16 пенсов. Очевидно, 25 пенсов слишком много, значит, остается 10. 16-10 = 6. Теперь выдаем по тому же принципу 5 пенсов, и затем — 1. Таким образом, покупатель получит всего четыре монеты номиналом 25, 10, 5 и 1 пенс.

---

### Hello World на Java
```java
public class HelloWorld {
   public static void main(String[] args) {
       // Выводим Hello World в консоль.
       System.out.println("Hello, World");
   }
}
```
---
Необходимые основы языка программирования Си для данного курса, были изучены по учебному изданию:
### [The C programming Language, Second Edition, Brian W. Kernighan, Dennis M. Ritchie](http://cpp.com.ru/kr_cbook/)

У меня есть отдельный [конспект](https://github.com/artemiosdev/C_Kernighan_and_Ritchie) по данному учебнику 

---

Примеры кода с лекций:
```C
// Coughs three times.
// Demonstrates better design via a loop.
       
#include <stdio.h>
int main(void)
{
    // cough three times
    for (int i = 0; i < 3; i++)
    {
        printf("cough\n");
    }
}
```

```C
//Coughs three times.
//Demonstrates abstraction and hierarchical decomposition.
#include <stdio.h>
// prototype
void cough(void);
int main(void)
{
    // cough three times
    for (int i = 0; i < 3; i++)
    {
        cough();
    }
}

//Coughs once.
void cough(void)
{
    printf("cough\n");
}
```

```C
//Coughs three times.
// Demonstrates parameterization.
#include <stdio.h>
// prototype
void cough(int n);
int main(void)
{
    // cough three times
    cough(3);
}

//Coughs n times.
void cough(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("cough\n");
    }
}
```

---
```C
//Prints a user's name.
//Demonstrates a function (not from a library) with a side effect.
#include <cs50.h>
#include <stdio.h>
// prototype
void PrintName(string name);
int main(void)
{
    printf("Your name: ");
    string s = GetString();
    PrintName(s);
}

//Says hello to someone by name.
void PrintName(string name)
{
    printf("hello, %s\n", name);
}
```

---
```C
//Cubes a variable.
//Demonstrates use of parameter and return value.
#include <stdio.h>
// function prototype
int cube(int a);
int main(void)
{
    int x = 2;
    printf("x is now %i\n", x);
    printf("Cubing...\n");
    x = cube(x);
    printf("Cubed!\n");
    printf("x is now %i\n", x);
}

// Cubes argument.
int cube(int n)
{
    return n * n * n;
}
```

---
```C
//Prints a string, one character per line.
//Demonstrates error checking.

#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main (void)
{
 // get line of text
string s = GetString();
 // print string, one character per line
 if(s != NULL)
 {
   for(int i=0; i < strlen(s); i++)
   {
    printf("%c\n", s[i]);
   }
 }
}
```

```C
//Prints a string, one character per line.
//Demonstrates error checking.

#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main (void)
{
 // get line of text
string s = GetString();
 // print string, one character per line
 if(s != NULL)
 {
   for(int i=0; i < strlen(s); i++)
   {
    printf("%c\n", s[i]);
   }
 }
}
```

```C
//Prints a string, one character per line.
//Demonstrates error checking.
#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main (void)
{
 // get line of text
string s = GetString();
 // print string, one character per line
 if(s != NULL)
 {
   for(int i=0, n = strlen(s); i < n; i++)
   {
    printf("%c\n", s[i]);
   }
 }
}
```

---
### Функция 
Некий «чёрный ящик». В этот ящик попадают входные данные ***inputs***, над ними производятся некие манипуляции, а на выходе из этого ящика мы получаем результат ***output***.

-Упорядочивание кода. Код гораздо проще поддерживать, если он разбит на функции, и каждая из них делает чётко определенную небольшую часть работы.

- Упрощение кода. Вам не нужно знать, как работает функция, главное — результат её работы. Это упрощает понимание большой программы.

- Повторное использование. Если вам нужно сделать подобные действия в различных частях программы, можно написать всего одну функцию, и использовать её многократно.

```C
#include <stdio.h>

int cube(int input); //Прототип функции cube

int main(void)
{
     int x = 2;
     printf("x is %i\n", x);
     x = cube(x);
     printf("x is %i\n", x);
}

int cube(int input)
{
     int output = input * input * input;
     return output;
}
```
Result

```bash
x is 2
x is 8
```

***Прототип функции*** (header) называют объявления заголовка функции, без тела. Прототип указывает компилятору, что существует функция с определенным именем, типом результата и списком параметров, тело которой будет описано позже в коде.

***Тип результата (return type)***
На Си нужно всегда указывать тип результата. То есть мы должны явно указать, какого типа будет то значение, которое должна вернуть функция.

***Список параметров (parameter list)***
Перечень входных данных для функции. Функция может не иметь параметров, может иметь один или несколько параметров. Для каждого параметра нужно указать его имя и тип. В примере функция принимает единственный параметр — целое число int input.

В теле (body) описаны действия, которые выполняет функция. Слово *** `return`*** указывает на конец работы функции и указывает значение, которое возвращает функция в качестве результата её работы (значение переменной `output` в примере). Функция может и не возвращать никакого результата.

---
### Указатель в языке Си
Это переменная, содержащая ***адрес объекта***. Указатель не несет информации о содержимом объекта, а содержит сведения о том, где размещен объект.

Память компьютера можно представить в виде последовательности пронумерованных однобайтовых ячеек, с которыми можно работать по отдельности или блоками.

Каждая переменная в памяти имеет свой адрес — номер первой ячейки, где она расположена, а также свое значение. ***Указатель*** — это тоже переменная, которая размещается в памяти. Она тоже имеет адрес, а ее значение является адресом некоторой другой переменной. Переменная, объявленная как указатель, занимает 4 байта в оперативной памяти (в случае 32-битной версии компилятора).

Указатель, как и любая переменная, должен быть объявлен.

***Тип указателя***— это тип переменной, адрес которой он содержит.

Для работы с указателями в Си определены две операции:

***операция * (звездочка)*** — позволяет получить ***значение объекта по его адресу*** — определяет значение переменной, которое содержится по адресу, содержащемуся в указателе;

***операция & (амперсанд)*** — позволяет определить ***адрес переменной***.

```C
char c;   // переменная
char *p; // указатель
p = &c;  // p = адрес c
```
<img alt="image" src="images/указатель.jpg"> </img>

|   | Переменная | Указатель |
|:------------- |:---------------:| -------------:|
| Адрес | &c | p |
| Значение | c | *p |

Программа, меняет местами значения переменных `x` и `y`
```C
#include <stdio.h>

void swap(int* a, int* b); //Прототип функции swap

int main(void)
{
     int x = 1, y = 2;
     swap(&x, &y);
     printf("x is %i\n", x);
     printf("y is %i\n", y);
}

void swap(int* a, int* b)
{
     int tmp = *a;
     *a = *b;
     *b = tmp;
}
```
Result:

```bash
x is 2
y is 1
```

---
### Криптография. Шифр Цезаря и шифр Виженера
***[Шифр Цезаря](https://ru.wikipedia.org/wiki/%D0%A8%D0%B8%D1%84%D1%80_%D0%A6%D0%B5%D0%B7%D0%B0%D1%80%D1%8F)***

В этом шифре каждая буква текста заменяется на другую, которая находится на фиксированное число букв дальше в алфавите. Это фиксированное число букв называется ***ключом***. Так, ключ 1 переводит букву латиницы C в букву D, а Z — по циклу в A. Если ключ равен 3, то буква C перейдет в F, а Z — в C. 

Примеры: используем шифр Цезаря с ключом 5 на слове cat.
```bash
c -> h
a -> f
t -> y
Caesar (cat, 5) = hfy
```
Обозначим незашифрованный текст буквой `p`, а `pi` — буква в тексте `p`, которая находится на позиции с номером `i`. Назовем секретный ключ буквой `k`, `с` — зашифрованный текст, а `ci` — буква в шифрованном тексте, которая находится на позиции `i`. Тогда вычислить каждую букву шифра можно по формуле: 

`ci = (pi + k) % 26`

Если сопоставить каждому символу алфавита его порядковый номер (нумеруя с 0), то шифрование и дешифрование можно выразить формулами модульной арифметики:

```C
y = (x + k) mod n
x = (y - k) mod n
```
где `x` — символ открытого текста, `y` — символ шифрованного текста, `n` — мощность алфавита, а `k`— ключ

Если ключ `k = 13` а изначальный текст `p` — «Be sure to drink your Ovaltine!», вот какой шифр мы получим:

`Or fher gb qevax lbhe Binygvar!`

Обратите внимание, O (первая буква в шифрованном тексте) смещена на 13 позиций от буквы B (первая буква в оригинальном тексте). То же самое с буквой r (вторая буква в шифровке) смещена на 13 букв от e (вторая буква в оригинале). Третья буква в шифровке, f, смещена на 13 букв от s (третья в оригинале), тут мы ходим по кругу от z до a.

Шифр Цезаря с ключом 13 имеет специальное название `ROT13`. Он симметричный: применив его дважды, мы вернемся к изначальному тексту. 

***[Шифр Виженера](https://ru.wikipedia.org/wiki/%D0%A8%D0%B8%D1%84%D1%80_%D0%92%D0%B8%D0%B6%D0%B5%D0%BD%D0%B5%D1%80%D0%B0)***

Он несколько безопаснее шифра Цезаря: в качестве ключа в нем используется слово и его сложно взломать вручную с помощью одного только частотного анализа или перебора. Каждая буква ключа генерирует число, и в результате мы получаем несколько ключей для сдвига букв.

<img alt="image" src="images/Шифр Виженера.jpg"> </img>

Пусть `р` – некоторый текст, `k` — ключевое слово, `kj` — `j`-я буква ключа, `pi` — буква под номером `i` в оригинальном тексте, `ci` — буква под номером `i` в шифровке. Тогда:

`ci = (pi + kj) % 26`

Или

Если `n`  — количество букв в алфавите, `mj` — номер буквы открытого текста, `kj` — номер буквы ключа в алфавите, то шифрование Виженера можно записать следующим образом:

`cj = (mj + kj) mod n`

И расшифровывание:

`mj = (cj - kj) mod n`

---
### Линейный поиск
Это способ последовательного поиска, один за одним. 
Пример. пусть у нас есть список чисел:

2 4 0 5 3 7 8 1

И нам нужно найти 0. Мы его видим сразу, но компьютерная программа так не работает. Она начинает с начала списка и видит число 2. Затем проверяет, 2=0? Это не так, поэтому она продолжает работу и переходит ко второму символу. Там её тоже ждет неудача, и только на третьей позиции алгоритм находит нужное число.

Псевдокод линейного поиска: 

```C
linearSearch(key, array[]):
	for(i = 0; i < length(array); i++):
		if(array[i] == key):
			return i
return -1
```
Функция `linearSearch` получает на вход два аргумента — ключ `key` и массив `array[]`. Ключ — искомое значение, в предыдущем примере `key = 0`. Массив — список чисел, которые мы будем просматривать. Если мы ничего не нашли, функция вернет `return -1` (позицию, которой в массиве нет). Если же линейный поиск найдет нужный элемент, то функция вернет позицию, на которой находится искомый элемент в массиве.

В линейном поиске хорошо то, что он будет работать для любого массива, независимо от порядка элементов: мы всё равно пройдём по всему массиву. Это же является и его слабостью. 

---
### Двоичный/Бинарный поиск
Также известен как метод деления пополам («методом разрывания телефонного справочника пополам») или дихотомия — классический алгоритм поиска элемента в отсортированном массиве (векторе), использующий дробление массива на половины.

**Рекурсивный подход.** В этом случае пишется функция, которая вызывает сама себя (рекурсивно), пока не будет найден искомый элемент в массиве.

<img alt="image" src="images/бинарный поиск.jpg"> </img>

Поиск элемента в отсортированном массиве:

1.Определение значения элемента в середине структуры данных. Полученное значение сравнивается с ключом.

2.Если ключ меньше значения середины, то поиск осуществляется в первой половине элементов, иначе — во второй.

3.Поиск сводится к тому, что вновь определяется значение серединного элемента в выбранной половине и сравнивается с ключом.

4.Процесс продолжается до тех пор, пока не будет найден элемент со значением ключа или не станет пустым интервал для поиска.

Мы нашли 7 в массиве из 17 элементов с помощью бинарного поиска всего за три шага. Линейный поиск в такой же ситуации справился бы аж за 16 шагов. Поскольку этот алгоритм на каждом шаге уменьшает количество элементов в массиве вдвое, он найдет искомое за асимптотическое время `О(log n)`, где `n` – количество элементов в списке. То есть, в нашем случае асимптотическое время = `O(log 17)` (это чуть больше трёх). 

Псевдокод функции бинарного поиска: 

```C
binarySearch(key, array[], min, max):

if (max < min):
return -1
else:
midpoint = findMidPoint(min, max)

if (array[midpoint] < key):
binarySearch(key, array, midpoint + 1, max)
else if (array[midpoint] > key):
binarySearch(key, array, min, midpoint - 1)
else:
return midpoint
```
Функция принимает на вход 4 аргумента: искомое `key`, массив данных `array[]`, в котором находится искомое, `min` и `max` — указатели на максимальное и минимальное число в массиве, на которое мы смотрим на данном шаге алгоритма.

Для нашего примера изначально дана такая картинка: 

<img alt="image" src="images/binarySearch.jpg"> </img>

Разберем код, `midpoint` — наша середина массива. Она зависит от крайних точек и находится по центру между ними. После того, как мы нашли середину, проверяем, меньше ли она нашего числа `key`. 

`midpoint = findMidPoint(min, max)`

`if (array[midpoint] < key):`

`binarySearch(key, array, midpoint + 1, max)`

Если это так, то `key` также больше, чем любое из чисел левее середины, и мы можем вызвать бинарную функцию снова, только теперь наш `min = midpoint + 1`. Если окажется, что `key < midpoint`, мы можем отбросить само это число и все числа, лежащие справа от него. И мы вызываем бинарный поиск по массиву от числа `min` и вплоть до значения `(midpoint – 1)`. 

`else if (array[midpoint] > key):`

`binarySearch(key, array, min, midpoint - 1)`

Третья ветка: если значение в `midpoint` не больше и не меньше, чем `key`, ему ничего не остается, как быть искомым числом. Его мы и возвращаем в таком случае и заканчиваем работу программы.

`else:`

`return midpoint`

Наконец, может статься так, что искомое число и вовсе отсутствует в массиве. Для учёта этого случая делаем такую проверку: 

`if (max < min):`

`return -1`

И возвращаем (-1), чтобы указать, что мы ничего не нашли. 

Пример из лекции №8

```C
on input of n elements
	if n < 2
		return
	else
		sort left half of elements
		sort right half of elements
		merge sorted halves
```

<img alt="image" src="images/binary_algorithm.jpg"> </img>

У нас 8 элементов, 3 действия и высота диатраммы 3, можно выразить `log2x`

```C
#include <stdio.h>
#include <math.h> 

int main (void)
{    
   printf ("Argument: 8 \n");
   printf ("log2 : %.0f\n", log2 (8) );
   return 0;
}
```
Время выполнения займет у нас `O (log n)`

Сложность времени `O (log n)` - логарифмический порядок. Когда данные увеличиваются в `n` раз, затраты времени увеличиваются в `log n` раз (журнал здесь основан на 2, например, когда данные увеличиваются в 256 раз, требующие много времени только увеличение в 8 раз - это временная сложность ниже линейной). Двоичный поиск - это алгоритм `O (log n)`. Каждый поиск исключает половину возможностей. Поиск по 256 данным может найти цель за 8 раз.

<img alt="image" src="images/log2x.jpg"> </img>

***[Cортировка слиянием](https://neerc.ifmo.ru/wiki/index.php?title=%D0%A1%D0%BE%D1%80%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%BA%D0%B0_%D1%81%D0%BB%D0%B8%D1%8F%D0%BD%D0%B8%D0%B5%D0%BC)*** она займет  `O (n log n)` или `T(n) = T(n/2) + T(n/2) + O(n)`. 

---
### Бинарное дерево
Вы уже знаете, что для бинарного поиска необходимо, чтобы массив был отсортирован. Таким образом, если у нас есть неотсортированный массив, в котором нужно найти некий элемент, у нас есть два варианта действий: 

1.Отсортировать список и применить бинарный поиск.

2.Сохранять список всегда отсортированным при одновременном добавлении и убирании из него элементов.

Один из способов хранения списков отсортированными считается бинарное дерево поиска. Бинарное (двоичное) дерево поиска — это структура данных, которая отвечает следующим требованиям: 

Оно является деревом (структурой данных, эмулирующей древовидную структуру — имеет корень и другие узлы (листья), связанные «ветками» или ребрами без циклов).

Каждый узел имеет 0, 1 или 2 потомка.

Оба поддерева — левое и правое — являются двоичными деревьями поиска.

У всех узлов левого поддерева произвольного узла X значения ключей данных меньше, нежели значение ключа данных самого узла X.

У всех узлов правого поддерева произвольного узла X значения ключей данных больше либо равно, нежели значение ключа данных самого узла X.

<img alt="image" src="images/binary_tree.jpg"> </img>

Каждая ячейка называется вершиной, вершины соединены ребрами. Корень дерева — ячейка с номером 13. 

Если нужно найти максимальное число — идем от вершины вниз и вправо. Нахождение числа, которое не является минимальным или максимальным также весьма простое. Мы спускаемся от корня влево или вправо в зависимости от того, больше или меньше наша вершина искомой.

Еще можно выводить числа в порядке сортировки. Например, если нам нужно вывести все числа в порядке возрастания, берем левое поддерево и начиная с самой левой вершины идем наверх. 

Прибавить что-то в дерево тоже просто. Главное помнить о структуре. Скажем, нам нужно добавить в дерево значение 7. Идем к корню, и проверяем. Число 7 < 13, поэтому идем влево. Там видим 5, и идем вправо, поскольку 7 > 5. Дальше поскольку 7 < 8 и 8 не имеет потомков, мы конструируем ветку от 8 влево и на неё цепляем 7. 

<img alt="image" src="images/binary_tree1.jpg"> </img>

Также можно удалять вершины из дерева, но это несколько сложнее. 
Есть три разных сценария для удаления, которые мы должны учесть. 

1.Самый простой вариант: нам нужно удалить вершину, у которой нет потомков. Например, число 7, которое мы только что добавили. В таком случае мы просто проходим путь до вершины с этим числом и удаляем его.

2.У вершины есть одна вершина-потомок. В таком случае можно удалить нужную вершину, но её потомка нужно подсоединить к «дедушке», то есть вершине, из которой произрастал её непосредственный предок. Например, из того же дерева нужно удалить число 3. В таком случае, её потомка, единицу, вместе со всем поддеревом присоединяем к 5. Это делается просто, поскольку все вершины, слева от 5, будут меньше чем это число (и меньше, чем удалённая тройка).

3.Самый сложный случай — когда у удаляемой вершины есть два потомка. Теперь первым делом нам нужно найти вершину, в которой спрятано следующее большее значение, нужно поменять их местами, а потом удалить нужную вершину. Обратите внимание: следующая по значению вершина не может иметь двух потомков, тогда её левый потомок будет лучшим кандидатом на следующее значение.

Давайте из нашего дерева удалим корневую вершину 13. Сначала ищем самое близкое к 13 число, которое его больше. Это 21. Меняем 21 и 13 местами и удаляем 13.

<img alt="image" src="images/binary_tree2.jpg"> </img>

Что будет, если мы попробуем построить бинарное дерево из отсортированного списка? 1 2 3 4 5 6
Все числа просто будут прибавляться в правую ветку предыдущего. Если мы захотим найти число, у нас не будет другого выхода, как просто идти по цепочке вниз. Это ничуть не лучше, чем линейный поиск.

---
### Побитовые операторы
В Си имеются шесть операторов для манипулирования с битами. Их можно применять только к целочисленным операндам, т. е. к операндам типов `char`, `short`, `int` и `long`, знаковым и беззнаковым.     

`&` - побитовое И 

```
0 & 0 0
1 & 0 0
0 & 1 0
1 & 1 1
```

`|` - побитовое ИЛИ  

```
0 | 0 0
1 | 0 1
0 | 1 1
1 | 1 1
```

`^` - побитовое исключающее ИЛИ (XOR). 

```
0 ^ 0 0
0 ^ 1 1
1 ^ 0 1
1 ^ 1 0
```

`<<` - сдвиг влево.      
`>>` - сдвиг вправо.     

`~` - побитовое отрицание (унарный) как привычный `!=`

```
~0 1
~1 0
```

Оператор ` & ` (***побитовое И***) часто используется для обнуления некоторой группы разрядов. Например

`n = n & 0177;`
обнуляет в `n` все разряды, кроме младших семи.

Оператор ` | ` (***побитовое ИЛИ***) применяют для установки разрядов; так,

`x = x | SET_ON;`
устанавливает единицы в тех разрядах `x`, которым соответствуют единицы в `SET_ON`.

Оператор ` ^ ` (***побитовое исключающее ИЛИ***) в каждом разряде установит 1, если соответствующие разряды операндов имеют различные значения, и 0, когда они совпадают.

Поразрядные операторы `&` и `|` следует отличать от логических операторов && и ||, которые при вычислении слева направо дают значение истинности. 
Например, если `x` равно 1, а `y` равно 2, то `x & y` даст нуль, а `x && y` - единицу.

Операторы `<<` и `>>` сдвигают влево или вправо свой левый операнд на число битовых позиций, задаваемое правым операндом, который должен быть неотрицательным. 
Так, `x << 2` сдвигает значение `x` влево на 2 позиции, заполняя освобождающиеся биты нулями, что эквивалентно умножению `x` на `4`. 

Сдвиг вправо беззнаковой величины всегда сопровождается заполнением освобождающихся разрядов нулями. Сдвиг вправо знаковой величины на одних машинах происходит с распространением знака ("арифметический сдвиг”), на других - с заполнением освобождающихся разрядов нулями ("логический сдвиг”).

Унарный оператор ` ~ ` поразрядно "обращает” целое т. е. превращает каждый единичный бит в нулевой и наоборот. Например
`x = x & ~077`

обнуляет в `x` последние 6 разрядов. Заметим, что запись x & ~077 не зависит от длины слова, и, следовательно, она лучше, чем x & 0177700, поскольку последняя подразумевает, что x занимает 16 битов. Не зависимая от машины форма записи ~077 не потребует дополнительных затрат при счете, так как ~077 - константное выражение, которое будет вычислено во время компиляции.

Для иллюстрации некоторых побитовых операций рассмотрим функцию `getbits(x, p, n)`, которая формирует поле в `n` битов, вырезанных из `x`, начиная с позиции `p`, прижимая его к правому краю. Предполагается, что 0-й бит - крайний правый бит, а `n` и `p` осмысленные положительные числа. Например, `getbits(x,4,3)` вернет в качестве результата 4, 3 и 2-й биты значения `x`, прижимая их к правому краю. Вот эта функция:

```C
/* getbits: получает n бит, начиная с p-й позиции */ 
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}
```

Выражение `x >> (р+1-n)` сдвигает нужное нам поле к правому краю. Константа `~0` состоит из одних единиц, и ее сдвиг влево на `n` бит `(~0 << n)` приведет к тому, что правый край этой константы займут `n` нулевых разрядов. Еще одна операция побитовой инверсии `~` позволяет получить справа `n` единиц.

---
### Алгоритмы сортировки. Сортировка выбором
Основная идея — разбить наш список на две части, отсортированную и неотсортированную. На каждом шаге алгоритма новое число перемещается из неотсортированной части в отсортированную, и так пока все числа не окажутся в отсортированной части. 

1.Находим минимальное неотсортированное значение.
2.Меняем местами это значение с первым неотсортированным значением, ставя его таким образом в конец отсортированного массива.
3.Если остались неотсортированные значения, возвращаемся к шагу 1.

Метод сортировки прямым выбором основан на следующих правилах:
1.Выбирается элемент с наименьшим ключом.
2.Он меняется местами с первым элементом a0.
3.Затем эти операции повторяются с оставшимися n-1 элементами, n-2 элементами и так далее до тех пор, пока не останется один, самый большой элемент.

<img alt="image" src="images/сортировка выбором4.png"> </img>

На первом шаге все значения являются неотсортированными. Назовем неотсортированную часть — Unsorted, а отсортированную — Sorted 

<img alt="image" src="images/сортировка выбором2.jpg"> </img>

Шаг второй. На число 2 мы не смотрим, оно уже в отсортированном подмассиве. Начинаем искать минимальное, начиная со второго элемента, это 5. Убеждаемся, что 3 — минимальное среди неотсортированных, 5 — первое среди неотсортированных. Меняем их местами и прибавляем 3 к отсортированному подмассиву.

<img alt="image" src="images/сортировка выбором3.jpg"> </img>

На третьем шаге мы видим, что в неотсортированном подмассиве самое маленькое число — 4. Меняем его с первым числом среди неотсортированных — 5. 

<img alt="image" src="images/сортировка выбором1.jpg"> </img>

На четвертом шаге мы обнаруживаем, что в неотсортированном массиве минимальное число — 5. Меняем его с 6 и прибавляем к отсортированному подмассиву.

Когда среди неотсортированных остается только одно число (наибольшее), это значит, что весь массив отсортирован! 

Таким образом, ожидаемая скорость алгоритма в лучшем и худшем случае — Θ(n2) = O(n2). n в квадрате

```C
#include <stdio.h>
#include <malloc.h>
 
int main()
{
    int N;
    printf("Input N: ");
    scanf("%d", &N);
    int* mass;
    mass = (int *)malloc(N * sizeof(int));
    printf("Input the array elements:\n");
    for (int i = 0; i < N; i++)
        scanf("%d", &mass[i]);
        
    //сортировка методом выбора
    int minPosition, tmp;
 
    for (int i = 0; i < N; i++)
    {
        minPosition = i;
        for (int j = i + 1; j < N; j++)
            if (mass[minPosition] > mass[j])
                minPosition = j;
        tmp = mass[minPosition];
        mass[minPosition] = mass[i];
        mass[i] = tmp;
    }
 
    printf("Sorted array:\n");
    for (int i = 0; i < N; i++)
        printf("%d ", mass[i]);
    printf("\n");
    free(mass);
    return 0;
}
```
Result:

```bash
Input N: 5
Input the array elements:
2
4
3
5
1
Sorted array:
1 2 3 4 5 
```

или другая реализация

```C
#define _CRT_SECURE_NO_WARNINGS // для корректной работы scanf()
#include <stdio.h>

// Функция сортировки прямым выбором
void selectionSort(int *num, int size)
{
  int min, temp; // для поиска минимального элемента и для обмена
  for (int i = 0; i < size - 1; i++) 
  {
      
    min = i; // запоминаем индекс текущего элемента
    
    // ищем минимальный элемент чтобы поместить на место i-ого
    for (int j = i + 1; j < size; j++)  // для остальных элементов после i-ого
    {
      if (num[j] < num[min]) // если элемент меньше минимального,
        min = j;       // запоминаем его индекс в min
    }
    
    // меняем местами i-ый и минимальный элементы
    temp = num[i];      
    num[i] = num[min];
    num[min] = temp;
  }
}

int main() 
{
  int a[10]; // Объявляем массив из 10 элементов
  // Вводим значения элементов массива
  for (int i = 0; i < 10; i++) 
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
  
  selectionSort(a, 10);  // вызываем функцию сортировки
  // Выводим отсортированные элементы массива
  for (int i = 0; i<10; i++)
    printf("%d ", a[i]);
  getchar(); getchar();
  return 0;
}
```

Result:
```bash
a[0] = 2
a[1] = 4
a[2] = 6
a[3] = 8
a[4] = 9
a[5] = 3
a[6] = 4
a[7] = 1
a[8] = 7
a[9] = 3
1 2 3 3 4 4 6 7 8 9
```

---
### Пузырьковая сортировка (Bubble sort)

Идем вдоль всего массива и сравниваем 2 соседних элемента. Если они в неправильном порядке, меняем их местами. При первом проходе в конце окажется («всплывет») самый маленький элемент (если мы сортируем в порядке убывания). 

Повторять первый шаг, если хотя бы один обмен на предыдущем шаге был совершен.

Шаг 1: идем по массиву. Алгоритм начинает работу с первых двух элементов, 8 и 6 и проверяет, находятся ли они в правильном порядке. 8 > 6, поэтому меняем их местами. Далее мы смотрим на второй и третий элементы, теперь это 8 и 4. Из тех же соображений меняем их местами. В третий раз сравниваем 8 и 2. Итого, мы делаем три обмена (8, 6), (8, 4), (8, 2). Значение 8 «всплыло» в конец списка на правильную позицию. 

Шаг 2: меняем местами (6,4) и (6,2). 6 теперь на предпоследней позиции, и её можно не сравнивать с уже отсортированным «хвостом» списка

Шаг 3: меняем местами 4 и 2. Четверка «всплывает» на свое законное место. 

Шаг 4: проходимся по массиву, но менять нам уже нечего. Это сигнализирует о том, что массив полностью отсортирован. 



Пузырьковая сортировка проходит за время O(n2) в худшем случае (все числа стоят неправильно), поскольку нам нужно сделать n шагов на каждой итерации, которых тоже n. На самом деле, как и в случае с алгоритма сортировки выбором, время будет несколько меньше (n2/2 – n/2) (n в квадрате), но этим можно пренебречь. 

В лучшем случае (если все элементы уже стоят на своем месте), мы справимся за n шагов, т.е. Ω(n), поскольку нам нужно будет просто пробежаться по массиву один раз и убедиться, что все элементы стоят на своих местах (т.е. даже n-1 элементов).

<img alt="image" src="images/bubble sort.png"> </img>

```C
#include <stdio.h>

void printArr (int array[], int n);
void sortArr (int array[], int n);

int main (void)
{
  const int n = 10;
  int array[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

  printArr (array, n);
  sortArr (array, n);
  printArr (array, n);
}

void
printArr (int array[], int n)
{
  for (int i = 0; i < n; i++)
    {
      printf ("%i ", array[i]);
    }
  printf ("\n");
}

void
sortArr (int array[], int n)
{
  int temp, count = 0;

  for (int swaps = 1, i = 0; swaps > 0; i++)
    {
      swaps = 0;
      for (int j = 0; j < n - 1 - i; j++)
	{
	  if (array[j] > array[j + 1])
	    {

// swaps the values.
	      temp = array[j];
	      array[j] = array[j + 1];
	      array[j + 1] = temp;

// increases the count.
	      swaps++;
	    }

// increases iterations.
	  count++;
	}
    }
  printf ("Iterations: %i\n", count);
}
```

Result:
```bash
9 8 7 6 5 4 3 2 1 0 
Iterations: 45
0 1 2 3 4 5 6 7 8 9
```

---
###

