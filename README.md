# libft42

 C programming can be very tedious when one doesn’t have access to the highly useful
standard functions. This project is about understanding the way these functions work, implementing and learning to use them. I created my own library by already existing or new function. This library includes a wide range of functions, from basic ones like string manipulations and memory management to more advanced ones for list handling and mathematical operations. The goal of libft42 is to provide a solid foundation for programming in C, offering a set of utility functions that can be used in various projects. Each function is carefully crafted, adhering to the 42 coding standards, and serves as a valuable resource for enhancing programming skills


<h3>Functions from ctype.h </h3>
    <pre>
    ft_isalpha - checks for an alphabetic character.
    ft_isdigit - checks for a digit (0 through 9).
    ft_isalnum - checks for an alphanumeric character.
    ft_isascii - checks whether c fits into the ASCII character set.
    ft_isprint - checks for any printable character.
    ft_toupper - convert char to uppercase.
    ft_tolower - convert char to lowercase.</pre>
<h3>Functions from string.h</h3>
<pre>
    ft_memset - fill memory with a constant byte.
    ft_strlen - calculate the length of a string.
    ft_bzero - zero a byte string.
    ft_memcpy - copy memory area.
    ft_memmove - copy memory area.
    ft_strlcpy - copy string to an specific size.
    ft_strlcat - concatenate string to an specific size.
    ft_strchr - locate character in string.
    ft_strrchr - locate character in string.
    ft_strncmp - compare two strings.
    ft_memchr - scan memory for a character.
    ft_memcmp - compare memory areas.
    ft_strnstr - locate a substring in a string.
    ft_strdup - creates a dupplicate for the string passed as parameter.</pre>
<h3>Functions from stdlib.h</h3>
<pre>
    ft_atoi - convert a string to an integer.
    ft_calloc - allocates memory and sets its bytes' values to 0.</pre>
<h3>Non-standard functions</h3>
<pre>
    ft_substr - returns a substring from a string.
    ft_strjoin - concatenates two strings.
    ft_strtrim - trims the beginning and end of string with specific set of chars.
    ft_split - splits a string using a char as parameter.
    ft_itoa - converts a number into a string.
    ft_strmapi - applies a function to each character of a string.
    ft_striteri - applies a function to each character of a string.
    ft_putchar_fd - output a char to a file descriptor.
    ft_putstr_fd - output a string to a file descriptor.
    ft_putendl_fd - output a string to a file descriptor, followed by a new line.
    ft_putnbr_fd - output a number to a file descriptor.</pre>
<h3>Linked list functions</h3>
<pre>
    ft_lstnew - creates a new list element.
    ft_lstadd_front - adds an element at the beginning of a list.
    ft_lstsize - counts the number of elements in a list.
    ft_lstlast - returns the last element of the list.
    ft_lstadd_back - adds an element at the end of a list.
    ft_lstclear - deletes and free list.
    ft_lstiter - applies a function to each element of a list.
    ft_lstmap - applies a function to each element of a list.</pre>

...
