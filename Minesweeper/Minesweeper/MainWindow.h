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

		void UIinit();

		//一番上のグリッド
		Grid^ MyGrid;
		//RowDefinetions
		//ヘッダ
		RowDefinition^ HeaderRow;
		//隙間
		RowDefinition^ SpqceRow;
		//ゲーム
		RowDefinition^ GameRow;
		//ゲームをここに作る
		Grid^ GameGrid;

	};

}


/*
<Window>
<Grid>
<RowDefinetion1>
ヘッダ
</RowDefinetion1>
<RowDefinetion2>
隙間
</RowDefinetion2>
<RowDefinetion3>
ゲーム
</RowDefinetion3>
</Grid>
</Window>



*/