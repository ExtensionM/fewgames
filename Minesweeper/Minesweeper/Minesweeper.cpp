#include "Minesweeper.h"
namespace Minesweeper{
	Game::Game(UniformGrid^ MainUniformGrid)
	{
		GameGrid = MainUniformGrid;
	}



	Game::~Game()
	{
	}

	void Game::StartGame(int Row, int Column, int MineCount){
		if (Running()){
			EndGame();
		}
		Buttons = gcnew array < Button^ >(Row*Column);
		GameGrid->Rows = Row;
		GameGrid->Columns = Column;
		for (int y = 0; y < Row; y++)
		{
			for (int x = 0; x < Column; x++)
			{
				Buttons[x + y*Column] = gcnew Button();
				Button^ Btn = Buttons[x + y*Column];
				Btn->Height = 24;
				Btn->Width = 24;
				Btn->Content = x.ToString() + y.ToString();
				GameGrid->Children->Add(Btn);
			}
		}
		Running_ = true;
	}
	void Game::EndGame(){
		if (Running()){
			GameGrid->Children->Clear();
			for each (Button^ btn in Buttons)
			{
				delete btn;
			}
			delete Buttons;
			Running_ = false;
		}

	}
}
