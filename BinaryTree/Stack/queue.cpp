#include <iostream>
using namespace std;

int queue[100], n = 100, front = - 1, rear = - 1; //maksimal 100 antrean
void Insert() {
   int val;
   if (rear == n - 1) //ketika antrean penuh
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Masukkan elemen ke dalam queue : "<<endl;
      cin>>val; //masukkan nama antrean
      rear++;
      queue[rear] = val;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow "; //antrean masih kosong
      return ;
   } else {
      cout<<"Elemen yang dihapus dari queue adalah : "<< queue[front] <<endl;
      front++;; //maka frontnya berkurang
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue kosong"<<endl; //ketika antrean kosong
   else {
      cout<<"Elemen queue adalah : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" "; // menampilkan seluruh isi
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Masukkan elemen ke queue"<<endl;
   cout<<"2) Menghapus elemen dari queue"<<endl;
   cout<<"3) Menampilkan semua elemen queue"<<endl;
   cout<<"4) Keluar"<<endl;
   do {
      cout<<"Masukkan pilihan anda : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Keluar"<<endl;
         break;
         default: cout<<"Pilihan tidak tersedia"<<endl;
      }
   } while(ch!=4);
   return 0;
}
