//
//  Processes.cpp
//  ITSC 3146
//
//  Created by Bahamon, Julio on 1/12/17.
//


/*
 @file Processes.cpp
 @author student name, student@uncc.edu
 @author student name, student@uncc.edu
 @author student name, student@uncc.edu
 @description: <ADD DESCRIPTION>
 @course: ITSC 3146
 @assignment: in-class activity [n]
 */


#ifndef Processes_cpp
#define Processes_cpp

#include "Processes.h"


using namespace std;


// Part 1: Working With Process IDs
pid_t getProcessID(void)
{
   
   pid_t id = getpid();
   return id;
}


// Part 2: Working With Multiple Processes
string createNewProcess(void)
{
   pid_t id = fork();
   
   // DO NOT CHANGE THIS LINE OF CODE
   process_id = id;
   
   
   if(id == -1)
   {
      return "Error creating process";
   }
   else if (id == 0)
   {
      // TODO: Add your code here
      cout << "I am a child process!";
      cout << endl;

      return "I am bored of my parent, switching programs now";
      cout << endl;
   }
   else
   {
      int status;
      // TODO: Add your code here
      
      cout << "I just became a parent!";
      cout << endl;
      wait(&status);

      return "My child process just terminated!";
      cout << endl;
   }
}


// Part 3: Working With External Commands"
void replaceProcess(char * args[])
{
   int status;
   // Spawn a process to execute the user's command.
   pid_t id = fork();
   
   
   if (id == 0)
   {
      // TODO: Add your code here
      execvp(args[0],args);
   }
   else
   {
      int status;
      // TODO: Add your code here
      wait(&status);
   }
   
   // TODO: Add your code here
}

#endif /* TestProg_cpp */
