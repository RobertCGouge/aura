// Copyright Robert Gouge 2025

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()

public:
	AAuraCharacter();
	
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	/*Combat Interfance*/
	virtual int32 GetPlayerLevel() override;
	/*End Combat Interfance*/

	
private:
	void InitAbilityActorInfo() override;
};
