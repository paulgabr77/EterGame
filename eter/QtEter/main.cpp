#include "Eter.h"
#include <QtWidgets/QApplication>
#include "Game.h"
#include <windows.h>

int main(int argc, char *argv[])
{

    //Interfata QT

 /*   QApplication a(argc, argv);
    Eter w;
    w.show();
    return a.exec();*/



    //Interfata in consola


    int gameModeSelected;
    std::string player1, player2;
    std::unique_ptr<game::Game> myGame = std::make_unique <game::Game>();

    std::cout << "1.Training" << std::endl << "2.Duel of Wizards" << std::endl << "alege modul de joc: ";
    std::cin >> gameModeSelected;
    std::cout << "nume player 1:" << std::endl;
    std::cin >> player1;
    std::cout << "nume player 2:" << std::endl;
    std::cin >> player2;

    myGame->selectGamemode(gameModeSelected, player1, player2,0,0);
    while (!myGame->isFinish()) {
        int x, y, value, ilusion;
        bool viz=true;
        do {

            myGame->showScore();
            myGame->showCurrentPlayer();
            myGame->showWizard();
            myGame->showCards();

            if (!viz) std::cout << "Mutarea este invalida, incearca altceva" << std::endl;

            myGame->showBoard();   

            if(myGame->getGameModeType() != "Training"){
                bool powerViz = true;
                while (powerViz) {
                    powerViz = false;
                    int powerUse, pointsNeededForPower = myGame->pointsNeededForPower();
                    std::cout << "-este folosita puterea (true=1/false=0): ";
                    std::cin >> powerUse;
                    if (powerUse == 1) {
                        int firstPointX,firstPointY;
                        if (pointsNeededForPower == 0){
                            if(myGame->usePower()) std::cout << "magia a fost folosita" << std::endl;
                            else {
                                powerViz = true;
                                std::cout << "magia nu poate fi folosita" << std::endl;
                            }
                        }
                        else if (pointsNeededForPower > 0) {
                            std::cout << "-selecteaza unde sa fie aplicata magia: ";
                            std::cin >> firstPointX >> firstPointY;
                            if (pointsNeededForPower == 2) {
                                int secondPointX, secondPointY;
                                std::cout << "-selecteaza inca un spatiu pentru a determina randul sau coloana: ";
                                std::cin >> secondPointX >> secondPointY;
                                if(myGame->usePower(firstPointX, firstPointY, secondPointX, secondPointY))
                                    std::cout << "magia a fost folosita"<<std::endl;
                                else {
                                    powerViz = true;
                                    std::cout << "magia nu poate fi folosita" << std::endl;
                                }
                            
                            }
                            else{
                                if (myGame->usePower(firstPointX, firstPointY)) {
                                    std::cout << "magia a fost folosita" << std::endl;
                                }
                                else {
                                    powerViz = true;
                                    std::cout << "magia nu poate fi folosita" << std::endl;
                                }
                            }
                        }
                        myGame->showBoard();
                        myGame->showCards();
                    }
                }
            }

            std::cout << "-alege o carte: ";
            std::cin >> value;

            /*std::cout << "-este iluzie (true=1/false=0): ";
            std::cin >> ilusion;
            */
            std::cout << "-alege spatiul: ";
            std::cin >> x >> y;

            if (myGame->makeMove(value, x, y, ilusion)) viz = true;
            else viz = false;
        } while (!viz);
    }
    myGame->showWinner();

    return 0;
}
