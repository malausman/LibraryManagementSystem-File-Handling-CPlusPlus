#include "stdafx.h"
#include <iostream>
#include <cstdio>


using namespace std;

int mais()
{
    int retVal;
    FILE *fp;
    char buffer[] = "Writing to a file using fwrite.";

    fp = fopen("data.txt","w");
    retVal = fwrite(buffer,sizeof(buffer),1,fp);
    
    cout << "fwrite returned " << retVal;
    return 0;
}