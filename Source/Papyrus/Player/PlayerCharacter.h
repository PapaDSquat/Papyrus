#pragma once

#include "GameFramework/Character.h"

#include "CoreMinimal.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class PAPYRUS_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
