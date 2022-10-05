# C programming:-
------
    C is a genenral-purpose procedural-oriented programming language developed by Dennis M. Ritchie in year 1972.

- C language is one of the most popular and most used compiled high-level programming language.

- Dennis Ritchie Developed C in the Bell laboratory for creating system application that directly interacts with the hardware such as kernels, drivers etc.

## Why learn C programming langugage?

- Easy to learn
- Structured language
- Efficient programs
- Low level memory management
- Compiled in multiple platform

## History of  C programming language: 
----------------------------------------------------

**History of C is very interesting to know:**

- C programming language was developed by Dennis Ritchie at Bell laboratories of AT&T in USA.

- It was developed to overcome the problem of the old lanugages as B, BPCL,etc.

- Initially C was develop to be used in Unix operating system.

* C inherits many feature of its predecessors languages such as B and BPCL.

**Below is the table of some of the programming language developed before C**

|**Languages** | **Year** | **Developed By**           |
|--------------|----------|----------------------------|
|Algol         | 1960     | International Group        |
|BCPL          | 1967     | Martin Richard             |
|B             | 1970     | Ken Thompson               |
|Traditional C | 1972     | Dennis Ritchie             |
|K & R C       | 1978     | Kernighan & Dennis Ritchie |
|ANSI C        | 1989     | ANSI Committee             |
|ANSI/ISO C    | 1990     | ISO Committee              |
|C99           | 1999     | Standardization Committee  |




## Features of C programming :
--------------------------------

__**There are 10 important features of C programming languages**__

1. Simple

2. Portable(*Machine independent*)

3. Mid-level programming lanugage

4. Structured programming lanugage

5. Rich library

6. Memory Management

7. Fast Speed

8. Pointers

9. Recursion

10. Extensible

 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

 **1. Simple**
 -----------------
  *C language is simple as it has easy to learn syntax, C programs can be structured(Can breaks into parts{function}),limited keywords.*

 **2. Machine independent**
 ---------------------------
  *Unlike Assembly language, C program can be run in different machines. with some specific changes in code, C program can be run in 32-bit and 64-bit or ARM-based machine.* 

 **3. Midlevel programming language**
 -------------------------------------
  *Although C language has many low-level programming features like Dynamic-memory-managment{Allocates memory in runtime(You'll be studying this in more detail later.)}, It supports feauters of high-level programming like arrays,structures,unions,etc*

 **4. Structured programming language**
 ----------------------------------------
  *C is a structured programming language in the sense that we can break the program into parts using functions. So, it is easy to understand and modify. Functions also provide code reusability.*

 **5. Rich library**
 ---------------------
  *C language provides rich in-built functions that makes programming fast and effective.*

 **6. Memory Management**
 --------------------------
  *It supports the feature of dynamic memory allocation. In C language, we can free the allocated memory at any time by calling the free() function.*

 **7. Fast speed**
 ------------------- 
  *The compilation and execution time of C language is fast since there are lesser inbuilt functions and hence the lesser overhead.*

 **8. Pointers**
 -----------------------------

  *C provides the feature of pointers. We can directly interact with the memory by using the pointers. We can use pointers for memory, structures, functions, array, etc.*

 **9. Recursion**
 ----------------------------------
 *In C, we can call the function within the function. It provides code reusability for every function. Recursion enables us to use the approach of backtracking.*

 **10. Extensible**
 ------------------------------
  *C programs are extensible because we can implement new features in it.*
  
-----------------------------------------------------------------------------------------------------------------------------------------------------------------
## Basic C program


```C
    #include<stdio.h> //Header file
    /*Program starts with main()*/
    int main(){
        printf("Hello world"); //Prints value given in ()
    }

```
**Explanation of the above program**

- **```#include<stdio.h>```** *It is a header file that is needed to use the standard input-output library function.* **ex:** ```printf();``` function is defined in **stdio.h**. 
- **```int main();```:** *It is the entry point of every program. Every C program will begin from main() function.*
- **```printf();```:** *It print the data specified in between the **()** to the console.*
- **```return 0;```:** *The return 0 statement, returns execution status to the OS. The 0 value is used for successful execution and 1 for unsuccessful execution.*


      Note : ";" *is used as a statement terminator. Every statement in C program ends with semicolon. Otherwise you will get a compile time error.* 
   
## How to compile and run c programs?

1. **Using an IDE**
2. **Using Commandline(Windows)/Terminal(linux or macos)**

**Using an IDE**:
    *You can either install an IDE which you can edit your C programs and run programs easily.*
    
   _**Below given some of the most used ide for C programming**_
   - [DevC++](https://sourceforge.net/projects/orwelldevcpp/)
   - [Codeblock](https://www.codeblocks.org/)
   - [visual studio code](https://code.visualstudio.com/download) (*setting up vscode for C++ programs might be tricky*)

**Using Commandline(Windows)/Terminal(linux or macos)**
   
   ```console
           gcc file_name.c -o file_name_to_be_saved
   ```
   **example:** *you wrote a program and saved as file name "hello.c" and you want to execute the file. you can compile "hello.c" to any name you want. here we will make output file name as "greet"*
   
   ```console 
          gcc hello.c -0 greet
          
   ```

# ***Keywords in C***

|    keywords     |          Description        |
|-----------------|-----------------------------|
| auto | a default Storage class in C |
| else | a block of code execute when if condition fails|
| long | a datatype stores 8bytes ie. 2<sup>(8-1)</sup> bit of integer range |
| switch | a conditional statement pairs with case |
| break | exits from the loops |
| enum  | a user defined set of data types in c |
| register | a storage class in c that stores value in register |
| typedef | to define(name) a custom type|
| case  | pairs with switch |
| float | a datatype to store floating-type numbers |
| short | a dattype to store small values |
| unsigned | to eliminate signed values |
| const | declares a constant value |
| for   | defines a loop |
| signed | declares a signed value |
| void  | void is a data type that returns nothing. |
| continue | skips a condition in a loop|
| goto  | jumps to a specified location |
| sizeof | returns the size |
| volatile | data type? |
| default | paired with switch-case value |
| if    | executes code if condition matches |
| static | preserve value in multiple runs |
| while | runs the code until the conditions fulfilled |
| do    | paired with do-while |
| int   | declares an integer of size 4 bytes |
| char  | declares a character value of size 1 byte |
| struct | declares a structure datatype | 
| double | declares a double data type of floating-point number with double precision of size 8 bytes |
| _Packed | used with union to elimiated padding in structure |

# Data types in C: -

There are following data types in C : -

1. Basic Data types: -
    - Integer types
    - Floating-point types
2. Enumerated types: -
    They are  arithmetic types and used to define certain data types
3. Void type: - It is a type that has no value.
4. Derived data types: -
    - Pointer
    - Array
    - Structure
    - Union
    - Function

## Integer types: -

| S.NO | Type   | Storage Size  | value range |
| 1| char | 1 byte | -128 to 127|
| 2 | unsigned char | 1 byte | 0 to 255 |
| 3 | signed char | 1 byte | -128 to 127 |
| 4 | int | 4 bytes | -2147483648 to 2147483647 |
| 5 | unsigned int | 4 bytes | 0 to 65535 |
| 6 | short | 2 bytes | -32768 to 32767 |
| 7 | unsigned short | 2 bytes | 0 to 65535 |
| 8 | long | 8 bytes | -9223372036854775808 to 9223372036854775807 |
| 9 | unsigned long | 8 bytes | 0 to 18446744073709551615 |



# References: -
[Data Structure using c](/data%20structures/Data%20Structure.md)