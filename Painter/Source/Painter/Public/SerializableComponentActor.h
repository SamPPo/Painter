// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SerializableComponentActor.generated.h"

UCLASS(Abstract, Blueprintable)
class PAINTER_API ASerializableComponentActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASerializableComponentActor();

	/**
	* Marks component serializeable, so it would be loaded from disk
	* Only editor.
	*/
	UFUNCTION(BlueprintCallable, Category = "SerializableActor")
	void MakeComponentSerializeable(UActorComponent* Component);

	/**
	 * Clears serializeable components of given class
	 * Only editor.
	 */
	UFUNCTION(BlueprintCallable, Category = "SerializableActor")
	void ClearSerializeableComponentsOfClass(TSubclassOf<UActorComponent> ComponentClass);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
