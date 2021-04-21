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

* `short int`: signed type (2 Bytes or 16 bits);
* `long int`: signed type (8 Bytes or 64 bits);
* `long long int`: signed type (8 Bytes or 64 bits);
* `unsigned int`: unsigned (4 Bytes or 32 bits);
* `signed` keyword can be used to explicit.

> Integer Overflow
> If an unsigned type reaches its maximum, it starts from beginning.
> For signed types, it goes to minimum (negative).
> There is no exception or notification to inform an overflow.

To explicitly set a constant to `long` type, it can be used 'L' or 'l' suffix on the number.

Like `1000L`, `020L` (octal) or `0x10L` (hexa).

Similarly, the `long long` type and `unsigned long long` also can be specified with `LL` and `ULL` suffixes, respectively.

### Type `char`

An integer type to store characters code, tipically it is 8-bit size.

The characters are symbols defined in ASCII table.

A `char` variable is declared attributing a single character between single quotes '.

```c
char grade = 'A';
```
Or can be used numeric representation:

```c
char grade = 65;
```

#### Nonprinting characters

There are a collection of special characters that is used to format and better visualization of characters, like beeps, tabs, backspace, etc.

The way of defining these characters is using the so called _escape sequences_:

| Sequence | Meaning |
|----------|---------|
| `\a` | Alert (ANSI C) |
| `\b` | Backspace |
| `\f` | Form feed |
| `\n` | Newline |
| `\r` | Carriage return |
| `\t` | Horizontal tab |
| `\v` | Vertical tab |
| `\\` | Backslash |
| `\'` | Single quote |
| `\"` | Double quotes |
| `\?` | Question mark |
| `\0oo` | Octal value |
| `\xhh` | Hexadecimal value |

### Type `_Bool` type

Used to represent Boolean values. Was introduced in C99.

`_Bool` type only requires 1 bit of memory.

## Portable Types: `stdint.h` and `inttypes.h`



