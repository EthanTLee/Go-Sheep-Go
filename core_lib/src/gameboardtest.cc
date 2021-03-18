/* #include "GoSheepGo/gameboarddrawer.hh"
#include "GoSheepGo/gameboard.hh"
#include <iostream>
#include <string>

std::string get_input() {
    std::cout << "please enter a number" <<std::endl;
    std::string input;
    std::cin >> input;
    return input;
} 

void gameboardtest() {
    Gameboarddrawer gameboarddrawer;
    Gameboard<5> gameboard;

    while (gameboarddrawer.draw()) {
        for (int i = 0; gameboard.m_board.size(); i++) {
            for (int j=0; gameboard.m_board.at(0).size(); j++) {
                gameboarddrawer.add_element({i,j}, gameboard.m_board.at(i).at(j));
            }
        }
        
    }
}

*/

