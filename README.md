# CPP-Hashing

Hash Tables using C++ and OOP

Linear Probing:
   We create an array of nodes with set length TableSize.
   The hash function is decided by key % TableSize and if there is a node then we move up one position until we find an empty array.
   Function in Linear Probing:
      search
      display table
      insert
      delete

Chain Hashing:
   Created chain hash table with user interaction which the user sets a table size and decides on a function. 
   Unlike Linear Probing, instead of moving up and down the table due to collision we take advantage of a linked list. 
   The linked list is linked to the table array. Using such data structure ensures that we do not have a limited space.
   
   Function in Chain Hashing:
      search
      display table
      insert
      delete
   
