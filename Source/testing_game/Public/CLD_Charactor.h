// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CLD_Charactor.generated.h"


class UCameraComponent;
class USpringArmComponent;


UCLASS()
class TESTING_GAME_API ACLD_Charactor : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACLD_Charactor();

protected:

	UPROPERTY(visibleAnywhere)
	USpringArmComponent* SpringArmComp;

	UPROPERTY(visibleAnywhere)
	UCameraComponent* CameraComp;


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
