*This project has been created as part of the 42 curriculum by gatounsi.*

# Libft

## Description

Libft is a foundational project in the 42 curriculum that requires students to reimplement a subset of the standard C library functions. The goal is to deepen understanding of C programming, memory management, string manipulation, and data structures. This library serves as a toolkit for future projects at 42, providing reliable implementations of essential functions without relying on the system's standard library.

The project consists of two parts: mandatory functions covering core C library features, and bonus functions implementing a linked list data structure. All code must comply with the 42 Norm, including line limits and coding style rules.

## Instructions

### Compilation

To compile the library, navigate to the project directory and run:

```bash
make
```

This command generates `libft.a`, a static library archive containing all mandatory functions.

### Cleaning

- To remove object files: `make clean`
- To remove object files and the library: `make fclean`
- To recompile everything: `make re`

### Bonus Compilation

To include bonus functions (linked list operations):

```bash
make bonus
```

### Usage

Include the header file in your C programs:

```c
#include "libft.h"
```

Compile your program by linking the library:

```bash
gcc -Wall -Wextra -Werror -o your_program your_program.c libft.a
```

## Library Description

Libft reimplements functions from `<string.h>`, `<stdlib.h>`, `<unistd.h>`, and `<ctype.h>`, along with additional utilities. It ensures proper memory handling, null-termination, and edge case management.

### Mandatory Functions

#### Character Checks
- `ft_isalnum`: Checks if a character is alphanumeric (a-z, A-Z, 0-9).
- `ft_isalpha`: Checks if a character is alphabetic.
- `ft_isascii`: Checks if a character is within the ASCII range (0-127).
- `ft_isdigit`: Checks if a character is a decimal digit.
- `ft_isprint`: Checks if a character is printable (including space).

#### String Operations
- `ft_strlen`: Returns the length of a string.
- `ft_strchr`: Finds the first occurrence of a character in a string.
- `ft_strrchr`: Finds the last occurrence of a character in a string.
- `ft_strncmp`: Compares two strings up to n characters.
- `ft_strnstr`: Locates a substring within a string, limited to n characters.
- `ft_strlcpy`: Copies a string to a destination with size limit, ensuring null-termination.
- `ft_strlcat`: Concatenates strings with size limit.
- `ft_strdup`: Creates a duplicate of a string using dynamic allocation.
- `ft_substr`: Extracts a substring from a given string.
- `ft_strjoin`: Concatenates two strings into a new one.
- `ft_strtrim`: Removes specified characters from the start and end of a string.
- `ft_split`: Splits a string into an array of substrings based on a delimiter.
- `ft_strmapi`: Applies a function to each character of a string, returning a new string.
- `ft_striteri`: Applies a function to each character of a string with its index.

#### Memory Operations
- `ft_memset`: Fills a memory block with a specified byte value.
- `ft_bzero`: Sets a memory block to zero.
- `ft_memcpy`: Copies memory from source to destination.
- `ft_memmove`: Moves memory, handling overlapping regions.
- `ft_memchr`: Searches for a byte in a memory block.
- `ft_memcmp`: Compares two memory blocks.

#### Conversion and Allocation
- `ft_atoi`: Converts a string to an integer, handling whitespace and signs.
- `ft_itoa`: Converts an integer to a string representation.
- `ft_calloc`: Allocates and initializes memory for an array.

#### Output Functions
- `ft_putchar_fd`: Writes a character to a file descriptor.
- `ft_putstr_fd`: Writes a string to a file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Writes an integer to a file descriptor.



## Resources

### Classic References
- **The C Programming Language** by Brian W. Kernighan and Dennis M. Ritchie: The definitive guide to C programming, covering standard library functions and best practices.
- **C Standard Library Documentation**: Refer to man pages (e.g., `man strlen`, `man malloc`) or online resources like cppreference.com for detailed function specifications.
- **42 Norminette Documentation**: Available on the 42 intranet, detailing coding standards and restrictions.

### AI Usage

I used AI (OpenAI GPT) to help me understand certain concepts, explain how functions work, and fix minor bugs or violations of the Standard (such as respecting the number of lines or handling INT_MIN in ft_itoa). All final code, Makefile changes, and header changes were reviewed and adjusted manually to ensure accuracy and compliance with 42 standards.