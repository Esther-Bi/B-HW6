#include "game.hpp"

namespace esther{
    
    Game::Game(Team* home,Team* away){
        this->_home = home;
        this->_away = away;
    }

    int Game::rand_num(int range_from, int range_to){
        int random_num = (rand()%(range_to-range_from)) + range_from;
        return random_num;
    }

    Team* Game::start(){
        int home_points = rand_num(55,100) + (int)(this->_home->get_talent() * 10);
        int away_points = rand_num(50,100) + (int)(this->_away->get_talent() * 10);

        if (home_points >= away_points){
            this->_home->_victory++;
            this->_away->_loss++;
            this->_home->win(true);
            this->_away->win(false);

            this->_home->_points += home_points;
            this->_home->_points -= away_points;
            this->_away->_points += away_points;
            this->_away->_points -= home_points;

            return this->_home;
        }
        this->_home->_loss++;
        this->_away->_victory++;
        this->_home->win(false);
        this->_away->win(true);

        this->_home->_points += home_points;
        this->_home->_points -= away_points;
        this->_away->_points += away_points;
        this->_away->_points -= home_points;

        return this->_away;
    }

    Game::~Game(){
    }
}