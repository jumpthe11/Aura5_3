// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraEnemy.h"

void AAuraEnemy::HighlightActor()
{
	bHighlighted=true;
	//UE_LOG(LogTemp,Display,TEXT("Highlighted enemy"))
}

void AAuraEnemy::UnHighlightActor()
{
	bHighlighted=false;
	UE_LOG(LogTemp,Display,TEXT("UN-Highlighted enemy"))

}
