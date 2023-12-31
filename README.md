# Spell-Check

## Università della Svizzera italiana (USI) | Exercise 15 | Systems Programming Autumn 2022

Write a spell-checking program called spellcheck. The program reads an input text file and a dictionary file, and must output a list of words that are found in the input text but not in the dictionary. Words are contiguous sequences of alphabetic characters possibly
also containing the apostrophe character (’). So for example, “would’ve” and “mama’s” should be considered as valid words. You may assume that a word in the input text is never longer than 50 characters.

The program may take any combination of the following command-line parameters:
* in=filename instructs the program to read its input from the given file. If this option is not used, then the program must read from the standard input.
* out=filename instructs the write its output to the given file. If this option is not used, then
the program must write to the standard output.
* dict=filename instructs the program to read the dictionary from the given file. If this option is not used, then the program must read the dictionary from file /usr/share/dict/words.

The dictionary file contains exactly one word per line, and is sorted in lexicographical order. The program must be efficient in terms of execution time, as well as in memory usage. It must also correctly deallocate all the memory it allocates, close all the files it opens, and correctly deal with all error conditions. 

Design hints: read the whole dictionary directly into memory and use a simple linear index (an array) for the words. Since the input file is already sorted, this would allow a simple and efficient binary search for the dictionary search.

## License
[MIT License](LICENSE)
