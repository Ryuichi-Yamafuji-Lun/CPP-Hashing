#ifndef CHAINHASH
#define CHAINHASH

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
typedef struct _NODE
{
    int data;
    struct _NODE *next;
}NODE;

class HashTable
{
private:
    vector<NODE*> table;
    int size;
public:
    HashTable(int tableSize)
    {
        size = tableSize;
        table.resize(size, nullptr);
    }
    
    //hash key function
    int hashFunction(int key)
    {
        return key % size;
    }

    //Insert key
    void insert(int key)
    {
        int index = hashFunction(key);
        NODE* node = new NODE;
        node->data = key;
        node->next = nullptr;

        if (table[index] == nullptr)
        {
            table[index] = node;
        }
        else
        {
            NODE* current = table[index];
            while(current->next != nullptr)
            {
                current = current->next;
            }

            current->next = node;
        }
    }

    //Remove key
    void remove(int key)
    {
        int index = hashFunction(key);
        
        //table is empty
        if(table[index] == nullptr)
        {
            return;
        }

        NODE* current = table[index];
        NODE* previous = current;
        //deleting first node
        if(current->data == key) 
        {
            current = current->next;
            previous->next = nullptr;
            table[index] = nullptr;
            table[index] = current;
            return;

        }

        while (current->data != key && current->next != nullptr)
        {
            previous = current;
            current = current->next;
        }
        if(current->data == key)
        {
            previous->next = current->next;
            current->next = nullptr;
            current = previous->next;
        }

    }

    //Search key
    void search(int key)
    {
        int index = hashFunction(key);

        NODE* current = table[index];

        while(current != nullptr)
        {
            if(current->data == key)
            {
                cout << "Key: " << key << " Found\n";
                return;
            }
            current = current->next;
        }

        cout << "Key: " << key << " Not Found\n";

    }

    //Display table
    void displayTable()
    {
        for(int i = 0; i < size; i++)
        {
            NODE* current = table[i];
            cout << "INDEX " << i << ":";
            while(current != nullptr)
            {
                cout << " -> " << current->data;
                current = current->next;
            }
            cout << "\n";
        }
    }

};


#endif