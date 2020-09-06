//tinaem14@gmail.com

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>


using namespace std;

main()
{
    ifstream inFile;
    string lines[2000];
    int i = 0; string messageVar[5]; int sum = 0;
    double sum = 0;
    double add = 1;
    // open the file stream
    inFile.open(".\\shakespeare.txt");

    if (!inFile)
    {
        cout << "Couldn't open the file" << endl;
        exit(1);
    }

    while (!inFile.eof())
    {
        getline(inFile, lines[i], '\n'); // read the next line into the next string
        ++i;
    }

    for (int j = 0; j < 5; j++)
        cout << lines[rand()]; // printing 5 random lines


    cout << "Type the above lines";

    // Start measuring time
    time_t begin, end;
    time(&begin);

    for (int k = 0; k < 5; k++)
    {
        cin.ignore();
        getline(cin, messageVar[k], '\n');
        
    }

    // Stop measuring time and calculate the elapsed time
    time(&end);
    time_t elapsed = end - begin;

    cout << "Time measured: %ld seconds.\n", elapsed;

    for (int l = 0; l < 5 ; l++)
    {
        int sum = sum + messageVar[l].size(); // summing total number of characters typed
    }

    // printing total number of characters typed
    cout << "Total number of characters typed ", sum;

    // printing number of characters typed per minute
    int charpermin = (60 * sum) / elapsed;
    cout << "characters typed per minute", charpermin;

}


    

