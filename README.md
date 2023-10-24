# Newton-Raphson-Method
With calculators as commonplace as watches, it’s usually easy to find the square root of a particular number, when needed. Before the advent of
the calculator students were taught how to manually find the square root of a number. One such technique is the Newton Raphson method. The Newton Raphson method can be described as follows. You begin with a “guess” at the square root of the number. The closer that guess is to the actual square root the fewer number of calculations that have to be performed to arrive at the square root. The procedure can be expressed in terms of the following algorithm:

Newton Raphson Method to Compute Square Root of x
Step 1: Set the value of guess to 1.
Step 2: If |guess^2-x| < e, proceed to step 4.
Step 3: Set the value of guess to (x/guess+guess) / 2 and return to step 2.
Step 4: The guess is an approximation of the square root.
It is necessary to test the absolute difference of guess^2 and x against e in step 2 because the value of guess can approach the square root of x from either side. The value of e should be arbitrarily set to 0.001.

Write a program that finds an approximation of the square root of a
number to 3 s.f. The output of the program should look like:
Enter a value
32.5
Square root is 5.7
