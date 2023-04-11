#include <iostream>
 
using namespace std;

//nama "binarySearch" yang terhubung dengan int main()
int binarySearch(int array[], int n, int target)
{
    //disetting 0, supaya dimulai dari 0
    int low = 0;
    //-1 karena n yang ditulis merupakan n data yang ada
    int high = n - 1;
 
    int mid;
 
    //disetting agar program berjalan
    while (low <= high)
    {
        //mencari nilai tengah antara low dan high
        mid = (low + high) / 2;
        
        //jika nilai tengah lebih besar dari target, kembalikan ke index
        if(target == array[mid])
        {
            return mid;
        }
        else if (target > array[mid])
        {
            //jika nilai tengah lebih kecil dari target, cari di setengah kanan
            low = mid + 1;
        }
        else
        {
            //jika nilai tengah lebih besar dari target, cari di setengah kiri
            high = mid - 1;
        }
    }
 
    //jika target tidak ditemukan, kembalikan -1
    return -1;
 
}

int main()
{
    //data yang ada
    int A[] = {2, 6, 10, 14, 18, 22, 26, 30, 34, 38};
 
    int nilai;
 
    cout << "Masukkan Bilangan : " << endl;
    cin >> nilai;
 
    //masukkan agar bisa masuk ke int binarySearch
    int hasil = binarySearch(A, 10, nilai);
 
    if(hasil >= 0)
    {
        cout << "Bilangan ditemukan pada index " << hasil << endl;
    }
    else
    {
        cout << "Bilangan tidak ditemukan " << endl;
    }
    return 0;
}
