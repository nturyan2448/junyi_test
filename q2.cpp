#include <iostream>

using namespace std;

int main()
{
    int input;
    cout << "Enter a number" << endl;
    cin >> input;

    vector<int> list;
    for (int i = input, i >= 1; i--)
    {
        if (i % 3 == 0)
        {
            if (i % 5 == 0)
            {
                list.push_back(i);
                continue;
            }
        }
        else if (i % 5 == 0) continue;
        else list.push_back(i);
    }

    cout << list.size() << endl;
}