//
//  Runner Class.cpp
//  Exam # 2
//
//  Created by Derek Eckman on 6/20/17.
//  Copyright © 2017 Derek Eckman. All rights reserved.
//

#include "Runner Class.hpp"
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

class Runner
{
public:
    int pace = 0;
    string firstname;
    string lastname;
    
    
    Runner()
    
    {
        firstname = "Steve";
        lastname = "Smith";
        pace = 100;
    }
    
    Runner(string newname, string newlastname, int newpace)
    {
        firstname = newname;
        lastname = newlastname;
        pace = newpace;
        
    }
    
    string getfirstname()
    {
        return firstname;
    }
    
    string getlastname()
    
    {
        return lastname;
    }
    
    int getpace()
    {
        
        return pace;
        
    }
    
};
