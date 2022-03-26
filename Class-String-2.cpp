// Demostrates getline and cin.get
#include <iostream>
#include <string>

void new_line();

int main()
{

}

void new_line()
{
    using namespace std;
    char next_char;
    do
    {
        cin.get(next_char);
    } while (next_char != '\n');
    
}