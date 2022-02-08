#include "Components/RogHealthComponent.h"

// Sets default values for this component's properties
URogHealthComponent::URogHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = true;	
}

void URogHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
	AController* InstigatedBy, AActor* DamageCauser)
{
	if(Damage <= 0 || CurrentHealth <= 0) return;
	
	CurrentHealth = FMath::Clamp(CurrentHealth - Damage, 0.0f, MaxHealth);
	
	// todo setup below
	/*if(CurrentHealth <= 0)
	{
		IsAlive = false;
		DeathEvent.Broadcast();
	}*/
}


// Called when the game starts
void URogHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;	
}


// Called every frame
void URogHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
}

