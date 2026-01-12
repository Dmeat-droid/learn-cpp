# Introduction to literals and operators

## Literals
```
std::cout << "Hello world!";
int x { 5 };
```

in those code , "Hello world!" and '5' are literals. Literal (also know as literal constant) is a fixed value that has been inserted directly into source code. Like variable, literals also have value and type but we can't change the value of literals.

## Operators
Is a symbol that represent specific operation. The input values called **operands* and the output of an operation called **return value**. 

The number of operands that an oprator takes as input called the operator's arity.

In C++. there are four different arities:
- Unary: Operators act on one operand, for example the `-` operator takes literal operand (for example 5) and flips it sign to produce `-5`

- Binary: operators act on two operands for example like `3 + 4`.

- Ternary: operators act on three operands

- Nullary: operators act on zero operands

in the application, we can chain the operators and they can executed based on the order rules.

## Return values and Side effects
Most operators in C++ just use their operands to calculate return value. For example `-5` produces return value `-5` and `2+3` produce return value `5`.

Some of them also have additional behaviors or some observable effects beyond producing a return value that is called side effect. For example `x = 5` has the side effect of assigning value to variable `x`.
