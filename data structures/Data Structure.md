# INDEX

- [What is Data Structure?](#data-structure)
- [Type of Data structure](#type)
- [Arrays](#arrays)
   - [Definition](#definition)
   - [Advantages](#advantage-of-using-arrays)
# **Data Structure** 

A data structure is an art of organizing and maintaining data so that it can be meaningful, easy to retrive, manage.



# **Arrays**

## **Definition: -**

```
An *array* is a collection of items stored in a contiguous memory locations.
```

An array stores multiple values of same type under one variable name.

***Syntax: -***
```C

    datatype array_name[size];
    ex: -
    int numbers[10];
```

## Is the array always of fixed size?

In C language, the array has a fixed size meaning one the size is given to it, it cannot be changed.

*Reason for fixed size:* As the data/values are stored in contiguous manner, it is not always that the memory are available in contiguous memory location. so the size of the array have to define at compile time to allocate the array a contiguous strip of storage at memory location.

## Advantage of using arrays:

- Arrays allow random access to elements. This makes accessing elements py position faster.
- Arrays have better cache locality, which makes a pretty big difference in performance.
- Arrays reporesent multiple data items of same type using a single name.

## Type of indexing in an array:

- ***0(zero-based indexing)*** - The first element of the array is indexed by a subscript of 0.
- ***1(one-based indexing)*** - The first element of the array is indexed by a subscript of 1.
- ***n(N-based indexing)*** - The bas index of an array can be freely chosen. Usually programming langauge allowing n-based indexing also allow **negative** index values, and other scalar data types like enumerations, or characters may be used as an array index.

## Types of arrays: 

1. ### One dimensional array(1-D arrays)
2. ## Multi-dimensional array



## Operations in array:

1. ### Insertion
    Insertion is the process of inserting the values into the array.

    *Syntax of array insertion at nth index: -*
    ```C
        int array[10];
        array[0]=2;
    ```
    *Syntax of array initialization: -*
    ```C
        int array[]={1,2,3,4,5,6,7,8,9,0};
        Or
        int array[10]={1,2,3,4,5,6,7,8,9,0};
        Or
        array[0]=1;
        array[1]=2;
        array[2]=3;
        etc.
    ```

2. ### Updation

    The updation in the value at any index of an array takes constant time. O(n).

    *Syntax of array updatation*
    ```C
        int array[]={1,2,3,4,5,6,7,8,9,0};
        array[9]=10;
    ```

