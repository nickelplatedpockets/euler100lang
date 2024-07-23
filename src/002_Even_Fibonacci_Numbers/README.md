# Even Fibonacci Numbers

To get started please see the [challenge page](https://projecteuler.net/problem=2)

<details>
<summary>Solution</summary> 
The fib. sequence is defined as a sequence of numbers where the value of number n is the sum of its previous two neighbours in the sequence (n = (n-1) + (n-2)), the sequence also scales up by the "golden ratio" (~1.61803399) represented in notation as phi, where each value is n = (n-1 * phi), e.g. 0, 1, 1, 2, 3, 5, ... (5 * 1.61803399 = 8.09016995 => 8). 

If you map out each number in the first 20 places of the sequence:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181
You notice something interesting about the distribution of odd and even numbers
   O  O  E  O  O  E  O   O   E   O   O   E    O    O    E    O     O    E     O

   Every third number in the sequence is even. This means that you can iterate
   over the even numbers by multiplying an even value in the sequence by phi^3,
   e.g. fib(10) = fib(7) * (phi^3) = 8 * 4.346067987 = 33.8885 => 34.

   The solution requires that we produce the sum of all even fibonacci numbers 
   up to a maximum limit of 4,000,000 (4e+6), the last value in the sequence 
   before this limit is fib(34) = 3,524,578. So we need to iterate over all 
   even fibonacci numbers from fib(4) = 2 to fib(34) = 3,524,578 and sum them.:wq
</details>

# Code
The rockstar code can be run via [the rockstar site](https://codewithrockstar.com/online). It loops until the variable `Robbie` is greater than fib(34). Each loop it multiplies `Robbie` by phi^3 and adds this value, after rounding, to an accumulator `Timmy`. 
