#include "MainWindow.h"

namespace Minesweeper{
	MainWindow::MainWindow()
	{
		this->Title = "Minesweeper";
		this->Height = 300;
		this->Width = 450;
		this->Loaded += gcnew RoutedEventHandler(this, &MainWindow::OnLoaded);
	}
	MainWindow::~MainWindow()
	{
	}
	void MainWindow::OnLoaded(Object^ sender, RoutedEventArgs^ e){
		UIinit();
		MainGame = gcnew Game(GameUniformGrid);
	}
	void MainWindow::NewGameClicked(Object^ sender, RoutedEventArgs^ e){
		MessageBox::Show("V‚µ‚¢ƒQ[ƒ€");
		MainGame->StartGame(5, 8, 10);
	}

	void MainWindow::UIinit(){
		MyGrid = gcnew Grid();
		HeaderRow = gcnew RowDefinition();
		SpqceRow = gcnew RowDefinition();
		GameRow = gcnew RowDefinition();
		GameView = gcnew Viewbox();
		GameUniformGrid = gcnew UniformGrid();
		TopMenu = gcnew Menu();



		HeaderRow->Height = GridLength(21);
		SpqceRow->Height = GridLength(10);
		GameRow->Height = GridLength(1, GridUnitType::Star);

		MyGrid->RowDefinitions->Add(HeaderRow);
		MyGrid->RowDefinitions->Add(SpqceRow);
		MyGrid->RowDefinitions->Add(GameRow);


		GameView->Margin = Thickness(5, 5, 5, 5);
		GameView->Stretch = Stretch::Uniform;
		Grid::SetRow(GameView, 2);


		GameMenu = gcnew MenuItem();
		GameMenu->Header = "ƒQ[ƒ€";
		NewGameMenuItem = gcnew MenuItem();
		NewGameMenuItem->Header = "V‚µ‚¢ƒQ[ƒ€";
		NewGameMenuItem->Click += gcnew RoutedEventHandler(this, &MainWindow::NewGameClicked);

		GameMenu->Items->Add(NewGameMenuItem);
		TopMenu->Items->Add(GameMenu);
		

		Grid::SetRow(TopMenu, 0);

		GameView->Child = GameUniformGrid;

		MyGrid->Children->Add(GameView);
		MyGrid->Children->Add(TopMenu);

		AddChild(MyGrid);
	}
}