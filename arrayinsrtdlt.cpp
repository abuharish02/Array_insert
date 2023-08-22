#include <iostream>
using namespace std;
int lengthaddarr = 0;
int insrtwhile = 1;
void add(int arr[], int ele, int idx, int n)
{

    for (int i = n; i > idx; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[idx] = ele;

    n++;
}

void remove(int arr[], int lengthaddarr, int idx)
{

    for (int i = idx; i < lengthaddarr - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    lengthaddarr--;
}

int main()
{

    int arr[10];
    int size = 10;
    int n;
    cout << "Length of Array according to you : ";
    cin >> n;

    cout << "Enter array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int op;

    while (1)
    {
        cout << "Enter 1 for insertion!" << endl;
        cout << "Enter 2 for deletion!" << endl;
        cout << "Enter 3 to view array!" << endl;
        cout << "Enter 4 to exit!" << endl;
        cout << "Enter your response : ";

        cin >> op;
        switch (op)
        {
        case 1:
            if (n < size)
            {
                cout << "Array is empty!" << endl;
                cout << "You want to insert a element." << endl;
                while (insrtwhile == 1)
                {
                    cout << "Index where you want to insert the element : ";
                    int idx;
                    cin >> idx;
                    if (idx <= n)
                    {
                        cout << "Enter element you want to insert : ";
                        int ele;
                        cin >> ele;

                        add(arr, ele, idx, n);
                        insrtwhile--;
                    }
                    else
                    {
                        cout << "Invalid Index!" << endl;
                        cout << "Please enter valid index." << endl;
                    }
                }
            }
            else
            {
                cout << "SORRY!! Array is not empty." << endl;
            }
            break;

        case 2:
            if (n > 0)
            {
                cout << "You can delete!" << endl;
                cout << "Enter index from which you want to Delete element : ";
                int idx;
                cin >> idx;
                remove(arr, lengthaddarr, idx);
            }
            else
            {
                cout << "You cannot delete element as array is empty!!" << endl;
            }
            break;
        case 3:
            cout << "Your array : ";
            lengthaddarr = sizeof(arr) / sizeof(arr[0]);
            for (int i = 0; i < lengthaddarr; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 4:
            cout << "Thank you" << endl;
            exit(0);
        }
    }

    return 0;
}