# 🔮 Eter Game - A Strategic Duel of Wizards 🧙‍♀️🧙‍♂️

Eter is a **turn-based strategy game** designed for two players. Drawing inspiration from timeless classics like **Tic-Tac-Toe** and **Connect 4**, Eter introduces unique mechanics that infuse the gameplay with **magical elements** and **deep strategy**. Players strategically place and stack numbered cards across a dynamic board while wielding powerful spells to influence the game's progression! 📝🎴

## 📖 Core Rules
⚜️ **Playing Field**: A dynamic 3x3 or 4x4 grid.
⚜️ **Card System**: Each player controls numbered cards (1-4) and one special "Eter" card.
⚜️ **Placement Rules**:
* **Empty Space Placement**: Cards can be placed on vacant spots (adjacent to another card).
* **Stacking Mechanism**: Cards can be placed on top of others if their value is strictly higher.
⚜️ **The Eter Card**: Possesses a fixed value of 1, cannot be covered by other cards, and contributes toward victory conditions.
⚜️ **Victory Conditions**:
* Creating a line (row, column, or diagonal) with your visible cards.
* Complete board occupation.
* Opponent runs out of playable cards.
* If none apply, the highest visible score wins! 🏅

## ⚔️ Distinctive Features
🎲 **Game Variants**:
* 🌟 **Duel of Wizards** – Competitive mode featuring magical abilities.
* 📊 **Training Arena** – Perfect for practicing strategies.

🎯 **Magical Abilities**:
* 💫 Eliminate an opponent's card.
* 🌪️ Clear an entire row or column.
* 🛡️ Place a cover over an opponent's card.
* ⌛ Create a trap space on the board.
* 🎪 Reorder your card stack.
* 🔁 Relocate the opponent's card stack.
* 📑 Manipulate the board boundaries.

🌋 **Explosion System**: When the board becomes congested, players can trigger **strategic explosions** that redistribute cards, dramatically altering the state of play! 💥

## 🔧 Technical Requirements
⚜️ **Qt Framework** – Powers the graphical interface.
⚜️ **Standard Template Library (STL)** – Handles data management and game logic.

## 📚 Code Architecture
📋 **Primary Game Components**:
* `Eter.cpp` – Manages UI initialization and menu systems.
* `Game.cpp` – Controls game logic, turn progression, and victory conditions.
* `DuelOfWizards.cpp` – Implements the wizard duel mode with magical abilities.
* `Explosion.cpp` – Governs the explosion mechanics.

📋 **Essential Structures**:
* `Card.h` – Defines the game's card system.
* `Match.h` – Oversees the current gameplay session.
* `Table.h` – Manages the game board and its interactions.
* `Player.h` – Tracks player status, scores, and card collections.
* `Gamemode.h` – Specifies available game modes and their rules.

## 🎯 Gameplay Instructions
1️⃣ Start the application and select your preferred game mode.
2️⃣ Deploy your cards with tactical precision and leverage magical powers.
3️⃣ Outmaneuver your opponent to achieve victory! 🏆

## 💻 Developer
Project created by a team consisting of **Paul-Gabriel Ilie**, **Ciprian Dumitrașc**, **Mădălin Cazan**, and **Damian Ungureanu**. 🚀
