# ASCII Text Analyzer

A command-line text analysis tool written in C that analyzes text using ASCII character classification, frequency analysis, sorting algorithms, and dynamic memory allocation.

The project started as a practical exercise for reviewing C fundamentals and the ASCII table. It is being developed into a modular C application that demonstrates core programming and data structures and algorithms concepts.

## Overview

ASCII Text Analyzer accepts text from the user and analyzes its characters.

The program provides information about:

- Total number of characters
- Letters
- Digits
- Spaces
- Special characters
- Uppercase letters
- Lowercase letters
- Character frequencies
- Most frequent characters
- ASCII values for individual characters

The project also demonstrates dynamic memory allocation, modular programming, compiler warnings, testing, Make, and Git.

## Example

```text
ASCII Text Analyzer
-------------------

Input the text you want to analyze: Hello World 123!

Original text: Hello World 123!

Characters:                 16
Letters:                    10
Digits:                     3
Spaces:                     2
Special chars:              1

Uppercase:                  2
Lowercase:                  8

Most frequent character:    'l'
Frequency:                  3

ASCII values:
H = 72
e = 101
l = 108
l = 108
o = 111
  = 32
W = 87
o = 111
r = 114
l = 108
d = 100
  = 32
1 = 49
2 = 50
3 = 51
! = 33
```

## Features

### Text Analysis

The analyzer identifies and counts:

- Total characters
- Alphabetic characters
- Numeric characters
- Spaces
- Special characters
- Uppercase characters
- Lowercase characters

### ASCII Analysis

The program displays the ASCII value of each character in the input.

For example:

```text
A = 65
B = 66
a = 97
0 = 48
! = 33
```

### Character Frequency Analysis

The program builds a frequency table using an array indexed by ASCII values.

For example, given:

```text
BANANA
```

the frequency table contains:

```text
A = 3
N = 2
B = 1
```

### Most Frequent Character

The program searches the frequency table and identifies the character or characters with the highest frequency.

If multiple characters have the same highest frequency, they are reported.

### Dynamic Memory Allocation

The input buffer is allocated dynamically rather than using a fixed-size character array.

The program uses:

```c
malloc()
realloc()
free()
```

The input buffer grows when additional memory is required.

This allows the program to process text longer than a predefined fixed buffer.

### Sorting

A planned extension of the project is to sort characters according to their frequency.

The sorting implementation will use an algorithm implemented manually rather than relying on a library sorting function.

The initial implementation will focus on selection sort.

Example:

```text
Character    Frequency
----------------------
l            3
o            2
H            1
e            1
```

## Technologies

- C
- C11
- GCC
- Make
- Git
- GitHub

## C Concepts Practiced

This project is designed to reinforce practical C programming concepts.

### Variables and Data Types

- `char`
- `int`
- `size_t`
- Pointers

### Strings

- Null-terminated strings
- Character iteration
- String length
- Input handling

### Functions

The project separates functionality into reusable functions instead of placing all logic inside `main()`.

### Arrays

Arrays are used for:

- Character processing
- ASCII frequency tables
- Frequency analysis

### Pointers

Pointers are used for:

- Dynamically allocated strings
- Passing strings to functions
- Managing dynamically allocated memory

### Dynamic Memory

The project demonstrates:

```c
malloc()
realloc()
free()
```

and includes checks for failed memory allocation.

### Character Classification

The project uses functions from `<ctype.h>`, including:

```c
isalpha()
isdigit()
isupper()
islower()
```

The project also uses ASCII ranges and ASCII values as part of its analysis.

### Frequency Tables

An array indexed by ASCII value is used to count character occurrences.

Conceptually:

```text
frequency[65]
```

represents:

```text
'A'
```

while:

```text
frequency[97]
```

represents:

```text
'a'
```

This demonstrates a common data structures and algorithms technique for frequency counting.

### Searching

The project searches the frequency table to identify the highest character frequency.

### Sorting

The planned sorting component will introduce a manual sorting algorithm, beginning with selection sort.

## Project Structure

```text
ascii-text-analyzer/
│
├── README.md
├── Makefile
├── .gitignore
│
├── src/
│   ├── main.c
│   ├── analyzer.c
│   └── analyzer.h
│
├── tests/
│   └── test_cases.txt
│
└── build/
```

### `src/main.c`

Contains the program entry point and handles:

- User interaction
- Input
- Program flow
- Displaying analysis results
- Memory cleanup

### `src/analyzer.c`

Contains the implementation of the text analysis functions.

### `src/analyzer.h`

Contains function declarations and the public interface for the analyzer module.

### `tests/test_cases.txt`

Contains manual test cases and expected results used during development.

### `Makefile`

Provides commands for compiling, running, and cleaning the project.

### `build/`

Contains compiled program files.

This directory is excluded from Git through `.gitignore`.

## Building the Project

### Requirements

You need:

- GCC
- Make
- Git

A C11-compatible compiler is recommended.

### Compile

From the project root:

```bash
make
```

The compiled executable will be placed inside:

```text
build/ascii_analyzer
```

### Run

```bash
make run
```

Or run the executable directly:

```bash
./build/ascii_analyzer
```

### Clean

To remove compiled files:

```bash
make clean
```

## Compiler Configuration

The project is compiled with strict compiler warnings:

```text
-Wall
-Wextra
-Werror
-std=c11
```

These options help identify potential problems during development.

`-Wall` enables common compiler warnings.

`-Wextra` enables additional warnings.

`-Werror` treats compiler warnings as errors.

`-std=c11` compiles the project according to the C11 standard.

The goal is to keep the project warning-free during development.

## Testing

Testing is performed using predefined test cases stored in:

```text
tests/test_cases.txt
```

Example test cases include:

### Test 1

Input:

```text
Hello World
```

Expected:

```text
Characters: 11
Letters: 10
Spaces: 1
Digits: 0
Special chars: 0
Uppercase: 2
Lowercase: 8
```

### Test 2

Input:

```text
Hello123
```

Expected:

```text
Characters: 8
Letters: 5
Digits: 3
```

### Test 3

Input:

```text
ABCabc123!
```

Expected:

```text
Characters: 10
Letters: 6
Digits: 3
Special chars: 1
Uppercase: 3
Lowercase: 3
```

### Test 4

Input:

```text
!!!
```

Expected:

```text
Special chars: 3
```

Future versions will include automated tests rather than relying exclusively on manual verification.

## Memory Safety

Because the project uses dynamic memory allocation, memory management is treated as an important part of development.

Allocated memory is released using:

```c
free()
```

The project also checks whether memory allocation succeeds.

Future development will include testing with compiler sanitizers such as:

```bash
-fsanitize=address
-fsanitize=undefined
```

These tools will help identify memory-related errors and undefined behavior.

## Data Structures and Algorithms

The project uses several fundamental DSA techniques.

### Frequency Table

Character frequencies are stored in an array indexed by ASCII value.

This provides direct access to the frequency of a character.

### Linear Search

The frequency table is traversed to identify the maximum frequency.

### Sorting

A future version will sort characters by frequency using a manually implemented sorting algorithm.

The first implementation will use selection sort.

Future versions may compare different sorting approaches and their time complexity.

## Time Complexity

The current character analysis functions process the input string once.

For an input of length `n`, most individual analysis operations have:

```text
Time Complexity: O(n)
```

The ASCII frequency table has a fixed size, so searching through all 256 possible values has:

```text
Time Complexity: O(256)
```

which is effectively constant with respect to the input length.

The planned frequency sorting operation will introduce additional algorithmic complexity, depending on the chosen sorting algorithm.

## Design Decisions

### Why 256 frequency entries?

The initial implementation uses:

```c
size_t frequency[256];
```

This provides an entry for every possible value represented by an unsigned 8-bit character.

It also makes the relationship between the character and its numeric value easy to understand.

For example:

```text
frequency[65] → A
frequency[66] → B
frequency[97] → a
```

### Why dynamic memory?

A fixed-size input buffer limits the amount of text the program can process.

Dynamic allocation allows the input buffer to grow as the user enters more text.

The program begins with an initial capacity and uses `realloc()` when more space is required.

### Why separate `.h` and `.c` files?

Separating declarations from implementations makes the project easier to maintain and demonstrates modular C programming.

The header provides the interface.

The source file provides the implementation.

The main program uses the interface without needing to contain the analysis logic itself.

## Development Roadmap

The project is being developed incrementally.

### Completed

- [x] Basic text input
- [x] Character counting
- [x] Letter counting
- [x] Digit counting
- [x] Space counting
- [x] Special character counting
- [x] Uppercase counting
- [x] Lowercase counting
- [x] ASCII value display
- [x] Character frequency counting
- [x] Most frequent character detection
- [x] Modular source structure
- [x] Dynamic input allocation
- [x] Makefile
- [x] Compiler warning configuration
- [x] Basic test cases

### Planned

- [ ] Sort characters by frequency
- [ ] Implement selection sort
- [ ] Add automated tests
- [ ] Add memory sanitizer testing
- [ ] Improve handling of whitespace characters
- [ ] Add ASCII category analysis
- [ ] Add clearer handling of empty input
- [ ] Add command-line arguments
- [ ] Add configurable analysis options
- [ ] Improve output formatting
- [ ] Document algorithm complexity
- [ ] Add additional edge-case tests

## Possible Future Features

The project provides a foundation for additional C and DSA practice.

Possible future improvements include:

- Command-line arguments
- Reading text from a file
- Writing analysis results to a file
- Sorting by character
- Sorting by frequency
- Case-insensitive frequency analysis
- Word frequency analysis
- Character histogram output
- Automated unit testing
- Benchmarking different algorithms
- Support for larger character sets

These features will be added only after the existing implementation is understood and tested.

## Git Development History

The project is developed through small, focused commits rather than one large final commit.

Example commit history:

```text
Initial project structure
Add analyzer header and function declarations
Move text analysis functions into analyzer module
Improve character frequency analysis
Add ASCII value analysis
Add dynamic input allocation
Add Makefile build system
Add test cases
Add memory safety checks
Add frequency sorting
Add project documentation
```

This approach keeps the development history understandable and makes individual changes easier to review.

## Learning Objectives

The main purpose of this project is to strengthen practical C programming and DSA fundamentals.

By completing the project, I am practicing:

- Writing modular C programs
- Working with strings
- Using arrays
- Working with pointers
- Managing dynamic memory
- Understanding ASCII values
- Building frequency tables
- Searching data
- Implementing sorting algorithms
- Handling user input
- Writing reusable functions
- Separating interfaces from implementations
- Using Make
- Using Git
- Testing software
- Investigating memory errors
- Understanding algorithm complexity

## Lessons Learned

This project is part of my continued study of C programming and data structures and algorithms.

The project began as an exercise in reviewing the ASCII table and developed into a larger application for practicing:

```text
C Programming
      ↓
Strings
      ↓
Arrays
      ↓
ASCII
      ↓
Frequency Tables
      ↓
Searching
      ↓
Sorting
      ↓
Pointers
      ↓
Dynamic Memory
      ↓
Modular Programming
      ↓
Testing
      ↓
Build Systems
      ↓
Git
```

The goal is not only to produce a working program, but to understand the programming concepts behind each component.

## Author

Nympha Pamba

Software Engineering student focused on building stronger foundations in C, software engineering, data structures and algorithms, and backend development.

## License

This project is available for educational and portfolio purposes.