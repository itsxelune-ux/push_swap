*This project has been created as part of the 42 curriculum by omitrovs.*

# push_swap

## Description

**push_swap** is a sorting algorithm project from the 42 curriculum.  
The goal of this project is to sort a stack of integers using a limited set of predefined operations, while producing the smallest possible number of moves.

The program receives a list of integers as arguments and outputs a sequence of operations that sorts the numbers in ascending order.

For this implementation, I used the **Turk Algorithm**, an optimized cost-based strategy designed to minimize the total number of operations by calculating the cheapest move at each step.

I decided to use the Turk Algorithm because it felt like a good balance between performance and clarity. I didn’t want something extremely complicated, and i also wanted an algorithm that performs well for bigger inputs like 100 and 500 numbers.


### Project Goals

- Implement a sorting algorithm using only allowed stack operations.
- Optimize the number of operations.
- Handle errors and invalid input correctly.
- Respect the 42 Norm and memory management rules.

---

## Instructions

### Compilation

To compile the project:

```bash
make

make        # Compile push_swap
make clean  # Remove object files
make fclean # Remove object files and executable
make re     # Recompile everything

```

### Usage

Run the program with a list of integers:

```bash
./push_swap 3 2 5 1 4
```

The program will output a list of operations such as:

```bash
pb
ra
sa
pa
```
To test the result using the checker:

```bash
ARG="3 2 5 1 4"; ./push_swap $ARG | ./checker $ARG
```

### Error Handling

The program handles:

- Non-numeric arguments

- Duplicate numbers

- Integer overflow

- Empty input

### Algorithm – Turk Algorithm Strategy

The Turk Algorithm works as follows:

- Push all elements except three to stack B.

- Sort the remaining three elements in stack A.

- For each element in stack B:

	- Calculate the cost of moving it to the correct position in stack A.

	- Determine the cheapest move.

	- Execute combined rotations when possible (rr / rrr) to minimize operations.

- Push elements back to stack A in sorted order.

- Rotate stack A to place the smallest number at the top.

This approach ensures an efficient number of operations, especially for 100 and 500 number test cases.

## Features

**Cost-based move calculation**  
Each element in stack B is evaluated by calculating the number of operations required to move it to its correct position in stack A. The algorithm always selects the element with the lowest total cost.

**Combined rotations optimization**  
When both stacks require rotation in the same direction, the program uses combined operations (`rr` or `rrr`) to reduce the total number of instructions.

**Linked list stack implementation**  
Both stacks are implemented using linked lists, allowing dynamic memory allocation and flexible element manipulation.

**Full error management**  
The program validates all inputs, including non-numeric arguments, duplicate values, integer overflow, and empty input cases. If an error is detected, it prints `Error`.

**Memory leak free**  
All allocated memory is properly freed before program termination, ensuring no memory leaks.

---

## Technical Choices

**Use of linked lists**  
Linked lists were chosen to simplify stack operations such as push, rotate, and reverse rotate, without needing to shift large blocks of memory.

**Custom cost and targeting functions**  
Dedicated functions were created to calculate movement costs and determine the correct target position of each element.

**Modular architecture**  
The project is divided into separate components: parsing, stack operations, cost calculation, and algorithm logic. This improves readability and maintainability.

**Compliance with 42 Norm**  
The code follows the 42 coding standard, including function size limits, formatting rules, and proper memory management.

---

## Resources

### Documentation & References

- 42 push_swap subject PDF  
- Documentation on stack data structures  
- Sorting algorithm theory (especially insertion-based strategies)  
- Big-O time complexity documentation  

---

## AI Usage Disclosure

I used AI mainly for:
- Understanding optimization concepts related to the Turk Algorithm  
- Clarifying theoretical aspects of cost calculation  
- Improving documentation and README structure  
- Explaining debugging concepts  

