#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int result = 5526;
    int n; // the number of temperatures to analyse
    
    cin >> n; cin.ignore();
    if (!n)
        {
            result = 0;
        }
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        

        if (abs(t) < abs(result))
        {
            result = t;
        }
        else if (abs(t) == abs(result))
        {
            result = abs(t);
        }

    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << result << endl;
}
