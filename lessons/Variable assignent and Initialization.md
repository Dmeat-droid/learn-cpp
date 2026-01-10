# Variable assignent and Initialization
## Keynote
- Initialization provides an initial value for variable. Think "initial-ization".


## Variable Assignment
after define a variable, we can give it a value using `=` operator (assignment operator). By default, assignment copies the value on the right-hand side of the `=` operator to the variable on the left-hand side of the operator. This is called **copy-assignment**.

## Variable Initialization
One downside of assignment is that we require two statements to define the object and assing value in it. We can combine those two steps. When an object is defined, you can optionally provide initial value for the object. It is called **initialization** and the syntax used to initialize an object is called **initializer**.

Example:
```
#include <iostream>

int main()
{
    int width { 5 };    // define variable width and initialize with initial value 5
    std::cout << width; // prints 5

    return 0;
}

```

In the above initialization of variable `width`, `{ 5 }` is the initializer, and `5` is the initial value.

## Forms of initialization

there are 5 common forms of initialization in C++:
```
int a;         // default-initialization (no initializer)

// Traditional initialization forms:
int b = 5;     // copy-initialization (initial value after equals sign)
int c ( 6 );   // direct-initialization (initial value in parenthesis)

// Modern initialization forms (preferred):
int d { 7 };   // direct-list-initialization (initial value in braces)
int e {};      // value-initialization (empty braces)

```


1. Default-Initialization
``` 
int a; 
```
When no initializer is provided, it is called default-initialization. In many cases, default-initialization performs no initialization and leaves variabel with indeterminate (or sometimes called "Garbage value").

2. Copy-Initialization
```int length = 8;
```
When initial value is provided after an equals sign, called **copy-initialization**. It is inherited from the C language.

3. Direct-initialization
when the initial value provided inside parenthesis, its called **direct-initialization**

```
int width(5);
```
It is more efficient initializatin of complex objects but fallen ot of favor in modern cpp. But it still have more advantages in such cases.

4. List-initialization
The modern way in cpp to initialize an object, only use of curly braces. It is comes in two forms:
```
int width { 5 };    // direct-list-initialization of initial value 5 into variable width (preferred)
int height = { 6 }; // copy-list-initialization of initial value 6 into variable height (rarely used)
```
it is works in almost all cases, and it can initialize objects with a list of values rather than single value.

unfortunately, we're disallowed "narrowing conversion" (inserting value that mismatch with data type of the variable) in **List Initialization**
```
int main()
{
    // An integer can only hold non-fractional values.
    // Initializing an int with fractional value 4.5 requires the compiler to convert 4.5 to a value an int can hold.
    // Such a conversion is a narrowing conversion, since the fractional part of the value will be lost.

    int w1 { 4.5 }; // compile error: list-init does not allow narrowing conversion

    int w2 = 4.5;   // compiles: w2 copy-initialized to value 4
    int w3 (4.5);   // compiles: w3 direct-initialized to value 4

    return 0;
}
```
but this restriction not applied to any subsequent assignment to the variable
```
int main()
{
    int w1 { 4.5 }; // compile error: list-init does not allow narrowing conversion of 4.5 to 4

    w1 = 4.5;       // okay: copy-assignment allows narrowing conversion of 4.5 to 4

    return 0;
}
```

If we initialize a variable using an empty set of braces, **value-initialization** takes place. In most cases, it'll initialize the variable to zero. So it is also called zero-initialization.

```
int width {}; // value-initialization / zero-initialization to value 0
```

> **For advanced readers** 
> For class types, value-initialization (and default-initialization) may instead initialize the object to predefined default values, which may be non-zero.

> List-initialization is the preferred form of initialization in modern c++

## The `[[maybe_unused]]` attribute (c++17)
In c++, if we initialaize a value but not use it, the compoiler will likely complain about it. In C++17, introduced the `[[maybe_unused]]` to make the compiler say nothing bout it.




