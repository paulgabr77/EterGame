#ifndef MATCH_H
#define MATCH_H

#include "Table.h"
#include "Player.h"
#include <iostream>
#include <memory>

namespace match {
	class Match {
	private:
		bool m_isFinish{false};
		std::unique_ptr <table::Table> m_table{ std::make_unique <table::Table>()};
		std::string m_currentPlayer{""};
	public:
		Match()=default;
		Match(std::unique_ptr < table::Table> table, std::string currentPlayer);
		~Match() = default;


		void setTable(std::unique_ptr < table::Table> newTable);
		table::Table* getTable() const;

		std::string isWinner(std::string player1Name, std::string player2Name,bool isNoCardsLeft,int row,int column);

		std::string getCurrentPlayer() const;
		void setCurrentPlayer(std::string newCurentPlayer);
	};

}
#endif //MATCH_H