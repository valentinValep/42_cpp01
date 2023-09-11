# Exercise 04: Sed is for losers

## Description

Create a program that takes three parameters in the following order: a filename and two strings, s1 and s2. It will open the file `<filename>` and copy its content into a new file `<filename>.replace`, replacing every occurrence of `s1` with `s2`.

Using C file manipulation functions is forbidden and will be considered cheating. All the member functions of the class `std::string` are allowed, except `replace`. Use them wisely!

Of course, make sure to handle unexpected inputs and errors. You have to create and turn in your own tests to ensure your program works as expected.

## Testing

For testing your program, you can use the script `test.sh` and the directory `test_files`.
