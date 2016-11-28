#include "performerservice.h"

Performerservice::Performerservice()
{

}

vector <Performer> Performerservice::getPerformers(/*Setja inn færibreytur hér*/){
    vector <Performer> performers;

    Performer p("Mamma Mia", 40);
    Performer p2("Papa Dapa", 69);
    performers.push_back(p);
    performers.push_back(p2);

    return performers;

}
