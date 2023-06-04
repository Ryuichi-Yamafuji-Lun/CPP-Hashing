#include <iostream>
#include "linearhash.h"

int main()
{
    //create Hash table
    HashTable hash;

    cout << "--Linear Probing Hash Table--\n";
    //display table 
    hash.displayTable();

    //user interaction
    bool x = true;
    int option;
    while(x == true)
    {
        int key;
        cout << "Options: 1.insert 2.delete 3.search 4.display 5.exit\n" << "Input: ";
        cin >> option;
        cout << "\n";
        switch(option)
        {
            case 1:
                cout << "--Insert--\n" << "Insert key: ";
                cin >> key;
                cout << "\n";
                hash.insertValue(key);
                break;
            case 2:
                cout << "--Delete--\n" << "Delete key: ";
                cin >> key;
                cout << "\n";
                hash.deleteValue(key);
                break;
            case 3:
                cout << "--Search--\n" << "Search key: ";
                cin >> key;
                cout << "\n";
                hash.searchValue(key);
                break;
            case 4:
                cout << "--Display Table--\n";
                hash.displayTable();
                break;
            case 5:
                cout << "Exiting...\n";
                x = false;
                break;
            default:
                cout << "Choose between option 1.insert 2.delete 3.search 4.display 5.exit\n";
                break;
        }
    }
    
    return 0;
}