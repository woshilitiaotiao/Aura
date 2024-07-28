// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AuraAiController.h"

#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"


// Sets default values
AAuraAiController::AAuraAiController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Blackboard = CreateDefaultSubobject<UBlackboardComponent>("BlackboardComponent");
	check(Blackboard);
	
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>("BehaviorTreeComponent");
	check(BehaviorTreeComponent);
}

// Called when the game starts or when spawned
void AAuraAiController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAuraAiController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

