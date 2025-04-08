// Fill out your copyright notice in the Description page of Project Settings.


#include "SerializableComponentActor.h"
#include "Engine/World.h"

// Sets default values
ASerializableComponentActor::ASerializableComponentActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASerializableComponentActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASerializableComponentActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASerializableComponentActor::MakeComponentSerializeable(UActorComponent* Component)
{
#if WITH_EDITOR
	if (GetWorld() && GetWorld()->IsGameWorld())
	{
		return;
	}

	if (Component)
	{
		AddInstanceComponent(Component);
	}
#else
#endif
}

void ASerializableComponentActor::ClearSerializeableComponentsOfClass(TSubclassOf<UActorComponent> ComponentClass)
{
#if WITH_EDITOR
	if (GetWorld() && GetWorld()->IsGameWorld())
	{
		return;
	}

	if (!IsValid(ComponentClass))
	{
		return;
	}

	TArray<UActorComponent*> CachedComponents(GetInstanceComponents());
	for (int32 Index = CachedComponents.Num() - 1; Index >= 0; --Index)
	{
		if (CachedComponents[Index] && CachedComponents[Index]->IsA(ComponentClass.Get()))
		{
			RemoveInstanceComponent(CachedComponents[Index]);
			CachedComponents[Index]->DestroyComponent();
		}
	}

#else
#endif
}

