using namespace System;
using namespace System::Windows;
using namespace System::Windows::Controls;
using namespace System::Windows::Media;


namespace Minesweeper{
	public ref  class MainWindow :public System::Windows::Window
	{
	public:
		MainWindow();
		~MainWindow();

	private:
		void OnLoaded(Object^ sender, RoutedEventArgs^ e);

		
		Grid^ MyGrid = nullptr;

	};

}