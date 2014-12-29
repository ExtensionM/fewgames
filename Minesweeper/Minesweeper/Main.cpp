#include "Application.h"
#include "MainWindow.h"

[STAThreadAttribute()]
int main(){
	
	System::Console::WriteLine("Started");
	Minesweeper::MyApplication ^MyApp = gcnew Minesweeper::MyApplication();
	Minesweeper::MainWindow ^Main = gcnew Minesweeper::MainWindow();


	MyApp->Run(Main);

	return 0;
}