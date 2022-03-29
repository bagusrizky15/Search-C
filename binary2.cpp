#include <iostream>
using namespace std;

int main(){
    int arr[]={1, 2, 5, 7, 8, 9, 9, 11, 15, 16, 20};
    int m, x=5;
    int l=0;
    int h=10;

    bool found(false);
    while (l <= h && !found)
    {
        m=l+(h-1)/2;

        if (x == arr[m])
        {
            found=true;
            cout<<"data ditemukan ";
        } else if (x < arr[m])
        {
            h = m-1;
        } else if ( x > arr [m]){
            l = m + 1;
        }
        
    }

    return 0;
}