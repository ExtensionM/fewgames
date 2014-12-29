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
	}

	void MainWindow::UIinit(){
		this->MyGrid = gcnew Grid();
		this->HeaderRow = gcnew RowDefinition();
		this->SpqceRow = gcnew RowDefinition();
		this->GameRow = gcnew RowDefinition();

		this->GameGrid = gcnew Grid();
		
		this->HeaderRow->Height = GridLength(30);
		this->SpqceRow->Height = GridLength(10);
		this->GameRow->Height = GridLength(1, GridUnitType::Star);

		this->MyGrid->RowDefinitions->Add(this->HeaderRow);
		this->MyGrid->RowDefinitions->Add(this->SpqceRow);
		this->MyGrid->RowDefinitions->Add(this->GameRow);

		
		this->GameGrid->Margin = Thickness(5, 5, 5, 5);
		this->GameGrid->Background = gcnew SolidColorBrush(Color::FromRgb(200, 200, 200));
		Grid::SetRow(this->GameGrid, 2);

		this->MyGrid->Children->Add(this->GameGrid);

		this->AddChild(this->MyGrid);
	}
}