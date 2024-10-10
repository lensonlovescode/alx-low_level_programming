This directory contains implementations of hash table data structures and algorithms in C. Hash tables are efficient data structures for storing and retrieving key-value pairs. They use a hash function to map keys to indices within an array, providing fast lookup times.

Key Concepts

Hash Function: A function that takes a key as input and returns an integer value, known as the hash code. The hash code is used to determine the index in the hash table where the corresponding value will be stored.
Collision Handling: When two or more keys have the same hash code, a collision occurs. Different techniques can be used to handle collisions, such as separate chaining or open addressing.
Separate Chaining: Each bucket in the hash table stores a linked list of key-value pairs. When a collision occurs, the new key-value pair is simply appended to the linked list.
Open Addressing: When a collision occurs, a new index is calculated using a probing function, and the process is repeated until an empty bucket is found.
Implementation Details

The hash_table.h header file defines the hash_table_t structure, which represents a hash table.
