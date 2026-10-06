*This project has been created as part of the 42 curriculum*

# Libft

## Description

Libft is the first project of the 42 curriculum: a personal C library that re-implements a set of standard `libc` functions and adds extra utility functions, including a small linked-list toolkit. It is meant to be reused in later 42 projects.

The library is compiled into a static archive, `libft.a`.

## Contents

### Part 1: `libc` re-implementations

| Category | Functions |
|---|---|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

### Part 2: additional functions

| Function | Purpose |
|---|---|
| `ft_substr` | Extract a substring from a string |
| `ft_strjoin` | Concatenate two strings into a new one |
| `ft_strtrim` | Trim a set of characters from both ends of a string |
| `ft_split` | Split a string into an array using a delimiter |
| `ft_itoa` | Convert an integer to a string |
| `ft_strmapi` | Apply a function to each character, returning a new string |
| `ft_striteri` | Apply a function to each character in place |
| `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write to a given file descriptor |

### Bonus: linked lists

Functions operating on a `t_list` node: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

### Extra

`ft_memrchr`: a reverse variant of `ft_memchr`, not required by the subject.

## Instructions

### Build

```bash
make          # builds libft.a
make bonus    # also adds the linked-list functions
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # rebuilds everything
```

## Project structure

```
.
├── Makefile
├── libft.h
├── ft_*.c            # one file per function
└── ft_lst*_bonus.c   # linked-list bonus functions
```

## Resources

- `man` pages for each re-implemented function (e.g. `man 3 strlcpy`)
- [GNU C Library manual](https://www.gnu.org/software/libc/manual/)
