
#pragma once

//***************************************************************
//
//	UIManagerクラス
//
//***************************************************************

//	include
#include	"Singleton.h"
#include	"GameManager.h"
#include	"TimerUI.h"

//	class
class UIManager : public Singleton<UIManager> 
{
	//	コンストラクタを呼ぶためにfriend設定
	friend Singleton<UIManager>;

private:
	//	初期化・解放
	UIManager(void);
	~UIManager(void)override;

private:
	TimerUI* timerUI;

public:
	//	初期化・解放
	bool	Initialize(void)override;
	void	Release(void)override;

	//	更新・描画
	void	Update(void);
	void	Render(void);
};

#define	uiManager ( UIManager::GetInstance() )
