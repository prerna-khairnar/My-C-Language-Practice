# C Programming Practice

A collection of standalone C programs for practicing programming fundamentals, language features, data structures, and course assignments. Programs are grouped by topic; compile and run each source file separately.

## Topics

| Folder | Contents |
| --- | --- |
| `basic/` | Introductory programs and basic syntax |
| `condition_statement/` | Conditional logic and `switch` examples |
| `loops/` | Loops, number exercises, and patterns |
| `function/`, `reccurssion/` | Functions and recursive solutions |
| `array/`, `2d array/` | Array operations and matrix exercises |
| `string/` | String operations |
| `pointer/` | Pointers, pointer types, and related examples |
| `malloc/` | Dynamic memory allocation |
| `structure/`, `structure padding/` | Structures, unions, and memory layout |
| `enum/`, `typedef/`, `storage class/`, `macros/` | Core C language features |
| `file handling/` | File input and output |
| `practice/` | Additional practice programs |
| `assignment/`, `assignment 2/`, `assigment 3/` | Numbered assignment exercises |

Folder names are kept as they exist in the source collection.

## Compile and run

With GCC, compile one source file at a time:

```sh
gcc "practice/1to100.c" -o practice/1to100
```

Run the executable from a Unix-like shell:

```sh
./practice/1to100
```

On Windows, run `practice\\1to100.exe` from PowerShell or Command Prompt after compiling with `gcc "practice/1to100.c" -o practice/1to100.exe`.

Some examples may prompt for input or expect a particular working directory. Compiled executables are excluded from version control.
