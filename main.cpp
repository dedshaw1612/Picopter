/*
 * File:   main.cpp
 * Author: matt
 *
 * Created on 21 October 2012, 22:26
 */

#include <iostream>

#include "main.h"

using namespace std;

/*
 *
 */
int main(int argc, char** argv)
{
    I2CInterface::openInterface();
    MPU6050::instance()->checkConnection();
    
    return 0;
}
