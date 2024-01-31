
#include "User.h"
#include "Team.h"
#include <iostream>
using namespace std;
int main()
{
    Admin a1("Katya", "ala");
    
    Team team("Liverpool", "Liverpool");
    Team team("Barcelona", "Barcelona");
    Team team("Inter", "Milan");

    a1.addTeam(team);
    a1.addTeam(team2);
    a1.addTeam(team3);

    Team t4("Liverpool", "Haskovo");
    a1.updateTeam(t4);

    for (Team t = a1.getTeam())
    {
        cout << t.getName() << " " << t.getCity() << endl;
    }

    
    return 0;
}


