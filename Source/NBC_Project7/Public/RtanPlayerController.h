#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RtanPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;


UCLASS()
class NBC_PROJECT7_API ARtanPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ARtanPlayerController();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* LookAction;
	


protected:
	virtual void BeginPlay() override;

};
