#include<iostream>
using namespace std;
void swap(int *a, int *b) {
   int temp = *a;
   *a = *b;
   *b = temp;
}
void arrangeArrival(int num, int mat[][3]) {
   for(int i=0; i<num; i++) {
      for(int j=0; j<num-i-1; j++) {
         if(mat[1][j] > mat[1][j+1]) {
            for(int k=0; k<5; k++) {
               swap(mat[k][j], mat[k][j+1]);
            }
         }
      }
   }
}
void completionTime(int num, int mat[][3]) {
   int temp, val;
   mat[3][0] = mat[1][0] + mat[2][0];
   mat[5][0] = mat[3][0] - mat[1][0];
   mat[4][0] = mat[5][0] - mat[2][0];
    for(int i=1; i<num; i++) {
      temp = mat[3][i-1];
      int low = mat[2][i];
      for(int j=i; j<num; j++) {
         if(temp >= mat[1][j] && low >= mat[2][j]) {
            low = mat[2][j];
            val = j;
         }
      }
      mat[3][val] = temp + mat[2][val];
      mat[5][val] = mat[3][val] - mat[1][val];
      mat[4][val] = mat[5][val] - mat[2][val];
      for(int k=0; k<6; k++) {
         swap(mat[k][val], mat[k][i]);
      }
   }
}
int main() {
   int num = 3, temp;
   int mat[6][3] = {2201, 3401, 1103, 1, 2, 3, 3, 2, 1};
   float total_awtime = 0;
   float total_tattime =0;
   cout<<"Before Arrange...\n";
   cout<<"Course Code\tArrival Time\tDuration\n";
   for(int i=0; i<num; i++) {
      cout<<"CSC"<<mat[0][i]<<"\t\t"<<mat[1][i]<<"\t\t"<<mat[2][i]<<"\n";
   }
   arrangeArrival(num, mat);
   completionTime(num, mat);
   cout<<"Final Result...\n";
   cout<<"Course Code\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n";
   for(int i=0; i<num; i++) {
      cout<<"CSC"<<mat[0][i]<<"\t\t"<<mat[1][i]<<"\t\t"<<mat[2][i]<<"\t\t"<<mat[4][i]<<"\t\t"<<mat[5][i]<<"\n";
      total_awtime = total_awtime + mat[4][i];
      total_tattime = total_tattime + mat[5][i];
   }
   
    cout<<"Average waiting time is : "; 
    cout<<total_awtime/num<<endl; 
    cout<<"average turnaround time : "; 
    cout<<total_tattime/num<<endl; 
  
}
