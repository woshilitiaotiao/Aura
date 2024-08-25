// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTService_FindNearestPlayer.h"
#include "AIController.h"
#include "BehaviorTree/BTFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"

void UBTService_FindNearestPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	const APawn* OwningPawn = AIOwner->GetPawn();

	const FName TargetTag =  OwningPawn->ActorHasTag(FName("Player")) ? FName("Enemy") : FName("Player");

	TArray<AActor*> ActorsWithTag;
	UGameplayStatics::GetAllActorsWithTag(OwningPawn, TargetTag, ActorsWithTag);

	float ClosestDistance = TNumericLimits<float>::Max();
	AActor* ClosestActor = nullptr;
	
	for(AActor* tmp : ActorsWithTag)
	{
		//GEngine->AddOnScreenDebugMessage(-1, .5f, FColor::Orange, tmp->GetName());
		if(IsValid(tmp) && IsValid(OwningPawn))
		{
			const float Distance = OwningPawn->GetDistanceTo(tmp);
			if(Distance < ClosestDistance)
			{
				ClosestDistance = Distance;
				ClosestActor = tmp;
			}
		}
	}
	UBTFunctionLibrary::SetBlackboardValueAsObject(this, TargetToFollowSelector, ClosestActor);
	UBTFunctionLibrary::SetBlackboardValueAsFloat(this, DisranceToTargetSelector, ClosestDistance);
}
