/*
 @file: pthreads_skeleton.cpp
 
 @author: student name1, student2@uncc.edu
 @author: student name2, student2@uncc.edu
 @author: student name3, student3@uncc.edu
 
 @description: A program that demonstrates processes.
 
 @course: ITSC 3146
 @assignment: in-class activity [n]
 */

#include <pthread.h>
#include <iostream>

using namespace std;

int a[10];


// This function shows the skeleton that pthread 
// functions must adhere to. 
// Copy this skeleton for any pthread function 
// you need to define. 
// In the copy, modify the name of the function 
// and the function body as needed. 
void *routineName(void *arg)
{
   // TODO: Add code that implements
   //       the thread's functionality
   cout << "Thread is running..." << endl;
   return 0;
}

void *countNegatives(void *){
   int k = 0;
   for(int i = 0; i < 10; i++){
      if(a[i] < 0){
         k++;
      }
   }
   cout << "Total negative numbers: " << k << endl;
}
void *average(void *){
   int sum = 0; 
   for(int i = 0; i < sizeof(a); i++){
      sum = sum + a[i];
   }
   int avg = sum / 10;
   cout << "Average: " << avg << endl;
}
void *reverse(void *){
   int size = sizeof(a)/sizeof(int);
   cout << "The numbers in reverse: " << endl;
   for(int i = size - 1; i >= 0; i--){
      cout << a[i] << " " << endl;
   }
   cout << endl;
}


int main()
{
   // id is used to store a unique thread identifier,
   // returned by the call to create a new POSIX thread
   pthread_t id;
   
   // rc is used to store the code returned by the
   // call to create a new POSIX thread. The value is
   // zero (0) if the call succeeds.
   int rc;
   
   
   // TODO: Add code to perform any needed initialization
   //       or to process user input
   int t;
   int size = sizeof(a)/sizeof(int);
   for(int i = 0; i < size ;i++){
      cout << "Enter a number: ";
      cin >> t;
      a[i] = t;
      
   }
   
   // Create thread(s)
   // TODO: Modify according to assignment requirements
    rc = pthread_create(&id, NULL, reverse, (void *)(a));
   
   rc = pthread_create(&id, NULL, average, (void *)(a));
   
   rc = pthread_create(&id, NULL, countNegatives, (void *)(a));



   if (rc){
      cout << "ERROR; return code from pthread_create() is " << rc << endl;
      return -1;
   }
   

   // NOTE: Using exit here will immediately end execution of all threads
   pthread_exit(0);
}
