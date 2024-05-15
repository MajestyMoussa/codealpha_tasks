#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main() {


int x;
int y;
int rowNum;


    cout << " Enter the Numbers of rows you would like between 3 and 15: " << endl;
    cin >> rowNum;

    if ((3 <= rowNum) && (rowNum <= 15))
    {
        for (x = 1; x <= rowNum; x++) //outer loop
        {
            for (y = 1; y <= x; y++) {
                if (y <= (rowNum - x))
                    cout << " ";
                else
                    cout << "*";
            }
            cout << endl;
        }
        for (x = rowNum; x >= 1; x--) //outer loop
        {
            for (y = 1; y <= x; y++)
            {
                if (y <= (rowNum - x))
                    cout << " ";
                else
                    cout << "*";
            }
            cout << endl;
        }
    }
    else {
        cout << "invalid number try again";
    }
    return 0;
}
