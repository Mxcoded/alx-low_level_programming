 # What is Hash Table?
	A hash table is a data structure that allows you to store, retrieve, and manage data efficiently by using a hash function to map keys to indices in an array. It provides an efficient way to implement dictionaries, associative arrays, or mappings, where the keys can be used to quickly look up the corresponding values. Hash tables allow for constant-time average case lookup and insertion operations, making them a popular choice for many applications.

# What is Hash Function?
	A hash function is a mathematical function that takes an input (or 'message') and returns a fixed-size string of bytes, typically a 'hash value', that is representative of the input. The hash function should have the properties of being deterministic (i.e., the same input always results in the same hash value), being efficient to compute the hash value for any given input, and being infeasible to generate the original input from the hash value. The use of hash functions is widespread in computer science, including applications in cryptography, data structures (such as hash tables), and in various algorithms for verifying the integrity of data.

# What makes a good hash function
	A good hash function should have the following properties:

 * Deterministic: Given the same input, the hash function should always produce the same output.

 * Uniform Distribution: The hash values should be evenly distributed across the output range.

 * Infeasible to Invert: It should be computationally infeasible to generate the input from the hash value.

 * Infeasible to generate Collisions: It should be computationally infeasible to generate two different inputs with the same hash value.

 * Efficient: It should be efficient to compute the hash value for any given input.

 * Robust: Small changes to the input should result in significant changes to the hash value.
