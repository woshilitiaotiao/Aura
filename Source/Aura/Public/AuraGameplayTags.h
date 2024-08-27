// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/**
 * AuraGameplayTags
 *
 * Singleton containing native Gameplat Tags
 */

struct FAuraGameplayTags
{
public:
 static const FAuraGameplayTags& Get(){ return GameplayTags; }
 static void InitializeNativeGameplayTags();

 FGameplayTag Attribute_Primary_Strength;
 FGameplayTag Attribute_Primary_Intelligence;
 FGameplayTag Attribute_Primary_Resilience;
 FGameplayTag Attribute_Primary_Vigor;
 
 FGameplayTag Attribute_Secondary_Armor;
 FGameplayTag Attribute_Secondary_ArmorPenetration;
 FGameplayTag Attribute_Secondary_BlockChance;
 FGameplayTag Attribute_Secondary_CriticalHitChance;
 FGameplayTag Attribute_Secondary_CriticalHitResistance;
 FGameplayTag Attribute_Secondary_CriticalHitDamage;
 FGameplayTag Attribute_Secondary_HealthRegeneration;
 FGameplayTag Attribute_Secondary_ManaRegeneration;
 FGameplayTag Attribute_Secondary_MaxHealth;
 FGameplayTag Attribute_Secondary_MaxMana;

 FGameplayTag Attribute_Resistance_Fire;
 FGameplayTag Attribute_Resistance_Lightning;
 FGameplayTag Attribute_Resistance_Arcane;
 FGameplayTag Attribute_Resistance_Physical;

 FGameplayTag InputTag_LMB;
 FGameplayTag InputTag_RMB;
 FGameplayTag InputTag_1;
 FGameplayTag InputTag_2;
 FGameplayTag InputTag_3;
 FGameplayTag InputTag_4;

 FGameplayTag Damage;
 FGameplayTag Damage_Fire;
 FGameplayTag Damage_Lightning;
 FGameplayTag Damage_Arcane;
 FGameplayTag Damage_Physical;

 FGameplayTag Abilities_Attack; 

 FGameplayTag Montage_Attack_Weapon;
 FGameplayTag Montage_Attack_RightHand; 
 FGameplayTag Montage_Attack_LeftHand;
 
 TMap<FGameplayTag, FGameplayTag> DamageTypesToResistances;
 
 FGameplayTag Effect_HitReact;
protected:

private:
 static FAuraGameplayTags GameplayTags;
};

