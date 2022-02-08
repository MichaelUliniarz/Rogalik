#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RogHealthComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROGALIK_API URogHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URogHealthComponent();

	UFUNCTION()
	void TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);

protected:
	
	// Called when the game starts
	virtual void BeginPlay() override;

	float MaxHealth = 100;
	float CurrentHealth;
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;		
};
