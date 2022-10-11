// Fill out your copyright notice in the Description page of Project Settings.


#include "CLD_Charactor.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera\CameraComponent.h"

// Sets default values
ACLD_Charactor::ACLD_Charactor()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComp");
	SpringArmComp->SetupAttachment(RootComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");
	CameraComp->SetupAttachment(SpringArmComp);


}

// Called when the game starts or when spawned
void ACLD_Charactor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACLD_Charactor::MoveForward(float value)
{
	AddMovementInput(GetActorForwardVector(),value);
}

// Called every frame
void ACLD_Charactor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACLD_Charactor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACLD_Charactor::MoveForward);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);

}

