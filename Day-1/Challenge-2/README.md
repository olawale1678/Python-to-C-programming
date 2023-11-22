
# Project Title: String Manipulation


The provided code is a C program that allows the user to enter two strings, swaps the contents of the two strings, and then displays the updated strings. It consists of two main components: the switchValue() function and the main() function.

The switchValue() function takes two character pointers as arguments, representing the addresses of the two strings to be swapped. It creates a temporary character array to store the contents of the first string. Then, it copies the contents of the second string to the first string and the contents of the temporary array to the second string. This effectively swaps the contents of the two strings.

The main() function is the entry point of the program. It prompts the user to enter two strings using the printf() function and scans the input using the scanf() function. It then calls the switchValue() function, passing the addresses of the two strings as arguments. This swaps the contents of the two strings. Finally, it prints the updated strings to the terminal.
