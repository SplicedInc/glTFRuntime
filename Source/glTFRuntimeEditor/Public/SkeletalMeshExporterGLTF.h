// Copyright 2020, Roberto De Ioris.

#pragma once

#include "CoreMinimal.h"
#include "SkeletonExporterGLTF.h"
#if 0 // We already have an exporter from epic. Registering multiple causes issues.
#include "SkeletalMeshExporterGLTF.generated.h"

class FglTFExportContextSkeletalMesh : public FglTFExportContextSkeleton
{
public:
	void GenerateSkeletalMesh(USkeletalMesh* SkeletalMesh);
};

/**
 * 
 */
UCLASS()
class GLTFRUNTIMEEDITOR_API USkeletalMeshExporterGLTF : public USkeletonExporterGLTF
{
	GENERATED_UCLASS_BODY()
	
public:
	virtual bool ExportText(const FExportObjectInnerContext* Context, UObject* Object, const TCHAR* Type, FOutputDevice& Ar, FFeedbackContext* Warn, uint32 PortFlags) override;
};
#endif