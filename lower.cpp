#include <iostream>
using namespace std;

 int linearIndx(int i,int j){
     int index_1d =((i*i)+i)/2+j;
     return index_1d;
 }
int main(){
        int array[5][5]={{1, 2, 3, 4, 5}, 
                        {6, 7, 8, 9, 10}, 
                        {11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20},
                        {21, 22, 23, 24, 25}};
        int b[25];
        int indices=0;
        int i,j;
        for ( i=0;i<5;i++){
          for (j =0;j<5;j++){
              b[indices]=array[i][j];
              indices++;
            }
             
        }  cout << b[linearIndx(2,4)] ;  
        
}