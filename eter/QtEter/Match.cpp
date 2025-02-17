
#include "Match.h"
#include <iostream>;
#include "Table.h";
#include "Player.h";
#include "Card.h";
#include <memory>

namespace match {
	Match::Match(std::unique_ptr <table::Table> table, std::string currentPlayer)
	{
		m_isFinish = false;
		m_table = std::move(table);
		m_currentPlayer = currentPlayer;
	}
	std::string Match::getCurrentPlayer() const {
		return m_currentPlayer;
	}

	void Match::setCurrentPlayer(std::string newCurentPlayer)
	{
		m_currentPlayer = newCurentPlayer;
	}

	void Match::setTable(std::unique_ptr < table::Table> newTable) {
		m_table = std::move(newTable);
	}

	table::Table* Match::getTable() const {
		return m_table.get();
	}

	std::string Match::isWinner(std::string player1Name, std::string player2Name, bool isNoCardsLeft, int row, int column)
	{
		std::string winner = m_table->isWinningLine();
		if (winner != "none") return winner;
		if (isNoCardsLeft) return m_table->isWinningScore(player1Name, player2Name);
		return "none";
	}
}