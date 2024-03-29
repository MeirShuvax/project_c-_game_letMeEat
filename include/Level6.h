#pragma once
#include "LevelBase.h"


//responsible for the different stages of the game, 
//loading objects respectively and more - inherit from LevelBase.

class Level6 : public LevelBase, public Button
{
public:
	std::shared_ptr<LevelBase> copyMy() override;
	Level6();
	~Level6() = default;
	void showContentButton(GameController& game, GameBoard& board);



};
