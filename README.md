# 0x19. C - Stacks, Queues - LIFO, FIFO

## The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

### Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

```
julien@ubuntu:~/0x19. Stack (LIFO) & queue (FIFO)$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/0x19. Stack (LIFO) & queue (FIFO)$
```

Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:
```
julien@ubuntu:~/0x19. Stack (LIFO) & queue (FIFO)$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/0x19. Stack (LIFO) & queue (FIFO)$
```
## Setup

```
git clone https://github.com/Daransoto/monty.git
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

## Execute
You can execute the program using:
```
./monty file.m
```
where file.m is the file to test the opcodes

## Examples
You can find the example monty byte code files in (test)[https://github.com/Daransoto/monty/tree/master/test] and execute with the command above.

* push and pall example:
```
user@ubuntu:~/0x19. Stack (LIFO) & queue (FIFO)$ cat test/push_pall.m
push 1
push 2
push 3
pall
```
The output will be:
```
user@ubuntu:~/0x19. Stack (LIFO) & queue (FIFO)$ ./monty test/push_pall.m
3
2
1
```
* add, sub examples:
```
user@ubuntu:~/0x19. Stack (LIFO) & queue (FIFO)$ cat test/add.m 
push 1
push 2
push 3
pall
add
pall
user@ubuntu:~/0x19. Stack (LIFO) & queue (FIFO)$ ./monty test/add.m 
3
2
1
5
1
user@ubuntu:~/0x19. Stack (LIFO) & queue (FIFO)$ cat test/sub.m
push 1
push 2
push 10
push 3
sub
pall
user@ubuntu:~/0x19. Stack (LIFO) & queue (FIFO)$ ./monty test/sub.m 
7
2
1
```
## Opcodes

* push - Push an elements to the stack.
* pop - Removes the top element of the stack.
* pall - Prints all the values on the stack, starting from the top of the stack.
* nop - Doesn’t do anything.
* pint - Prints the value at the top of the stack, followed by a new line.
* pchar - Prints the char at the top of the stack, followed by a new line.
* pstr - Prints the string starting at the top of the stack, followed by a new line.
* swap - Swaps the top two elements of the stack.
* rotl - Rotates the stack to the top
* rotr - Rotates the stack to the bottom
* add - Adds the top two elements of the stack.
* sub - Subtracts the top element of the stack from the second top element of the stack.
* div - Divides the second top element of the stack by the top element of the stack.
* mul - Multiplies the second top element of the stack with the top element of the stack.
* mod - Computes the rest of the division of the second top element of the stack by the top element of the stack.
* stack - Sets the format of the data to a stack (LIFO). This is the default behavior of the program.
* queue - Sets the format of the data to a queue (FIFO).



## Files description:

| File | Description |
| ------ | ------ |
| [main.c](https://github.com/Daransoto/monty/blob/master/main.c) | The main function |
| [math.c](https://github.com/Daransoto/monty/blob/master/math.c) | Functions to produce a math result with some elements on the stack|
| [monty.h](https://github.com/Daransoto/monty/blob/master/monty.h) | Header file that includes all the prototypes of the functions and the structures |
| [moves.c](https://github.com/Daransoto/monty/blob/master/moves.c) | Functions to modify the elements on the stack |
| [print.c](https://github.com/Daransoto/monty/blob/master/print.c) | Functions to prints the elements on the stack |
| [push-pop.c](https://github.com/Daransoto/monty/blob/master/push-pop.c) | Functions to add elements on queque or stack |

## Authors

[Daniela Chamorro](https://www.linkedin.com/in/daniela-alexandra-chamorro-guerrero-666805a1/) [:octocat:](https://github.com/dalexach)
[Darwin Soto](https://www.linkedin.com/in/darwin-soto-6b41a6105/) [:octocat:](https://github.com/Daransoto)
