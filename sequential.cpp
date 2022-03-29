//soal 1

#include <iostream>
using namespace std;

int main(){
    int arr[]={12,34,2,1,22,32};
    int num;
    bool found = false;

    cout << "input num ";cin >> num;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if (num == arr[i])
        {
            /* code */
            found = true;
            cout << "data di temukan di indeks ke - "<<i;
            break;
        } else
        {
            cout << "not found ";
            break;
        }
        
    }
    

    return 0;
}