#include <iostream>
#include <sstream>
#include <string>
#include "fib_heap.h"
#include "hash_table.h"
#include "data reader.h"
int main()
{
    std::cout << "loading data, this may take up to 1 minute..." << std::endl;
    fib_heap* f = load_fib_heap();
    hash_table* h = load_hash_table();
    indexer in;
    indexer inh;
    int input = 0;
    std::string filename;
    bool g = true;
    while (g)
    {
        std::cout << "Welcome to the Algorithmos Crimetracker!" << std::endl;
        std::cout << "Please read in what you would like to analyze (file name): ";
        //std::cin >> filename; // or whatever the readin file name is
        std::cout << "This software keeps track of crime that occured in los angeles from 2010 to 2017 " << std::endl;
        std::cout << "What would you like to find with this data? (type a number 1-3) " << std::endl;
        std::cout << "1. Most common crime on specified date" << std::endl;
        std::cout << "2. Most common victim demographic on specified date" << std::endl;
        std::cout << "3. Most common area of crime on specified date" << std::endl;
        std::cout << "4. Most common age of victim on specified date" << std::endl;
        std::cout << "5. End program" << std::endl;
        std::cin >> input;

            if (input == 1)
            {
                bool run = true;
                while (run)
                {
                    //do something
                    int w = 0;
                    std::cout << "What date would you like to check? (insert number 1-7)" << std::endl;
                    std::cout << "1. 2011" << std::endl;
                    std::cout << "2. 2012" << std::endl;
                    std::cout << "3. 2013" << std::endl;
                    std::cout << "4. 2014" << std::endl;
                    std::cout << "5. 2015" << std::endl;
                    std::cout << "6. 2016" << std::endl;
                    std::cout << "7. 2017" << std::endl;
                    std::cin >> w;
                    if (w == 1)
                    {
                        //2011
                        std::string s = "2011";
                        run = false;
                        bool t = true;
                        while (t)
                        {
                            std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                            std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                            std::cin >> w;
                            if (w == 1)
                            {
                                f->get_crimes_year(s);
                                in = f->get_indexer();
                                t = false;
                            }
                            else if (w == 2)
                            {
                                h->get_crimes_year(s);
                                in = h->get_indexer();
                                t = false;
                            }
                        }
                    }
                    else if (w == 2) {
                        //2012
                        run = false;
                        std::string s = "2012";
                        bool t = true;
                        while (t)
                        {
                            std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                            std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                            std::cin >> w;
                            if (w == 1)
                            {
                                f->get_crimes_year(s);
                                in = f->get_indexer();
                                t = false;
                            }
                            else if (w == 2)
                            {
                                h->get_crimes_year(s);
                                in = h->get_indexer();
                                t = false;
                            }
                        }
                    }
                    else if (w == 3) {
                        //2013
                        run = false;
                        std::string s = "2013";
                        bool t = true;
                        while (t)
                        {
                            std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                            std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                            std::cin >> w;
                            if (w == 1)
                            {
                                f->get_crimes_year(s);
                                in = f->get_indexer();
                                t = false;
                            }
                            else if (w == 2)
                            {
                                h->get_crimes_year(s);
                                in = h->get_indexer();
                                t = false;
                            }
                        }
                    }
                    else if (w == 4) {
                        //2014
                        run = false;
                        std::string s = "2014";
                        bool t = true;
                        while (t)
                        {
                            std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                            std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                            std::cin >> w;
                            if (w == 1)
                            {
                                f->get_crimes_year(s);
                                in = f->get_indexer();
                                t = false;
                            }
                            else if (w == 2)
                            {
                                h->get_crimes_year(s);
                                in = h->get_indexer();
                                t = false;
                            }
                        }
                    }
                    else if (w == 5) {
                        //2015
                        run = false;
                        std::string s = "2015";
                        bool t = true;
                        while (t)
                        {
                            std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                            std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                            std::cin >> w;
                            if (w == 1)
                            {
                                f->get_crimes_year(s);
                                in = f->get_indexer();
                                t = false;
                            }
                            else if (w == 2)
                            {
                                h->get_crimes_year(s);
                                in = h->get_indexer();
                                t = false;
                            }
                        }
                    }
                    else if (w == 6) {
                        //2016
                        run = false;
                        std::string s = "2016";
                        bool t = true;
                        while (t)
                        {
                            std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                            std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                            std::cin >> w;
                            if (w == 1)
                            {
                                f->get_crimes_year(s);
                                in = f->get_indexer();
                                t = false;
                            }
                            else if (w == 2)
                            {
                                h->get_crimes_year(s);
                                in = h->get_indexer();
                                t = false;
                            }
                        }
                    }
                    else if (w == 7) {
                        //2017
                        run = false;
                        std::string s = "2017";
                        bool t = true;
                        while (t)
                        {
                            std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                            std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                            std::cin >> w;
                            if (w == 1)
                            {
                                f->get_crimes_year(s);
                                in = f->get_indexer();
                                t = false;
                            }
                            else if (w == 2)
                            {
                                h->get_crimes_year(s);
                                in = h->get_indexer();
                                t = false;
                            }
                        }
                    }
                    else
                    {
                        std::cout << "invalid input, please try again..." << std::endl;
                    }
                }
                in.most_common_crime();
            }
        else if (input == 2)
        {
            //do something else
            bool run = true;
            while (run)
            {
                int x = 0;
                std::cout << "What date would you like to check? (insert number 1-7)" << std::endl;
                std::cout << "1. 2011" << std::endl;
                std::cout << "2. 2012" << std::endl;
                std::cout << "3. 2013" << std::endl;
                std::cout << "4. 2014" << std::endl;
                std::cout << "5. 2015" << std::endl;
                std::cout << "6. 2016" << std::endl;
                std::cout << "7. 2017" << std::endl;
                std::cin >> x;
                if (x == 1) 
                {
                    //2011
                    std::string s = "2011";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> x;
                        if (x == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (x == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (x == 2) {
                    //2012
                    std::string s = "2012";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> x;
                        if (x == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (x == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (x == 3) {
                    //2013
                    std::string s = "2013";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> x;
                        if (x == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (x == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (x == 4) {
                    //2014
                    std::string s = "2014";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> x;
                        if (x == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (x == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (x == 5) {
                    //2015
                    std::string s = "2015";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> x;
                        if (x == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (x == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (x == 6) {
                    //2016
                    std::string s = "2016";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> x;
                        if (x == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (x == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (x == 7) {
                    //2017
                    std::string s = "2017";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> x;
                        if (x == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (x == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else
                {
                    std::cout << "invalid input, please try again..." << std::endl;
                }
            }
            in.most_common_victim();
        }
        else if (input == 3)
        {
            bool run = true;
            while (run)
            {
                //do something else again
                int y = 0;
                std::cout << "What date would you like to check? (insert number 1-7)" << std::endl;
                std::cout << "1. 2011" << std::endl;
                std::cout << "2. 2012" << std::endl;
                std::cout << "3. 2013" << std::endl;
                std::cout << "4. 2014" << std::endl;
                std::cout << "5. 2015" << std::endl;
                std::cout << "6. 2016" << std::endl;
                std::cout << "7. 2017" << std::endl;
                std::cin >> y;
                if (y == 1) {
                    //2011
                    std::string s = "2011";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> y;
                        if (y == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (y == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (y == 2) {
                    //2012
                    std::string s = "2012";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> y;
                        if (y == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (y == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (y == 3) {
                    //2013
                    std::string s = "2013";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> y;
                        if (y == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (y == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (y == 4) {
                    //2014
                    std::string s = "2014";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> y;
                        if (y == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (y == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (y == 5) {
                    //2015
                    std::string s = "2015";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> y;
                        if (y == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (y == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (y == 6) {
                    //2016
                    std::string s = "2016";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> y;
                        if (y == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (y == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (y == 7) {
                    //2017
                    std::string s = "2017";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> y;
                        if (y == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (y == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else
                {
                    std::cout << "invalid input, please try again..." << std::endl;
                }
            }
            in.most_common_area();
        }
        else if (input == 4)
        {
            bool run = true;
            while (run)
            {
                //do something else again!
                int z = 0;
                std::cout << "What date would you like to check? (insert number 1-7)" << std::endl;
                std::cout << "1. 2011" << std::endl;
                std::cout << "2. 2012" << std::endl;
                std::cout << "3. 2013" << std::endl;
                std::cout << "4. 2014" << std::endl;
                std::cout << "5. 2015" << std::endl;
                std::cout << "6. 2016" << std::endl;
                std::cout << "7. 2017" << std::endl;
                std::cin >> z;
                if (z == 1) {
                    //2011
                    std::string s = "2011";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> z;
                        if (z == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (z == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (z == 2) {
                    //2012
                    std::string s = "2012";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> z;
                        if (z == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (z == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (z == 3) {
                    //2013
                    std::string s = "2013";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> z;
                        if (z == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (z == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (z == 4) {
                    //2014
                    std::string s = "2014";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> z;
                        if (z == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (z == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (z == 5) {
                    //2015
                    std::string s = "2015";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> z;
                        if (z == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (z == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (z == 6) {
                    //2016
                    std::string s = "2016";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> z;
                        if (z == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (z == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else if (z == 7) {
                    //2017
                    std::string s = "2017";
                    run = false;
                    bool t = true;
                    while (t)
                    {
                        std::cout << "1: should this operations be performed using a fibonacci heap?" << std::endl;
                        std::cout << "2: or should this operations be performed using a min-heap based hash table?" << std::endl;
                        std::cin >> z;
                        if (z == 1)
                        {
                            f->get_crimes_year(s);
                            in = f->get_indexer();
                            t = false;
                        }
                        else if (z == 2)
                        {
                            h->get_crimes_year(s);
                            in = h->get_indexer();
                            t = false;
                        }
                    }
                }
                else
                {
                    std::cout << "invalid input, please try again..." << std::endl;
                }
            }
            in.most_common_age();
        }
        else if (input == 5)
        {
            g = false;
        }

    }
    std::cout << "Thanks for using Crimetracker!" << std::endl;
    return 0;
}

