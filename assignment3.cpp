#include <iostream>
#include <cmath>

using namespace std;

//Take Assignment 2 and modify so that your program will run until you find a safe travel time. Your program will help you find the safe speed 
//to drive and not risk a ticket. When 26<t<53. Your program will keep prompting you to input a time while your algorithm calculates its velocity.
//Ifyour velocity is outside the threshold, it asks for a new time. Until the safe velocity is found.
//Find output to find. VS < V < VF when VF = ? and VS= ?.

//27 miles long
//https://docs.google.com/document/d/1-0EWlEPRqY1cBDcQUtk5gLdgx3w6x3PEGt9cV1l0zyo/edit?tab=t.0

int main(){
    double t, v;
    cout << "How long did it take for the car to get to JFK in minutes?: ";
    cin >> t;
    bool ns = true;
    v = 27/t;
    cout << "---------------------------------------------------------------------------------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------------------------------\n";

    //26 minutes = velocity 1.03846 if its bigger than this number its speeding
    //53 minutes = velocity 0.509434 anything smaller than this number is impeding

    while(ns == true)
        if(t < 26 && v > 1.03846){
        cout << "You were going too fast! You are getting a $200 ticket!\n";
        cout << "Velocity: ";
        cout << v ;
        cout << " m/s\n";
        cout << "---------------------------------------------------------------------------------------------------------------\n";
        cout << "---------------------------------------------------------------------------------------------------------------\n";
        cout << "How long did it take for the car to get to JFK in minutes?: ";
        cin >> t;
        cout << "---------------------------------------------------------------------------------------------------------------\n";
        cout << "---------------------------------------------------------------------------------------------------------------\n";
        v = 27/t;
        }

        else if(t > 53 && v < 0.509434){
        cout << "You are going too slow! You are getting a $50 ticket!\n";
        cout << "Velocity: "; 
        cout << v ;
        cout << " m/s\n";
        cout << "---------------------------------------------------------------------------------------------------------------\n";
        cout << "---------------------------------------------------------------------------------------------------------------\n";
        cout << "How long did it take for the car to get to JFK in minutes?: ";
        cin >> t;
        cout << "---------------------------------------------------------------------------------------------------------------\n";
        cout << "---------------------------------------------------------------------------------------------------------------\n";
        v = 27/t;
        }

        else{
        cout << "You are safe!\n";
        cout << "Velocity: "; 
        cout << v ;
        cout << " m/s";
        ns = false;
        }
}