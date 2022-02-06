#include <iostream>
using namespace std;
// Function prototype or deceleration
string alphabet(char letter);
// Main Functon
int main()
{
    /*Write a function for checking whether the alphabet entered by the user is in small case or in
    capital case (Suppose user can only enter ‘A’ or ‘a’). Make a function that takes 1 Character as
    input, does processing according to the input and then returns the string. String is “You have
    entered Capital A” if the user enters ‘A’, otherwise “You have entered small A”. */
    char letter;
    string result;
    cout << "Enter a character : ";
    cin >> letter;
    result = alphabet(letter); // function called
    cout << result;
}
// Function definition
string alphabet(char letter)
{ // function body
    string result;
    // A
    if (letter == 'A' || letter == 'a')
    {
        if (letter == 'A')
        {
            result = "You have entered Capital A ";
        }
        else
        {
            result = "You have entered Small  A ";
        }
    }
    // B
    else if (letter == 'B' || letter == 'b')
    {
        if (letter == 'B')
        {
            result = "You have entered Capital B ";
        }
        else
        {
            result = "You have entered Small  B ";
        }
    }
    // C
    else if (letter == 'C' || letter == 'c')
    {
        if (letter == 'C')
        {
            result = "You have entered Capital C ";
        }
        else
        {
            result = "You have entered Small  C ";
        }
    }
    // D
    else if (letter == 'D' || letter == 'd')
    {
        if (letter == 'D')
        {
            result = "You have entered Capital D ";
        }
        else
        {
            result = "You have entered Small  D ";
        }
    }
    // E
    else if (letter == 'E' || letter == 'e')
    {
        if (letter == 'E')
        {
            result = "You have entered Capital E ";
        }
        else
        {
            result = "You have entered Small E ";
        }
    }
    // F
    else if (letter == 'F' || letter == 'f')
    {
        if (letter == 'F')
        {
            result = "You have entered Capital F ";
        }
        else
        {
            result = "You have entered Small F  ";
        }
    }
    // G
    else if (letter == 'G' || letter == 'g')
    {
        if (letter == 'G')
        {
            result = "You have entered Capital G ";
        }
        else
        {
            result = "You have entered Small G  ";
        }
    }
    // H
    else if (letter == 'H' || letter == 'h')
    {
        if (letter == 'H')
        {
            result = "You have entered Capital H ";
        }
        else
        {
            result = "You have entered Small H  ";
        }
    }
    // I
    else if (letter == 'I' || letter == 'i')
    {
        if (letter == 'I')
        {
            result = "You have entered Capital I ";
        }
        else
        {
            result = "You have entered Small I  ";
        }
    }
    // J
    else if (letter == 'J' || letter == 'j')
    {
        if (letter == 'J')
        {
            result = "You have entered Capital J ";
        }
        else
        {
            result = "You have entered Small J  ";
        }
    }
    // K
    else if (letter == 'K' || letter == 'k')
    {
        if (letter == 'K')
        {
            result = "You have entered Capital K  ";
        }
        else
        {
            result = "You have entered Small K  ";
        }
    }
    // L
    else if (letter == 'L' || letter == 'l')
    {
        if (letter == 'L')
        {
            result = "You have entered Capital L ";
        }
        else
        {
            result = "You have entered Small L  ";
        }
    }
    // M
    else if (letter == 'M' || letter == 'm')
    {
        if (letter == 'M')
        {
            result = "You have entered Capital M ";
        }
        else
        {
            result = "You have entered Small M  ";
        }
    }
    // N
    else if (letter == 'N' || letter == 'n')
    {
        if (letter == 'N')
        {
            result = "You have entered Capital N ";
        }
        else
        {
            result = "You have entered Small N  ";
        }
    }
    // O
    else if (letter == 'O' || letter == 'o')
    {
        if (letter == 'O')
        {
            result = "You have entered Capital O ";
        }
        else
        {
            result = "You have entered Small O  ";
        }
    }
    // P
    else if (letter == 'P' || letter == 'p')
    {
        if (letter == 'P')
        {
            result = "You have entered Capital P ";
        }
        else
        {
            result = "You have entered Small P  ";
        }
    }
    // Q
    else if (letter == 'Q' || letter == 'q')
    {
        if (letter == 'Q')
        {
            result = "You have entered Capital Q ";
        }
        else
        {
            result = "You have entered Small Q  ";
        }
    }
    // R
    else if (letter == 'R' || letter == 'r')
    {
        if (letter == 'R')
        {
            result = "You have entered Capital R ";
        }
        else
        {
            result = "You have entered Small R  ";
        }
    }
    // R
    else if (letter == 'R' || letter == 'r')
    {
        if (letter == 'R')
        {
            result = "You have entered Capital R ";
        }
        else
        {
            result = "You have entered Small R  ";
        }
    }
    // S
    else if (letter == 'S' || letter == 's')
    {
        if (letter == 'S')
        {
            result = "You have entered Capital S ";
        }
        else
        {
            result = "You have entered Small S  ";
        }
    } // T
    else if (letter == 'T' || letter == 't')
    {
        if (letter == 'T')
        {
            result = "You have entered Capital T ";
        }
        else
        {
            result = "You have entered Small T  ";
        }
    }
    // U
    else if (letter == 'U' || letter == 'u')
    {
        if (letter == 'U')
        {
            result = "You have entered Capital U ";
        }
        else
        {
            result = "You have entered Small U  ";
        }
    }
    // V
    else if (letter == 'V' || letter == 'v')
    {
        if (letter == 'V')
        {
            result = "You have entered Capital V ";
        }
        else
        {
            result = "You have entered Small V  ";
        }
    }
    // W
    else if (letter == 'W' || letter == 'w')
    {
        if (letter == 'W')
        {
            result = "You have entered Capital W ";
        }
        else
        {
            result = "You have entered Small W  ";
        }
    }
    // X
    else if (letter == 'X' || letter == 'x')
    {
        if (letter == 'X')
        {
            result = "You have entered Capital X ";
        }
        else
        {
            result = "You have entered Small X  ";
        }
    }
    // Y
    else if (letter == 'Y' || letter == 'y')
    {
        if (letter == 'Y')
        {
            result = "You have entered Capital Y ";
        }
        else
        {
            result = "You have entered Small Y  ";
        }
    }
    // Z
    else if (letter == 'Z' || letter == 'z')
    {
        if (letter == 'Z')
        {
            result = "You have entered Capital Z ";
        }
        else
        {
            result = "You have entered Small Z  ";
        }
    }
    //
    else
    {
        cout << "Invalid Option";
    }

    return result;
}
