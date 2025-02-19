Задание 4.
1. Поэтапно компилируем gcc -c file1.c file2.c main.c
2. static_var видна в file1.o, в других не видна, global_var видна в file2.c, но не видна в main.c. 
3. При попытке собрать программу вылезает ошибка, связанная с переменными. Переменная global_var определена несколько раз в файлах, т.к. это недопустимо во время линковки возгикает ошибка. Также эта ошибка указывает на переменную static_var, которую мы не можем получить в другом файле.
4. Удаляем global_var и static_var в file2.c, ещё раз компилируем и снова запускаем nm. Вижу, что теперь больше нет данных о static_var в file2.o, а также не повторяются данные о global_var.
5. С помощью objdump смотрю секции elf файла. 
Видим, что static_var и global_var находятся в .data (static_var - статическая инициализированная переменная, gloval_var - инициализированная глобальная переменная). 
UND значит то, что переменная или функция ещё не определена в файле.
.bss - находится в data segment
.data - находится в data segment
.text - находится в code segment
В бинарнике program не видны строки из printf().
Задание 1.
1.	global_var - в секции .data  (т.к. инициализированная глобальная переменная)
2.	uninitialized_global_var: в секции .bss (т.к. неинициализированная глобальная переменная).
3.	static_var: в секции .data (т.к. статическая инициализированная переменная)
4.	global_point: в секции .data.
5.	local_var из функции print_message: в стеке, так как это локальная переменная, которая объявлена внутри функции. (не сохраняется в ELF-файле отдельно, находится в области памяти, выделенной для стека.)
6.	static_local_var из функции print_message: находиться в секции .data, (т.к. это статическая инициализированная локальная переменная)
7.	auto_var из функции main: в стеке, как и local_var. 
8.	dynamic_var:  указатель, который хранит адрес, он хранится в памяти
9.	stack_point: локальная переменная, объявленная в функции main, будет создана в стеке.

Задание 2.
1.	global_var – data segment 
2.	uninitialized_global_var: data segment
3.	static_var: data segment
4.	global_point: data segment
5.	local_var из функции print_message: data segment
6.	static_local_var из функции print_message: data segment
7.	auto_var из функции main: data segment 
8.	dynamic_var:  data segment
9.	stack_point: data segment
функции находятся в read-only memory segment (code segment)
