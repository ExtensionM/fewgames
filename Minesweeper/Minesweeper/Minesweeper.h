using namespace System;
using namespace System::Windows;
using namespace System::Windows::Controls;
using namespace System::Windows::Media;
using namespace System::Windows::Controls::Primitives;


namespace Minesweeper{
	public	ref  class Game :public Object
	{
	public:
		Game(UniformGrid^ MainUniformGrid);
		~Game();
		void StartGame(int Row, int Column, int MineCount);

		void EndGame();

		bool Running(){ return Running_; };
	private:
		UniformGrid^ GameGrid;
		
		bool Running_ = false;

		array < Button^ >^ Buttons;
	};


}