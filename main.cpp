/*
Purpose: To calculate the histogram of a set of numbers
Author : Mariam Ahmad Amin Beshary
Faculty of Computers and Information
Date   :  9 / 10 /2018
*/
#include <iostream>

using namespace std;

int *grade= new int [20] ;
void getNum();
int f;

int main()
{

cout<<"Enter the students grades to get the histogram :) "<<endl <<endl;
for(int i=0 ; i<20 ; i++){
     cin>>grade[i];

if (grade[i]==-1){
      f=i;
      getNum();
      return 0 ;
    }}

delete []grade;

    return 0;
}

void getNum(){
int z,c;

// i will arrange the array first
for (int j=0; j<f  ; j++ ){
for ( int g=0 ; g<f ; g++){

     if (grade[j] > grade[g] ){

         z = grade[j];
         grade[j]= grade[g];
         grade[g]=z;

}}}


// i will count the # of existance of each num
int d=1 ;
for ( int b=0 ; b<f ; b++){
     if ( (grade[b+1]) == (grade[b]))
            d+=1 ;

else{
c=b;
// i print the num and it's # of existance
            cout<< endl<<endl <<"The # of " << grade[c] <<" = " << d ;
d=1;
}

}}

