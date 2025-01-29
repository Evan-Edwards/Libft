# libft

## Description
This project involves creating a personal C library containing a collection of commonly used functions. The libft library serves as a fundamental building block for future C programming projects at 42, implementing both standard C library functions and additional utility functions.

## Installation
Clone the repository and compile the library:

```bash
git clone https://github.com/yourusername/libft.git
cd libft
make
```

This will create the `libft.a` static library.

## Usage
To use this library in your project:

1. Include the header in your C files:
```c
#include "libft.h"
```

2. Compile your project with the library:
```bash
gcc your_file.c -L. -lft
```

## Functions

### Character Type Functions
- `ft_isalpha` - Check for alphabetic character
- `ft_isdigit` - Check for digit
- `ft_isalnum` - Check for alphanumeric character
- `ft_isascii` - Check if character is ASCII
- `ft_isprint` - Check if character is printable
- `ft_isspace` - Check if character is whitespace
- `ft_toupper` - Convert character to uppercase
- `ft_tolower` - Convert character to lowercase

### String Functions
- `ft_strlen` - Calculate string length
- `ft_strdup` - Duplicate a string
- `ft_strchr` - Locate first occurrence of character in string
- `ft_strrchr` - Locate last occurrence of character in string
- `ft_strncmp` - Compare two strings up to n bytes
- `ft_strcmp` - Compare two strings
- `ft_strnstr` - Locate substring in string with length limit
- `ft_strlcpy` - Copy string with size limitation
- `ft_strlcat` - Concatenate strings with size limitation
- `ft_strjoin` - Concatenate two strings into new string
- `ft_strtrim` - Trim characters from string
- `ft_substr` - Extract substring from string
- `ft_split` - Split string into array using delimiter
- `ft_strmapi` - Apply function to each character in string
- `ft_striteri` - Apply function to each character with index

### Memory Functions
- `ft_memset` - Fill memory with a constant byte
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area with overlap handling
- `ft_memchr` - Scan memory for a character
- `ft_memcmp` - Compare memory areas
- `ft_bzero` - Zero a byte string
- `ft_calloc` - Allocate and zero memory

### Output Functions
- `ft_putchar_fd` - Output character to file descriptor
- `ft_putstr_fd` - Output string to file descriptor
- `ft_putendl_fd` - Output string with newline to file descriptor
- `ft_putnbr_fd` - Output number to file descriptor

### Conversion Functions
- `ft_atoi` - Convert string to integer
- `ft_itoa` - Convert integer to string

### List Functions
- `ft_lstnew` - Create new list node
- `ft_lstadd_front` - Add node at beginning of list
- `ft_lstadd_back` - Add node at end of list
- `ft_lstsize` - Count elements in list
- `ft_lstlast` - Get last element of list
- `ft_lstdelone` - Delete single node
- `ft_lstclear` - Delete list and its contents
- `ft_lstiter` - Apply function to each node
- `ft_lstmap` - Create new list by applying function

### Additional Functions
- `get_next_line` - Read line from file descriptor
- `ft_printf` - Format and print data

---
Created as part of the 42 curriculum.