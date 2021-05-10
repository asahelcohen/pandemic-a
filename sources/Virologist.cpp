#include "Virologist.hpp"

namespace pandemic
{
    Virologist &Virologist::treat(City c)
    {
        if (gameBoard.cityNum.at(c) == 0)
        {
            throw runtime_error("there is nobody to treat there!");
        }
        if (cards.find(c) != cards.end())
        {
            Color temp = pandemic::Board::cityColor.at(c);
            if (gameBoard.DiscoveredCures.at(temp))
            {
                gameBoard.cityNum.at(location) = 0;
            }
            else
            {
                gameBoard.cityNum.at(location) -= 1;
            }
            cards.erase(c);
        }
        else{
            throw runtime_error("you need city card to treat");
        }

        return *this;
    }

    string Virologist::role()
    {
        return "Virologist";
    }
};