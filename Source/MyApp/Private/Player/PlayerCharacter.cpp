// 请在项目设置的描述页面填写版权声明。


#include "Player/PlayerCharacter.h"

// 设置默认值
APlayerCharacter::APlayerCharacter()
{
 	// 设置角色每帧调用 Tick()。如果不需要可以关闭，以提升性能。
	PrimaryActorTick.bCanEverTick = true;

}

// 游戏开始或角色生成时调用
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// 每帧调用
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// 用于绑定输入功能
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
