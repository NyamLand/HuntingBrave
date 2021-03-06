
#include	"iextreme.h"
#include	"GlobalFunction.h"
#include	"DrawShape.h"
#include	"SmallEnemy.h"

//***************************************************************
//
//	SmallEnemyクラス
//
//***************************************************************

//------------------------------------------------------------------------------------
//	グローバル
//------------------------------------------------------------------------------------

//	モデル情報
#define	Y2009_SCALE	0.02f

//	動作スピード
#define	ANGLE_ADJUST_SPEED	0.3f
#define	MOVE_SPEED		0.5f

//	入力情報
#define	MIN_INPUT_STICK		0.3f


//------------------------------------------------------------------------------------
//	初期化・解放
//------------------------------------------------------------------------------------

//	コンストラクタ
SmallEnemy::SmallEnemy(void)
{

}

//	デストラクタ
SmallEnemy::~SmallEnemy(void)
{

}

//	初期化
bool	SmallEnemy::Initialize(void)
{
	//	読み込み
	Load("DATA/CHR/Y2009/Y2009.IEM");

	SetPos(Vector3(10.0f, 0.0f, 0.0f));
	SetAngle(0.0f);
	SetScale(Y2009_SCALE);
	SetMotion(1);	//	数値仮
	speed = MOVE_SPEED;

	//	関数ポインタ
	ModeFunction[MODE::MOVE] = &SmallEnemy::MoveMode;
	//ModeFunction[MODE::MOVE] = &Player::PostureMode;
	//ModeFunction[MODE::MOVE] = &Player::MoveMode;

	//	情報更新
	UpdateInfo();

	if (obj == nullptr)	return	false;
	return	true;
}

//	解放

//------------------------------------------------------------------------------------
//	更新・描画
//------------------------------------------------------------------------------------

//	更新
void	SmallEnemy::Update(void)
{
	//	各モードに応じた動作関数
	(this->*ModeFunction[MOVE/*仮*/])();

	//	更新
	BaseChara::Update();
}

//	描画
void	SmallEnemy::Render(iexShader* shader, LPSTR technique)
{
	drawShape->DrawSphere(GetPos(), 5.0f, 0xFFFFFFFF);
}

//------------------------------------------------------------------------------------
//	動作関数
//------------------------------------------------------------------------------------

//	移動モード動作
void	SmallEnemy::MoveMode(void)
{
	//	スティックによる移動
	Move();
}

//------------------------------------------------------------------------------------
//	動作関数
//------------------------------------------------------------------------------------

//	移動
void	SmallEnemy::Move(void)
{
	//	左スティックの入力チェック
	float	axisX = (float)input[0]->Get(KEY_AXISX);
	float	axisY = -(float)input[0]->Get(KEY_AXISY);
	float	length = sqrtf(axisX * axisX + axisY * axisY) * 0.001f;

	//	入力があれば移動処理
	if (length >= MIN_INPUT_STICK)
	{
		//	モーション設定
		SetMotion(4);	//	走りモーション

		//	向き調整
		AngleAdjust(
			Vector3(axisX, 0.0f, axisY),
			ANGLE_ADJUST_SPEED);

		//	移動
		SetMove(Vector3(sinf(angle), 0.0f, cosf(angle)) * speed);
	}
	else
	{
		//	モーション設定
		SetMotion(1);	//	待機モーション
	}
}

void	SmallEnemy::Attack()
{

}
//------------------------------------------------------------------------------------
//	情報設定
//------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------
//	情報取得
//------------------------------------------------------------------------------------

