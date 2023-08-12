#include<bits/stdc++.h>
using namespace std;

// Sample structure for word and meaning
struct DictionaryEntry {
    char word[20];
    char meaning[50];
};


// Sample data to be stored in the dictionary
DictionaryEntry entries[] = {
    {"apple", "A fruit that grows on trees."},
    {"computer", "An electronic device for processing data."},
    {"dog", "A domesticated mammal often kept as a pet."},
    // Add more entries as needed
};

// Function to write sample data to the binary file
void write_sample_data() {
    ofstream file("dictionary.dat", ios::binary | ios::out);
    file.write((char*)&entries, sizeof(entries));
    file.close();
}

int main() {
    // Call the function to write sample data to the binary file
    write_sample_data();
    return 0;
}
