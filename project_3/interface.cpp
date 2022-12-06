#include <iostream>
#include <sstream>

int main()
{
    int input = 0;
    std::cout << "Welcome to the Algorithmos Crimetracker!" << endl;
    std::cout << "Please read in what you would like to analyze (file name): ";
    std::cin << filename << endl; // or whatever the readin file name is
    std::cout << "What would you like to find with the data you have read in? (type a number 1-3) " << endl;
    std::cout << "1. Most common crime on specified date" << endl;
    std::cout << "2. Most common victim demographic on specified date" << endl;
    std::cout << "3. Most common area of crime on specified date" << endl;
    std::cout << "4. Most common age of victim on specified date" << endl;
    std::cout << "5. End program" << endl;
    std::cin << input << endl;

    if (input != 5) { //change to while if need be
        if (input == 1) {
            //do something
            int w = 0;
            std::cout << "What date would you like to check? (insert number 1-7)" << endl;
            std::cout << "1. 2011" << endl;
            std::cout << "2. 2012" << endl;
            std::cout << "3. 2013" << endl;
            std::cout << "4. 2014" << endl;
            std::cout << "5. 2015" << endl;
            std::cout << "6. 2016" << endl;
            std::cout << "7. 2017" << endl;
            std::cin << w;
            if (w == 1) {
                //2011
            }
            else if (w == 2) {
                //2012
            }
            else if (w == 3) {
                //2013
            }
            else if (w == 4) {
                //2014
            }
            else if (w == 5) {
                //2015
            }
            else if (w == 6) {
                //2016
            }
            else if (w == 7) {
                //2017
            }
            else {
                break;
            }
        }
        else if (input == 2) {
            //do something else
            int x = 0;
            std::cout << "What date would you like to check? (insert number 1-7)" << endl;
            std::cout << "1. 2011" << endl;
            std::cout << "2. 2012" << endl;
            std::cout << "3. 2013" << endl;
            std::cout << "4. 2014" << endl;
            std::cout << "5. 2015" << endl;
            std::cout << "6. 2016" << endl;
            std::cout << "7. 2017" << endl;
            std::cin << x;
            if (x == 1) {
                //2011
            }
            else if (x == 2) {
                //2012
            }
            else if (x == 3) {
                //2013
            }
            else if (x == 4) {
                //2014
            }
            else if (x == 5) {
                //2015
            }
            else if (x == 6) {
                //2016
            }
            else if (x == 7) {
                //2017
            }
            else {
                break;
            }
        }
        else if (input == 3) {
            //do something else again
            int y = 0;
            std::cout << "What date would you like to check? (insert number 1-7)" << endl;
            std::cout << "1. 2011" << endl;
            std::cout << "2. 2012" << endl;
            std::cout << "3. 2013" << endl;
            std::cout << "4. 2014" << endl;
            std::cout << "5. 2015" << endl;
            std::cout << "6. 2016" << endl;
            std::cout << "7. 2017" << endl;
            std::cin << y;
            if (y == 1) {
                //2011
            }
            else if (y == 2) {
                //2012
            }
            else if (y == 3) {
                //2013
            }
            else if (y == 4) {
                //2014
            }
            else if (y == 5) {
                //2015
            }
            else if (y == 6) {
                //2016
            }
            else if (y == 7) {
                //2017
            }
            else {
                break;
            }
        }
        else if (input == 4) {
            //do something else again!
            int z = 0;
            std::cout << "What date would you like to check? (insert number 1-7)" << endl;
            std::cout << "1. 2011" << endl;
            std::cout << "2. 2012" << endl;
            std::cout << "3. 2013" << endl;
            std::cout << "4. 2014" << endl;
            std::cout << "5. 2015" << endl;
            std::cout << "6. 2016" << endl;
            std::cout << "7. 2017" << endl;
            std::cin << z;
            if (z == 1) {
                //2011
            }
            else if (z == 2) {
                //2012
            }
            else if (z == 3) {
                //2013
            }
            else if (z == 4) {
                //2014
            }
            else if (z == 5) {
                //2015
            }
            else if (z == 6) {
                //2016
            }
            else if (z == 7) {
                //2017
            }
            else {
                break;
            }
        }
        else {
            std::cout << "Invalid Input. Please use a number ranging from 1-3" << endl;
        }
    }
    //if x = 5, comes here.
    std::cout << "Thanks for you using Crimetracker!" << endl;


    return 0;
}
