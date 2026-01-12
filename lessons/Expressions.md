 # Expressions
A non-empty sequence of literals, variables, operators, and function calls that **calculates a value**. The process of executing an expression is called evaluation, and the resulting value produced is called the result or return value. When an expression is evaluated, each of the terms inside the expression are evaluated, until a single value remains. 
Here are some examples of different kinds of expressions:

```
2               // 2 is a literal that evaluates to value 2
"Hello world!"  // "Hello world!" is a literal that evaluates to text "Hello world!"
x               // x is a variable that evaluates to the value held by variable x
2 + 3           // operator+ uses operands 2 and 3 to evaluate to value 5
five()          // evaluates to the return value of function 
```


>> Wherever a single value is expected in C++, you can use an value-producing expression instead, and the expression will be evaluated to produce a single value.

Expression do not end in a semicolon and cannot be compiled by themselves.

## Subexpressions, full expressions, and compound expressions

Consider the following expressions:
```
2               // 2 is a literal that evaluates to value 2
2 + 3           // 2 + 3 uses operator+ to evaluate to value 5
x = 4 + 5       // 4 + 5 evaluates to value 9, which is then assigned to variable x

```

subexpression is an expression used as an operand. For example, the subexpressions of `x = 4 + 5` are `x` and `4 + 5`

full expression is an expression that is not a subexpressions. All above are the examples for it.

Compound expressions is an expression that contains two or moreu uses of operators
