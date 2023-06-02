#include <iostream>
#include "linearhash.h"

int main()
{
    //create Hash table
    HashTable hash;

    //display table 
    hash.displayTable();

    //insert 
    cout << "INSERTING 2, 3, 4\n";
    hash.insertValue(2);
    hash.insertValue(3);
    hash.insertValue(4);

    //display table after insert
    hash.displayTable();

    //remove one
    cout << "REMOVING 3\n";
    hash.deleteValue(3);

    //display table after remove
    hash.displayTable();

    //search for key in table
    hash.searchValue(4);
    hash.searchValue(3);
    
    return 0;
}