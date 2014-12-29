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
		this->MyGrid = gcnew Grid();
		Color c = Colors::White;

		SolidColorBrush^ Brush = gcnew SolidColorBrush(c);
		this->MyGrid->Background = Brush;
		this->AddChild(this->MyGrid);
		this->MyGrid->Margin = Thickness(0, 0, 0, 0);
		this->VerticalAlignment = System::Windows::VerticalAlignment::Stretch;
		this->HorizontalAlignment = System::Windows::HorizontalAlignment::Stretch;
	}


}