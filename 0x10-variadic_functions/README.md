0x10. C - Variadic Functions
=============================

**man or help**
-  `stdarg`

Requirements
------------

### General
-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
-   You are allowed to use `_putchar`
-   You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `variadic_functions.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded

Tasks
-----
### 0\. Beauty is variable, ugliness is constant

Write a function that returns the sum of all its parameters.

-   Prototype: `int sum_them_all(const unsigned int n, ...);`
-   If `n == 0`, return `0`

```
julien@ubuntu:~/0x0f. variadic functions$ cat 0-main.c
#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
julien@ubuntu:~/0x0f. variadic functions$ ./a 
1122
500
julien@ubuntu:~/0x0f. variadic functions$ 
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x10-variadic_functions`
-   File: `0-sum_them_all.c`
---------------------------

### 1\. To be is to be the value of a variable

Write a function that prints numbers, followed by a new line.

-   Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
-   Where `separator` is the string to be printed between numbers
-   And `n` is the number of integers passed to the function
-   You are allowed to use `printf`
-   If `separator` is `NULL`, don’t print it
-   Print a new line at the end of your function

```
julien@ubuntu:~/0x0f. variadic functions$ cat 1-main.c
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
julien@ubuntu:~/0x0f. variadic functions$ ./b
0, 98, -1024, 402
julien@ubuntu:~/0x0f. variadic functions$ 
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x10-variadic_functions`
-   File: `1-print_numbers.c`
----------------------------

### 2\. One woman's constant is another woman's variable

Write a function that prints strings, followed by a new line.

-   Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
-   Where `separator` is the string to be printed between the strings
-   And `n` is the number of strings passed to the function
-   You are allowed to use `printf`
-   If separator is NULL, don’t print it
-   If one of the string is NULL, print `(nil)` instead
-   Print a new line at the end of your function

```
julien@ubuntu:~/0x0f. Variadic functions$ cat 2-main.c
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
julien@ubuntu:~/0x0f. Variadic functions$ ./c 
Jay, Django
julien@ubuntu:~/0x0f. Variadic functions$ 
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0E-variadic_functions`
-   File: `2-print_strings.c`
----------------------------   

### 3\. To be is a to be the value of a variable

Write a function that prints anything.

-   Prototype: `void print_all(const char * const format, ...);`
-   Where `format` is a list of types of arguments passed to the function
	-   `c`: `char`
	-   `i`: `integer`
	-   `f`: `float`
	-   `s`: `char *` (if the string is NULL, print `(nil)` instead
	-   any other char should be ignored
	-   see example
-   You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`
-   You can use a maximum of
	-   2 `while` loops
	-   2 `if`
-   You can declare a maximum of `9` variables
-   You are allowed to use `printf`
-   Print a new line at the end of your function

```
julien@ubuntu:~/0x0f. Variadic functions$ cat 3-main.c
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
julien@ubuntu:~/0x0f. Variadic functions$ ./d 
B, 3, stSchool
julien@ubuntu:~/0x0f. Variadic functions$
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x10-variadic_functions`
-   File: `3-print_all.c`
----------------   

### 4\. A door is what a dog is perpetually on the wrong side of

Write a function that creates a new dog.

-   Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
-   You have to store a copy of `name` and `owner`
-   Return `NULL` if the function fails

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e
julien@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0E-structures_typedef`
-   File: `4-new_dog.c`
----------------------
   
### 5\. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
Write a function that frees dogs.

-   Prototype: `void free_dog(dog_t *d);`

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f
julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Poppy, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0d. structures, typedef$ 
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0E-structures_typedef`
-   File: `5-free_dog.c`
