#pragma once
#include "AbstractScene.h"
#include "common.h"

//�f�t�H���g�̒��ۃV�[���N���X
//���[�U�[�͂�����p�����ăV�[������������Ɗy
class GameMainScene :public AbstractScene 
{
private:


public:
	//�f�X�g���N�^
	virtual ~GameMainScene()
	{
	
	};
	//�`��ȊO�̍X�V����������
	virtual AbstractScene* Update() override;

	//�`��Ɋւ��鎖����������
	virtual void Draw() const override;
};


