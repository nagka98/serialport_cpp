#include <iostream>
using namespace std;
#include <string>
#include <stdlib.h>
#include "SerialPort.h"

char *port = "\\\\.\\COM9";
char output[MAX_DATA_LENGTH];
char incoming[MAX_DATA_LENGTH];

int main(){
    SerialPort esp(port);
    if(esp.isConnected())
    {
        cout << "connection is established";
    }
    else
    {
        cout << "Error in port name";
    }
    while (esp.isConnected())
    {
        string data;
        esp.readSerialPort(output, MAX_DATA_LENGTH);
        cout << output;
        /* code */
    }
    
    return 0;
}

