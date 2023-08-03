# 0x08-Recursion | C programming Language
## This directory contain recursion project in C programming language
### What is Recursion
<p>
Recursion is a programming technique where a function calls itself repeatedly to solve a problem. The key aspects of recursion are:

- Base Case - There must be a terminating scenario that doesn't call the function again, otherwise it will loop forever.

- Recursive Call - The function calls itself within its own code.

Here is a simple example of a recursive function in JavaScript to calculate factorial:

```
function factorial(n) {
  // Base case
  if (n === 0) {
    return 1; 
  }
  
  // Recursive call
  return n * factorial(n-1);
}

console.log(factorial(5)); // 120
```

How it works:

- 5 * factorial(4) 
- 5 * (4 * factorial(3))
- 5 * (4 * (3 * factorial(2))) 
- 5 * (4 * (3 * (2 * factorial(1))))
- 5 * (4 * (3 * (2 * 1))) = 120

The function calls itself repeatedly with a smaller input (n-1) until it reaches the base case.

Key benefits of recursion are that it can make code more concise and elegant for certain tasks like tree traversal, sorting etc. The main drawback is that too many recursive calls can cause a stack overflow.

Overall, recursion is a very useful technique in programming for solving problems that can be broken down into smaller sub-problems.</p>
## Warning!!!
<p> When using a recursion function always remember to set your Base Case</p>
### In what situations you should implement recursion
<p>
Here are some common situations where recursion is an appropriate and elegant solution:

- **Traversing tree or graph data structures** - Recursive algorithms make it easy to traverse every node/vertex by recursively calling the traversal function on each child node.

- **Divide and conquer algorithms** - Recursive functions can break down complex problems into simpler sub-problems repeatedly until they become trivial to solve. E.g. merge sort, quick sort.

- **Dynamic programming** - Storing results of recursive calls and reusing them instead of recomputing is an optimization known as dynamic programming. E.g. Fibonacci sequence. 

- **Backtracking algorithms** - Recursive backtracking is useful for searching through spaces such as game move trees, maze paths, etc.

- **Mathematical computations** - Factorial, GCD, permutations/combinations of sets use recursion effectively.

- **Advanced data types** - Recursive functions can be used to work with complex recursive data types like JSON or nested objects.

- **Search operations** - Recursive binary search, depth first search and breadth first search rely on recursive calls.

- **String operations** - Palindrome checking, parsing nested expressions, etc can be done recursively.

The key considerations are breaking down a complex problem into simpler sub-problems, and repeated calling on smaller instances of the same problem. Any problem that exhibits these traits is a good candidate for recursion.
</p>
### Author
[Oluwasheyi Makanjuola](https://github.com/Mxcoded)
