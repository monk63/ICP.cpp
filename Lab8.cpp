#include <iostream>
#include<conio.h>
using namespace std;

 void linearIndx(int array[5][5],int row,int col){
      int i,j;
      for (i=0;i<row;i++){
          for (j =0;j<col;j++){
              if (i<j){
              cout << "0" << " ";
          }
          else
          cout << array[i][j] << " ";

      }cout << endl;
      }
 }

 void InverseIndx(int array[5][5],int row,int col){
      int i,j;
      for (i=0;i<row;i++){
          for (j =0;j<col;j++){
              if (i>j){
              cout << "0" << " ";
          }
          else
          cout << array[i][j] << " ";

      }cout << endl;
      }
 }
int  main(){
     int array[5][5]={{1, 2, 3, 4, 5}, 
                        {6, 7, 8, 9, 10}, 
                        {11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20},
                        {21, 22, 23, 24, 25}};
    int row = 5, col = 5;
      
    cout << "Linear: \n";
    linearIndx(array, row, col);
      
    cout << "Inverse: \n";
   InverseIndx(array, row, col);
          
    return 0;
            
} 