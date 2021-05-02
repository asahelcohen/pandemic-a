#include "Player.hpp"
#include <string>

namespace pandemic
{
    Player::Player(Board &b, City startCity) : gameBoard(b), location(startCity){}
    City &location(City);
    // cards

    Player &Player::drive(City c)
    {
        return *this;
    }
    Player &Player::fly_direct(City c)
    {
        return *this;
    }
    Player &Player::fly_charter(City c)
    {
        return *this;
    }
    Player &Player::fly_shuttle(City c)
    {
        return *this;
    }

    Player &Player::build()
    {
        return *this;
    }
    Player &Player::discover_cure(Color c)
    {
        return *this;
    }
    Player &Player::treat(City c)
    {
        return *this;
    }

    string Player::role()
    {
        return "s";
    }
    Player Player::take_card(City)
    {
        return *this;
    }
};