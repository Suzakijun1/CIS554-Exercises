## Title: Exercise 7_1 – Exception handling

## Objective: Allow the student to explore creating and using their own exceptions

## Statement of Problem:

You will update/extend Figures 17.1 and 17.2 of the online content, as
follows. Based upon Figure 17.1 in the online content, create a new exception called
NumberTooLargeException, with text “number is too large”. This exception should be
defined in its own header file (e.g. NumberTooLargeException.h). Based upon Figure 17.2, add a
new function called multiplication. This new function will throw a
NumberTooLargeException exception if the result of the multiplication is > 1,000,000.
Finally, update the program (i.e. main) in Figure 17.2 of the online content to test that your
NumberTooLargeException exception is working, in the same fashion that the
program tests the DivideByZeroException exception now.
Upload your program, and a screenshot of the program output. The program will contain 3 files,
as follows:

1. DivideByZeroException.h (as shown in Figure 17.1)
2. NumberTooLargeException.h (new)
3. Fig17_02.cpp (modified with a test for your new NumberTooLargeException
   exception.)
