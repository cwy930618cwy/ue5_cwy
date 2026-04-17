// 请在项目设置的描述页面填写版权声明。

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class MYAPP_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// 设置角色属性的默认值
	APlayerCharacter();

protected:
	// 游戏开始或角色生成时调用
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "U|test", meta = (AllowPrivateAccess = "true"))
	float testLenll111;

public:	
	// 每帧调用
	virtual void Tick(float DeltaTime) override;

	// 用于绑定输入功能
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
