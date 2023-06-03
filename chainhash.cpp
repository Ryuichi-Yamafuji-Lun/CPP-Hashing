#include <iostream>
#include "chainhash.h"

int main()
{
    int tableSize;
    bool track = true;
    cout << "--Chained Hashing-- \n" 
    << "What is the Hash Table size? ";
    cin >> tableSize;
    cout << "\n";

    //generate hashtable
    HashTable hash(tableSize);

    //display hash
    cout << "--Table--\n";
    hash.displayTable();

    //give user interactive platform 
    while(track == true)
    {
        int key;
        int option;
        cout << "Press 1:display 2:insert 3:remove 4:search 5:exit \n" << 
        "Option: ";
        cin >> option;
        cout << "\n";
        switch(option)
        {
            case 1:
                cout << "--DISPLAY TABLE--\n";
                hash.displayTable();
                break;

            case 2:
                cout << "--INSERT--\n" << "Key: ";
                cin >> key;
                cout << "\n";
                hash.insert(key);
                break;

            case 3:
                cout << "--REMOVE--\n" << "Key: ";
                cin >> key;
                cout << "\n";
                hash.remove(key);
                break;

            case 4:
                cout << "--SEARCH--\n" << "Key: ";
                cin >> key;
                cout << "\n";
                hash.search(key);
                break;

            case 5:
                cout << "Exiting...\n";
                track = false;
                break;

            default:
                cout << "Please choose one of the options \n"
                << "Options: 1:display 2:insert 3:remove 4:search 5:exit \n";
                break;

        }

    }


    return 0;
}