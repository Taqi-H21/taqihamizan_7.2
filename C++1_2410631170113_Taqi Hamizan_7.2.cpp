#include<iostream>
using namespace std;

int main()
{
    int n, trg, idx = -1;
    cout << "Input Element Ammount : ";
    cin >> n;
    int arr[n];
    cout << "input " << n << " element:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Input Checked Numbers : ";
    cin >> trg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == trg)
        {
            idx = i;
            break;
        }
    }
    if (idx != -1)
    {
        cout << "Number is Found at " << idx + 1 << "-index" << endl;
    }
    else
    {
        cout << "Number is not Found" << endl;
    }
    return 0;
}
