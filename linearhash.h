#ifndef LINEARHASH
#define LINEARHASH

#include<iostream>
using std::cout;
using std::cin;
const int TableSize =  10;

//create hash table class
class HashTable
{
private:
    int* table;
    int size;
    int track;

public:
    HashTable()
    {
        size = TableSize;
        table = new int[size];
        track = 0;

        //initialize all empty slots
        for(int i = 0; i < size; i++)
        {
            table[i] = -1;
        }
    }

    //Hash function key
    int hashFunction(int key)
    {
        return key % size;
    }

    //check if hash table is full 
    bool checkIfFull()
    {
        if(track == size)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    //Insert value into hash table 
    void insertValue(int key)
    {
        if(checkIfFull() == false)
        {
            return;
        }

        int index = hashFunction(key);

        while(table[index] != -1)        //iterate through the table until we find an empty slot
        {
            index = (index + 1) % size;
        }

        table[index] = key;
        track++;
    }

    //Delete value from hash table
    void deleteValue(int key)
    {
        int index = hashFunction(key);

        while(table[index] != -1)
        {
            if(table[index] == key)
            {
                table[index] = -1;
                return;
            }
            index = (index + 1) % size;
        }
    }

    //Search value in hash table
    void searchValue(int key)
    {
        int index = hashFunction(key);

        /*linear probing 
        (works because the key has to iterate through the same path once guaranteeing that table is not -1)*/
        while(table[index] != -1)
        {
            if(table[index] == key)
            {
                cout << "Found Key " << key << " at index " << index << "\n"; 
                return;
            }
            index = (index + 1) % size;
        }
        cout << "Key: " << key << " NOT FOUND\n";
        return;
    }

    //Display hash table
    void displayTable()
    {
        cout << "--- HASH TABLE CONTENTS ---\n" ;
        for(int i = 0; i < size; i++)
        {
            cout << "INDEX: " << i << " KEY: " << table[i] << "\n";
        }
        cout << "\n";
    }

};

#endif