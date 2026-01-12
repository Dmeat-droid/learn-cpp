# Introduction to iostream: cout, cin, and endl
In C++, there's a standard library for input/output called the iostream.

## std::cout
It allows us to send data to the console to be printed as text.

```
#include <iostream> // for std::cout

int main()
{
    std::cout << "Hello world!"; // print Hello world! to console

    return 0;
}
```
in this program, we use 'std::cout', along with the **insertion operator ('<<')**, to send the text to the console to be printed.

It also can print values of the variables.

To print more than one thing in the same line, we can use the `<<` multiple times in a single statement to link together the pieces of output.

```
#include <iostream> // for std::cout

int main()
{
    std::cout << "Hello" << " world!";
    return 0;
}
```

to move the cursor into new line, we can use the `std::endl`.
Example:
```
#include <iostream> // for std::cout and std::endl

int main()
{
    std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
    std::cout << "My name is Alex." << std::endl;

    return 0;
}
```

## `std::cout` is buffered
Before it showed in our terminal, the text stored in a region memory called buffer. Periodically, the buffer is **flushed**, meaning the data collected in the buffer is transfered to its destination. SO if our program is crashes, aborts, or paused before the buffer is flushed, any output in still waiting in the buffer will not be displayed.

>>The opposite of buffered output is unbuffered output. With unbuffered output, each individual output request is sent directly to the output device.

>>Writing data to a buffer is typically fast, whereas transferring a batch of data to an output device is comparatively slow. Buffering can significantly increase performance by batching multiple output requests together to minimize the number of times output has to be sent to the output device.

## `std::endl` vs `\n`
Using `std::endl` is often inefficient, because it will output a newline and flush the buffer(which is slow). To output a newline without a buffer, we can use the `\n` and the usage just like in c.

```
#include <iostream> // for std::cout

int main()
{
    int x{ 5 };
    std::cout << "x is equal to: " << x << '\n'; // single quoted (by itself) (conventional)
    std::cout << "Yep." << "\n";                 // double quoted (by itself) (unconventional but okay)
    std::cout << "And that's all, folks!\n";     // between double quotes in existing text (conventional)
    return 0;
}
```

## std::cin
`std::cin` reads character input and use `>>` to put the data in a variable.

#include <iostream>  // for std::cout and std::cin

```
int main()
{
    std::cout << "Enter a number: "; // ask user for a number

    int x{};       // define variable x to hold user input (and value-initialize it)
    std::cin >> x; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << '\n';
    return 0;
}
```
### std::cin is buffered
when we give input from cin, it will added into a buffer and ensures the data is processed in the same order in which it was added. Sometimes, this is called FIFO (first in, first out). 

Inputting data is a two stage process:
- the individual character added to the end of the input buffer, the enter stored as `\n`
- the extaction operator (`>>`) removes character from the fron of the input buffer and converts into a value that is assigned to the associated variable. (via copy-assignment)

Each line of input data is terminated by a `\n` character

> std::cin is buffered because it allows us to separate the entering of input from the extract of input. We can enter input once and then perform multiple extraction requests on it.


## Basic of extraction process
Here's a simplified view of how operator `>>` works for input
1. If `std::cin` is not in good state, no extraction attempted and the extraction process aborts immidiately
2. Leading whitespace characters are discarded from input buffer
3. If the input buffer is empty, `>>` will wait for the user to input more data.
4. operator `>>` then extracts as many consecutive character as it can until it encounters either a newline character or character that is not valid within the variable 

> If no characters could be extracted in step 4 above, extraction has failed and the object being extracted to is copy-assigned the value `0`, and any future extractions will immidiately fail(until `std::cin` is cleared)

>> When we declare a variable, it is better to always initialize it to prevent from the garbage value that'll make us confused with the random value.

>> Take care to avoid all situations that result in undefined behavior, such as unitialized variables.



