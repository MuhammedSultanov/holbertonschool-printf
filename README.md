## _printf()
> In this project, we recreated a mini-verison of the printf function found in
> the stdio.h library in the C programming language. This function allows
> us to print any argument given to the standard output or terminal and similar
> printing functions can be found in any programming language. This means we can
> print any combinations of strings, intergers, and other different data types.

### Synopsis
> This repository holds all the code necessary for our custom _printf
> function to run. Our mini-version currently handles conversion specifiers:
> c, s, %, d, i,  and does not yet
> support field width, precision, flag characters, or length modifiers.
> Our pritnf function prints any character, string, and  integer.  


### Description of what each file shows:

main.h -----------------------> holds prototypes of functions spread across all files
_printf.c --------------------> holds custom _printf function
_printf_s.c ------------------> handles %s to print a string of characters
_printf_c.c ------------------> handles %c to print a single character
_print_d.c -------------------> handles %d to print a number
man_3_printf -----------------> custom manpage for custom _printf function


### Environment
* Language: C
* OS: Ubuntu 20.04 LTS
* Compiler: gcc 11.4.0
* Style guidelines: [Betty style](https://github.com/alx-tools/Betty/tree/master)

### How To Install & Compile

alex@ubuntu$ git clone https://github.com/MuhammedSultanov/holbertonschool-printf.git
alex@ubuntu$ cd holbertonschool-printf

Sample main program inside print.c:

int main(void)
{
	_printf("%s %c %d", "Hello K_N!", "H", 100);
	return (0);
}
====================================
alex@ubuntu$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c -o print
alex@ubuntu$ ./print
Hello K_N! H 100
alex@ubuntu)$


### To Do
* The main _printf function can be separated into more modular shorter functions
* More functionality can still be added (e.g. support field width specifiers, etc)

---
### Authors
Muhammed Sultanov
Sohrab Yusibov
