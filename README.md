Алгоритм - набор действий для пошагового решения проблемы
Wiki [Algorithm](https://ru.wikipedia.org/wiki/%D0%90%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC#.D0.9C.D0.B0.D1.88.D0.B8.D0.BD.D0.B0_.D0.A2.D1.8C.D1.8E.D1.80.D0.B8.D0.BD.D0.B3.D0.B0) 

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

**Компилятор** - принимает на вход исходный код, и преобразует его в объектный код, т.е в 0 и 1, машинный код понятный компьютеру.

`#include <stdio.h>` - дает доступ к библиотеке функций

Строка `#include` делает очень важную вещь: она подключает библиотеки уже написанного кода к вашей программе. 

Имя подключенной библиотеки идет в угловых скобках `(<>)` и носит расширение `(.h)`. Если бы не было библиотек, то любое, самое элементарное действие, пришлось бы каждый раз описывать снова и снова. Подключенная нами библиотека содержит функции ввода/вывода. Именно она позволяет нам использовать функцию `printf()` для вывода на экран. То есть, если бы мы не написали строку `#include <stdio.h>`, но оставили в теле программы функцию `printf ()`, при попытке запуска мы бы получили ошибку! Потому что без этой библиотеки компилятор не знает, что такое `printf()`. 

Есть библиотеки стандартные, они составляют словарный запас языка. Функция `printf()` не встроена в компьютер, но входит в стандартную библиотеку языка Cи

В технических терминах, библиотека — это двоичный файл, полученный путем объединения в коллекцию объектных файлов, используя компоновщик. **Объектные файлы** — это те файлы с расширением `(*.o)`, которые вы получаете при компиляции приложений

`printf("")` - функция для печати

```bash
~/terminal$ ./hello
Hello World
```

`clang [name]` - один из компиляторов. Для компиляции можно также использовать уже знакомую вам программу `make`. По сути, она вызывает `clang` с определенными аргументами командной строки. 

`make [name]` - команда компилирует указанный файл `name`

`./a.out` - название первой скомпилированной программы по умолчанию

```bash
~/C-iazyk-proghrammirovaniia-Si$ clang hello.c
~/C-iazyk-proghrammirovaniia-Si$ ./hello
Hello World
~/C-iazyk-proghrammirovaniia-Si$ ./a.out
Hello World
```

```bash
~/terminal$ make hello
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


| Тип |	Определение |	Диапазон значений |	Размер в байтах |
| :---------: | :---------- | :---------- | :---------: |
|int |	Целые числа |	-2 147 483 648 до 2 147 483 647	|  4|
|short int |	Короткие целые числа | -32 768 до 32 767	|  2|
|float |  Дробные числа (числа с плавающей запятой)	| -2 147 483 648.0 до 2 147 483 647.0	| 4 (32 bit) |
|double |	Дробные числа двойной точности	| -9 223 372 036 854 775 808 .0 до 9 223 372 036 854 775 807.0 | 8|
|long float |	Длинные дробные числа (зависит от системы) |	-9 223 372 036 854 775 808 .0 до 9 223 372 036 854 775 807.0 | 8|
|char | Символы | ‘Q’; ‘f’; ‘:’; ‘@’ | 1|
|string | Строковые данные | строки, которые можно закодировать в 32 разрядах или меньше | 4|
|bool | Булевы выражения | true; false | 1|

255 в двоичной 11111111, так как начало счета с 0 и до 255 = 256 чисел

256 в двоичной 100000000

---

[**Жадный алгоритм**](https://ru.wikipedia.org/wiki/%D0%96%D0%B0%D0%B4%D0%BD%D1%8B%D0%B9_%D0%B0%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC) (*Greedy algorithm*) — алгоритм, заключающийся в принятии локально [оптимальных решений](https://ru.wikipedia.org/wiki/Оптимальное_решение) на каждом этапе, допуская, что конечное решение также окажется оптимальным.

Если глобальная оптимальность алгоритма имеет место практически всегда, его обычно предпочитают другим методам оптимизации, таким как [динамическое программирование](https://ru.wikipedia.org/wiki/Динамическое_программирование).

(

**Динамическое программирование** — способ решения сложных задач путём разбиения их на более простые подзадачи. Он применим к задачам с оптимальной подструктурой, выглядящим как набор перекрывающихся подзадач, сложность которых чуть меньше исходной. В этом случае время вычислений, по сравнению с «наивными» методами, можно значительно сократить.

Ключевая идея в динамическом программировании достаточно проста. Как правило, чтобы решить поставленную задачу, требуется решить отдельные части задачи (подзадачи), после чего объединить решения подзадач в одно общее решение. Часто многие из этих подзадач одинаковы. Подход динамического программирования состоит в том, чтобы решить каждую подзадачу только один раз, сократив тем самым количество вычислений. Это особенно полезно в случаях, когда число повторяющихся подзадач экспоненциально велико.

Метод *динамического программирования сверху* — это простое запоминание результатов решения тех подзадач, которые могут повторно встретиться в дальнейшем. *Динамическое программирование снизу* включает в себя переформулирование сложной задачи в виде [рекурсивной](https://ru.wikipedia.org/wiki/Рекурсия) последовательности более простых подзадач.

)

Общего критерия оценки применимости жадного алгоритма для решения конкретной задачи не существует, однако для задач, решаемых жадными алгоритмами, характерны две особенности:

**Принцип жадного выбора** - если последовательность локально оптимальных выборов даёт глобально оптимальное решение. В типичном случае доказательство оптимальности следует такой схеме:

1. Доказывается, что жадный выбор на первом шаге не закрывает пути к оптимальному решению: для всякого решения есть другое, согласованное с жадным выбором и не хуже первого.
2. Показывается, что подзадача, возникающая после жадного выбора на первом шаге, аналогична исходной.
3. Рассуждение завершается по индукции.

**Оптимальность для подзадач** - если оптимальное решение задачи содержит в себе оптимальные решения для всех её подзадач.

### Размен монет

Так, например, сумму в 24 копейки монетами в 1, 5 и 7 коп. жадный алгоритм разменивает так: 7 коп. — 3 шт., 1 коп. — 3 шт., в то время как правильное решение — 7 коп. — 2 шт., 5 коп. — 2 шт.

Представим, что кассир должен покупателю сдачу в 41 цент, а у него на поясе есть цилиндры с монетками для сдачи номиналом в 25, 10, 5 и 1 цент. Руководствующийся «жадным» алгоритмом кассир сразу же захочет выдать максимум, на первом же шаге. На этом шаге оптимальным или наилучшим решением будет выдать 25 пенсов. 41-25 = 16. Осталось выдать 16 пенсов. Очевидно, 25 пенсов слишком много, значит, остается 10. 16-10 = 6. Теперь выдаем по тому же принципу 5 пенсов, и затем — 1. Таким образом, покупатель получит всего четыре монеты номиналом 25, 10, 5 и 1 пенс.

---

### HelloWorld на Java
```java
public class HelloWorld {
   public static void main(String[] args) {
       // Выводим Hello World в консоль.
       System.out.println("Hello, World");
   }
}
```











