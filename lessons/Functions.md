# Introduction to functions
Function is a reusable sequence of statements designed to do particular job.

>> The function initiating the function call is the caller, and the function being called (executed) is the callee. A function call is also sometimes called an invocation, with the caller invoking the callee.

##User Defined Function

```
returnType functionName(){ // The function header
    // This is the function body
}
```

## What function can:
- Calling function more than once
- function that call functions that call other functions

## What function can't:
- Nested function


# Function return values (value-returning functions)
If we want to return value back to the caller, there are two things that needed:
1. We have to indicate the return type
2. We use a return statement to indicate value that we'll return.

>> It is a common misconception that main is always the first function that executes. Global variables are initialized prior to the execution of main. If the initializer for such a variable invokes a function, then that function will execute prior to main. 

## Status codes
The return value from `main()` sometimes called a status code whic indicate is the program run normally or is there any error during the process. Usually it return `0` or` EXIT_SUCCESS`. If there's something wrong, we can return `EXIT_FAILURE`

## The Undefined Behavior
Will be occur if there's a value-returning function that doesn't return value.

>> #Best Practice
>> Follow DRY: “Don’t repeat yourself”. If you need to do something more than once, consider how to modify your code to remove as much redundancy as possible. The (snarky) opposite of DRY is WET (“Write everything twice”).

# Parameters and Arguments
