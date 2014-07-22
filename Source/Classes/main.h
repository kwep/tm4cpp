/*
 * main.h
 *
 *  Created on: 2014.07.21.
 *      Author: Peter Kovacs ~ k'wep
 */

#pragma once

#include "mcu.h"

using namespace tm4cpp;

class Main: Application
{
    Port<gpio::F> portF;

  public:
    Main()
    {
      portF.setPinDirection(gpio::Pin1 | gpio::Pin3, gpio::Output);
      portF.setPinHigh(gpio::Pin3);
    }

    void runLoop()
    {
      portF.togglePin(gpio::Pin1 | gpio::Pin3);
      SystemTimer::delay(100);
    }
};
