# 📚 Libft - 42 Project

## 💡 About the Project

The **Libft** is the foundational project of the 42 core curriculum. The goal is to build our own static C library by rewriting classic `<libc>` functions from scratch and adding useful tools for string manipulation, memory management, and linked lists. This library will serve as the backbone for almost all future projects in the curriculum.

## 🛠️ Implemented Functions

The project is divided into mandatory parts, a bonus section, and custom extra functions.

### Part 1: Libc Functions
Re-implementations of standard functions from `<ctype.h>`, `<string.h>`, and `<stdlib.h>`.

* **Character Classification & Conversion:**
  `ft_isalpha` | `ft_isdigit` | `ft_isalnum` | `ft_isascii` | `ft_isprint` | `ft_toupper` | `ft_tolower`
* **Memory Manipulation:**
  `ft_memset` | `ft_bzero` | `ft_memcpy` | `ft_memmove` | `ft_memchr` | `ft_memcmp` | `ft_calloc`
* **String Manipulation:**
  `ft_strlen` | `ft_strlcpy` | `ft_strlcat` | `ft_strchr` | `ft_strrchr` | `ft_strncmp` | `ft_strnstr` | `ft_strdup`
* **Conversion:**
  `ft_atoi`

### Part 2: Additional Functions
Useful utility functions that are not part of the standard libc but are essential for data manipulation.

* `ft_substr` - Extracts a substring from a string.
* `ft_strjoin` - Concatenates two strings into a newly allocated string.
* `ft_strtrim` - Removes specified characters from the beginning and end of a string.
* `ft_split` - Splits a string into a 2D array based on a delimiter character.
* `ft_itoa` - Converts an integer to a string.
* `ft_strmapi` - Applies a function to each character of a string, creating a new string.
* `ft_striteri` - Applies a function to each character of a string (modifying it in place).
* `ft_putchar_fd` - Outputs a character to a given file descriptor.
* `ft_putstr_fd` - Outputs a string to a given file descriptor.
* `ft_putendl_fd` - Outputs a string followed by a newline to a given fd.
* `ft_putnbr_fd` - Outputs an integer to a given file descriptor.

### Bonus Part: Linked Lists
Dynamic data structures using the `t_list` struct.

* `ft_lstnew` | `ft_lstadd_front` | `ft_lstsize` | `ft_lstlast` | `ft_lstadd_back` | `ft_lstdelone` | `ft_lstclear` | `ft_lstiter` | `ft_lstmap`

### ⚡ Extra Added Functions
Custom functions added to facilitate future projects.
* `ft_islower` | `ft_strcmp` | `ft_strcpy`

---

## 🚀 How to Compile and Use

This project includes a `Makefile` to automate the compilation process. The library is compiled using `cc` with the strict 42 flags (`-Wall -Wextra -Werror`).

### Instructions

1. **Clone the repository:**

2. **Compile the library:**
   To compile the source files and generate the static library `libft.a`, run:
   ```bash
   make
   ```

3. **Cleaning up:**
   * To remove the generated object (`.o`) files:
     ```bash
     make clean
     ```
   * To remove both object files and the compiled library (`libft.a`):
     ```bash
     make fclean
     ```
   * To fully clean and recompile the library from scratch:
     ```bash
     make re
     ```

### Using Libft in your project

To use the library in your C code, include the header file:

```c
#include "libft.h"
```

When compiling your project, link the library to your files:
```bash
cc your_program.c -L. -lft -o your_program
```
*(Make sure the `libft.a` file is in the same directory, or provide the correct path using the `-L` flag).*

---

## 🤖 AI Usage Disclosure

During the development of this project, Artificial Intelligence (Large Language Models) was utilized as an **educational tutor and conceptual guide**. 

**How AI was used:**
* To break down and explain complex C programming concepts (e.g., pointer arithmetic, memory allocation, and the differences between `memcpy` and `memmove`).
* To clarify the expected behaviors described in the official UNIX `man` pages.
* To provide step-by-step logic reviews to ensure a deep understanding of *why* certain algorithms are structured the way they are, rather than just *how* to write them.

**How AI was NOT used:**
* No code was blindly copy-pasted. Every line of code in this repository was written, reviewed and tested.

## 📚 References

* **UNIX Programmer's Manual:** The official `man` pages (`man 3 isalpha`, `man 3 malloc`....).

---
JordanWS
