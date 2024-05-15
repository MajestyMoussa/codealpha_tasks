BASIC FILE ENCRYPTION/DECRYPTION
Design a program that can encrypt anddecrypt text files. You can use simplealgorithms like Caesar cipher for this project.
The Caesar Cipher is a monoalphabetic rotation cipher used by Gaius Julius Caesar. Caesar rotated each letter of the plaintext forward three times to encrypt, so that A became D, B became E, etc.
“ATTACK AT DAWN” encrypts to “DWWDFN DW GDZQ” using the Caesar Cipher. Note that rotating three letters is arbitrary; any number of letters (other than 26, assuming an English alphabet) may be rotated for the same effect.
The Shift Cipher
Also known as the Caesar cipher, the shift cipher is one that anyone can readily understand and remember for decoding. It is a form of the substitution cipher. By shifting the alphabet a few positions in either direction, a simple sentence can become unreadable to casual inspection.


TO-DO LIST APPLICATION
Build a console-based to-do list application.Users should be able to add tasks, mark them ascompleted, and view their current tasks.
Definition: A to-do list is a list of items that need to be completed. The items on the list can range from simple activities like replying to an email, to more complex tasks like creating project briefs.
A task is an object with an associated program and thread of control.
thread control :-
In a process, a thread refers to a single sequential activity being executed. these activities are also known as thread of execution or thread control. Now, any operating system process can execute a thread. we can say, that a process can have multiple threads.

SIMPLE DRAWING PROGRAM
C++ For Loop
When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:
Syntax
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}

Statement 1 is executed (one time) before the execution of the code block.
Statement 2 defines the condition for executing the code block.
Statement 3 is executed (every time) after the code block has been executed.
The example below will print the numbers 0 to 4:
Example
for (int i = 0; i < 5; i++) {
  cout << i << "\n";
}

Try it Yourself »
Example explained
Statement 1 sets a variable before the loop starts (int i = 0).
Statement 2 defines the condition for the loop to run (i must be less than 5). If the condition is true, the loop will start over again, if it is false, the loop will end.
Statement 3 increases a value (i++) each time the code block in the loop has been executed.
________________________________________
Another Example
This example will only print even values between 0 and 10:
Example
for (int i = 0; i <= 10; i = i + 2) {
  cout << i << "\n";
}

Try it Yourself »
________________________________________
Nested Loops
It is also possible to place a loop inside another loop. This is called a nested loop.
The "inner loop" will be executed one time for each iteration of the "outer loop":
Example
// Outer loop
for (int i = 1; i <= 2; ++i) {
  cout << "Outer: " << i << "\n"; // Executes 2 times

  // Inner loop
  for (int j = 1; j <= 3; ++j) {
    cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
  }
}

Try it Yourself »
________________________________________
The foreach Loop
There is also a "for-each loop" (introduced in C++ version 11 (2011), which is used exclusively to loop through elements in an array (or other data sets):
Syntax
for (type variableName : arrayName) {
  // code block to be executed
}

The following example outputs all elements in an array, using a "for-each loop":
Example
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}

Try it Yourself »
Note: Don't worry if you don't understand the example above. You will learn more about arrays in the C++ Arrays chapter.
________________________________________
C++ Exercises
Test Yourself With Exercises
Exercise:
Use a for loop to print "Yes" 5 times:
 (int i = 0; i < 5; ) {
  cout <<  << "\n";
}




