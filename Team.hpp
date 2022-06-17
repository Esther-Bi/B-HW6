#ifndef Team_HEADER
#define Team_HEADER

#include <iostream>
#include <string.h>

namespace esther{

    class Team{

        private:
            std::string name;
            double talent;

        public:
            int _winRowsMax;
            int _loss; // all losses
            int _victory; // all wins
            int _points;
            int _inRow;

            Team(std::string name,double talent);
            
            std::string get_name();
            void set_name(std::string name);
            double get_talent();
            void set_talent();
            void win(bool in_a_row);
            bool operator<(const Team & team);
            friend bool operator<(const Team & team1,const Team & ream2);
            friend std::ostream &operator<<(std::ostream &os,Team &team);
            ~Team();
    };
}


#endif