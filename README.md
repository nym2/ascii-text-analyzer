ascii-text-analyzer/
│
├── README.md
├── Makefile
├── src/
│   ├── main.c
│   ├── analyzer.c
│   └── analyzer.h
│
├── tests/
│   └── test_cases.txt
│
└── .gitignore

$ ./ascii_analyzer "Hello, World! 123"

ASCII Text Analyzer
-------------------

Original text: Hello, World! 123

Characters:       17
Letters:          10
Digits:           3
Spaces:           2
Special chars:    2

Uppercase:        2
Lowercase:        8

Most frequent character: 'l'
Frequency:                3

ASCII values:
H = 72
e = 101
l = 108
l = 108
o = 111
...


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

main.c
Handles:
    - input
    - output
    - program flow

analyzer.h
Tells the rest of the program:
    "These are the functions available."

analyzer.c
    Contains the actual implementations.
This is one of the important things you will learn from this project.

