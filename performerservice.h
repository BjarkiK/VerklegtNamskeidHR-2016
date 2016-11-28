#ifndef PERFORMERSERVICE_H
#define PERFORMERSERVICE_H

#include <vector>
#include "performer.h"

using namespace std;

class Performerservice
{
public:
    Performerservice();

    vector <Performer> getPerformers(/*Setja inn færibreytur hér*/);
};

#endif // PERFORMERSERVICE_H
