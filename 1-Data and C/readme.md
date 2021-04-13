# Chapter 3: Data and C 

You will learn about the following in this chapter:

* Keywords: `int`, `short`, `long`, `unsigned`, `char`, `float`, `double`, `_Bool`, `_Complex`, `_Imaginary`;
* Operator: `sizeof`; 
* Function: `scanf()`; 
* The basic data types that can C uses; 
* The distinctions between integer types and floating-points types; 
* Writing constants and declaring variables of those types; 
* How to use the `printf()` and `scanf()` functions to read and write values of differents types. 


## Bits, Bytes and Words

8-bit words can represent integers from 0 to 255 (2⁸-1)

| Word size | Max hexadecimal | Max decimal |
|--------|------|----|
| 8-bits | 0xFF | 255
|16-bits | 0xFFFF | 65,535
|32-bits | 0xFFFFFFFF | 4,294,967,295
|64-bits | 0xFFFFFFFFFFFFFFFF | 18,446,744,073,709,551,615

## Other Integer types

* `short int`: signed type (2 Bytes);
* `long int`: signed type (8 Bytes);
* `long long int`: signed type (8 Bytes);
* `unsigned int`: unsigned (4 Bytes);
* `signed` keyword can be used to explicit.

