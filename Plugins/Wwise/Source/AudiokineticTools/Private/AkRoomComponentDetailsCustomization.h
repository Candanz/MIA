// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PropertyEditorModule.h"
#include "IDetailCustomization.h"
//////////////////////////////////////////////////////////////////////////
// FAkRoomComponentDetailsCustomization

class FAkRoomComponentDetailsCustomization : public IDetailCustomization
{
public:
	FAkRoomComponentDetailsCustomization();
	// Makes a new instance of this detail layout class for a specific detail view requesting it
	static TSharedRef<IDetailCustomization> MakeInstance();

	// IDetailCustomization interface
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLayout) override;
	// End of IDetailCustomization interface

private:
	IDetailLayoutBuilder* MyDetailLayout;
	void OnEnableValueChanged();

};
