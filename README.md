# Spell-Check ![C++](https://img.shields.io/badge/-C++-00599C?style=flat-square&logo=cplusplus&logoColor=white)

This exercise (Ex 15) was taken from the Systems Programming course (Autumn 2022) at Università della Svizzera Italiana (USI).
The program reads an input text file and a dictionary file and must output a list of words that are found in the input text but not in the dictionary. 
Words are contiguous sequences of alphabetic characters possibly also containing the apostrophe character (’). So for example, “would’ve” and “mama’s” should be considered as valid words.


## Project Purpose 🎯
This program is used to check if any words in the given file are misspelled in order to than correct them, giving also the ability to enter your personal dictionary useful for words that might be correct but not inside the device;s dictionary.

## Important Features ✨
The program may take any combination of the following command-line parameters:
* in=filename instructs the program to read its input from the given file. If this option is not used, then the program must read from the standard input.
* out=filename instructs the write its output to the given file. If this option is not used, then the program must write to the standard output.
* dict=filename instructs the program to read the dictionary from the given file. If this option is not used, then the program must read the dictionary from file /usr/share/dict/words.

The dictionary file contains exactly one word per line, and is sorted in lexicographical order. The program must be efficient in terms of execution time, as well as in memory usage. It must also correctly deallocate all the memory it allocates, close all the files it opens, and correctly deal with all error conditions. 


## Requirements 📋
No special requirement is needed to run this program, of course remember to have a C++ compiler installed.


## Usage 🛠️
You can simply run the program from your device command line, using the following commands:
```bash
# To create the executable
g++ -g main.cpp -o main

# To run the executable
./main in=filename out=filename dict=filename
```
Please note that:
- in=filename, out=filename, and dict=filename are optional, as explained in the "Important Features" section.
- you need to change "filename" with the correct path to such file.


## License 📄
[MIT License](LICENSE)



## Credits 💳
A special thanks to Professor Antonio Carzaniga of the Systems Programming course for this beautiful exercise.


