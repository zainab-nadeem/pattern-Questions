#include <iostream>
using namespace std;
int main()
{ // question 1
    int n;
    cout << "enter number to make pattern of square";
    cin >> n;
    // nested loop for square pattern of numbers
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    /* question 2
     print pattern in continuous order of number */

    cout << "square pattern of number in continuous order" << endl;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;
    // for alphabets pattern

    cout << "square pattern of alphabets in continuous order" << endl;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    cout << endl;

    /* Question 3
    Triangle pattern */

    cout << "pattern of triangle " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++) // how many outputs we require in one line , we run inner loop for that time
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "triangle pattern of numbers/alphabets" << endl;
    char character = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++) // how many outputs we require in one line , we run inner loop for that time
        {
            cout << character << " ";
        }
        character++;
        cout << endl;
    }
    cout << endl;
    int number=1;
    for (int i = 0; i <n; i++)

    {
    
        for (int j = n ; j>0 ; j--) // how many outputs we require in one line , we run inner loop for that time
        {
            cout << number << " ";
           
        }

        cout << endl;
    }
}
