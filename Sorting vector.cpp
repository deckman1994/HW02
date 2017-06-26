//
//  Sorting vector.cpp
//  Exam # 2
//
//  Created by Derek Eckman on 6/20/17.
//  Copyright © 2017 Derek Eckman. All rights reserved.
//

#include "Sorting vector.hpp"
#include "Runner Class.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    string firstname;
    string lastname;
    int pace;
    //vector that pace needs to be storaged in
    
    vector<int> myvector;
    Runner one;
    
    //opening up the file of runners
    ofstream registrants;
    registrants.open("registrants.txt");
    
    if (registrants.fail())
        cout << "Does not exist. ";
    
    //sorting the file into the vector "pace."
        
      else (registrants.is_open())
        {
            while (!registrants.eof())
            {
                getline(firstname, lastname, pace);
                myvector.push_back(pace);
                sort(line.begin(), line.end());
                
            }
        }
    registrants.close();

}
    
    
    
    
    
    
    
    
}
