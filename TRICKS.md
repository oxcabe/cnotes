# C Programming Tips and Tricks

In this file you may find some tricks I've learned in books, doing exercises and, most importantly, programming in C:

## The tips
* *ifndef block as a comment:* Aside from using `//` and `/* */` for defining commentaries in code files, you can also wrap the target code to comment with and `#ifndef 0` `#endif` block.

## The tricks
* *char to int digit conversion:* Substracting '0' to a char digit representation will result in a char\_representation-to-int conversion. `'3' - '0'` will return `3`.
