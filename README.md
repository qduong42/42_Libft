# Libft - @42Wolfsburg

Your very first own Library

## About

Libft is the very first project at 42.
We learn basic conditional thinking with loops, if conditions, about different data types: size_t, int, char array and dynamic memory allocation.
The main goal is not only to have a good understanding of Basic building blocks of the C programmming language specifically but also in general.

## Installation & Usage

### Requirements
The only requirements are:
- GNU make (v3.81)
- GCC (12.0.0) (clang-1200.0.32.28)

Those versions are the ones used during development.

### Building the program

1. Download/Clone this repo

        git clone https://github.com/qduong42/42_Libft
2. `cd` into the root directory and run `make`

        cd 42_Libft
        make

### Running the program

After running make, the libft.a library with all functions contained can be used.

## Main Project Instructions

### Mandatory

- Only use C
- Must respect the 42 imposed coding style The Norminator
- No memory leaks
- Implement these standard libc functions:
    - "isX" family functions: alpha, digit, alnum, ascii, print
    - string manipulation: strlcpy, strlcat, strncmp, strnstr
    - string utility: strlen, strdup, strchr, strrchr
    - Memory functions: memset, bzero, memcpy, memmove, memchr, memcmp
    - atoi
    - calloc
    - strdup
- Additional functions (not in the man or in a different form)
    - ft_substr : Creating a substring from a given string
    - ft_strjoin: Joining two strings together.
    - ft_strtrim: Trim a string of set characters.
    - ft_split  : Split a string according to a given delimiter
    - ft_itoa   : Convert an integer into a string.
    - ft_strmapi: Applying external function to a string. creates new string
    - ft_iteri  : Same as strmapi but modifies existing string.
    - ft_putchar_fd: Puts one character into given fd stream.
    - ft_putstr_fd : Puts a string into given fd stream.
    - ft_putendl_fd: Like putstr but adds \n at end
    - ft_putnbr_fd: Writes a number given as a string in given fd stream.
- Must have a Makefile to build the program
- The library must be called libft.a
- Must have a header file libft.h

### Bonuses

- Linked List functions:
    - ft_lstnew : Creates new node and assigns it a content.
    - ft_lstadd_front: Adds node to front of list
    - ft_lstadd_back : Adds node to back of list.
    - ft_lstlast     : Returns the last node of ths list.
    - ft_lstsize     : Returns number of nodes in list.
    - ft_lstdelone   : Frees the node and deletes content with external function.
    - ft_lstclear    : Deletes and frees the node and successor, clears whole list.
    - ft_lstiter     : Iterates through list and applies function f.
    - ft_lstmap      : like lstiter but creates new list with only successful applications.
    
## Notes

- Some functions are commented for ease of understanding
- There are probably better ways to implement it, we are limited by a set of functions at 42. (Limitation ensures that we have a deeper understanding of what is going on behind the hood), please review the project instructions before you explain how `X` or `Y` would have been a better way to do it ;)


Enjoy!

