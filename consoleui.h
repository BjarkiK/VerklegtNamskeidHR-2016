#ifndef CONSOLEUI_H
#define CONSOLEUI_H

#include "performerservice.h"

class consoleUI
{
public:
    consoleUI();

    void run();


private:
    void displayListOfPerformers();

private:
    Performerservice _service;
};

#endif // CONSOLEUI_H
