*This project has been created as part of the 42 curriculum by <login>.*

# get_next_line

## Description

The **get_next_line** project aims to implement a C function capable of reading a file descriptor line by line.  
Each call to the function returns the next line from the given file descriptor, including the newline character (`\n`) when present.

The goal of this project is to deepen the understanding of:
- low-level file I/O using `open`, `read`, and `close`
- memory management in C
- static variables
- string manipulation
- handling partial reads and buffering

This project follows POSIX standards and is designed to work efficiently with varying buffer sizes.

---

## Instructions

### Compilation

This project does not produce an executable by itself.  
It provides a function to be compiled and linked with your own programs.

Example compilation:

```bash
cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c main.c
