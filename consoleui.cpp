#include "consoleui.h"
#include "performer.h"
#include <string>
#include <iostream>

using namespace std;

consoleUI::consoleUI()
{

}

void consoleUI::run(){
    cout << "Please enter one of the folowing comands: " << endl;
    cout << "list - This will list all performers in the system." << endl;
    cout << "add - This will adda new performer." << endl;
    cout << "search - Search for a given performer." << endl;
    string command;
    cin >> command;
    if (command == "list"){
        displayListOfPerformers();
    }
    else if (command == "add"){
        string name;
        int age;
        cin >> name;
        cin >> age;

        //Performer newPerformer(name, age);
        //_service.addPerformer(newPerformer);

        //Villutjekk!!
    }
    else if(command =="search"){
        //TODO
    }
    else{
        cout << "Please enter valid command." << endl;
    }
}


void consoleUI::displayListOfPerformers(){
    vector<Performer> performers = _service.getPerformers();

    for(size_t i = 0; i < performers.size(); i++){
        cout << performers[i].getName() << endl;
    }
}
