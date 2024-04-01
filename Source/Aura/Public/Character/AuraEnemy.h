﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();

	/* Enemy Interface */
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	/* end Enemy Interface */

	/* Combat Interface */
	virtual int32 GetPlayerLevel() override;
	/* end Combat Interface */

protected:
	virtual void BeginPlay() override;
	
	virtual void InitAbilityActorInfo() override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Character Class Defaults")
	int32 Level = 1;
};
