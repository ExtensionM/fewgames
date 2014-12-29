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

		//��ԏ�̃O���b�h
		Grid^ MyGrid;
		//RowDefinetions
		//�w�b�_
		RowDefinition^ HeaderRow;
		//����
		RowDefinition^ SpqceRow;
		//�Q�[��
		RowDefinition^ GameRow;
		//�Q�[���������ɍ��
		Grid^ GameGrid;

	};

}


/*
<Window>
<Grid>
<RowDefinetion1>
�w�b�_
</RowDefinetion1>
<RowDefinetion2>
����
</RowDefinetion2>
<RowDefinetion3>
�Q�[��
</RowDefinetion3>
</Grid>
</Window>



*/