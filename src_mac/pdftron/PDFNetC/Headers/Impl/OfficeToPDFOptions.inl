// This file is autogenerated: please see the codegen template "Options"
namespace pdftron{ namespace PDF{ 

inline OfficeToPDFOptions::OfficeToPDFOptions()
	: ConversionOptions()
{
}

inline OfficeToPDFOptions::~OfficeToPDFOptions()
{
}


inline bool OfficeToPDFOptions::GetApplyPageBreaksToSheet()
{
	SDF::Obj found = m_dict.FindObj("ApplyPageBreaksToSheet");
	if(found.IsValid())
	{
		return (found.GetBool());
	}
	return (false);
}

inline OfficeToPDFOptions& OfficeToPDFOptions::SetApplyPageBreaksToSheet(bool value)
{
	OptionsBase::PutBool(m_dict, "ApplyPageBreaksToSheet", (value));
	return *this;
}


inline bool OfficeToPDFOptions::GetDisplayChangeTracking()
{
	SDF::Obj found = m_dict.FindObj("DisplayChangeTracking");
	if(found.IsValid())
	{
		return (found.GetBool());
	}
	return (true);
}

inline OfficeToPDFOptions& OfficeToPDFOptions::SetDisplayChangeTracking(bool value)
{
	OptionsBase::PutBool(m_dict, "DisplayChangeTracking", (value));
	return *this;
}


inline double OfficeToPDFOptions::GetExcelDefaultCellBorderWidth()
{
	SDF::Obj found = m_dict.FindObj("ExcelDefaultCellBorderWidth");
	if(found.IsValid())
	{
		return (found.GetNumber());
	}
	return (0);
}

inline OfficeToPDFOptions& OfficeToPDFOptions::SetExcelDefaultCellBorderWidth(double value)
{
	OptionsBase::PutNumber(m_dict, "ExcelDefaultCellBorderWidth", (value));
	return *this;
}


inline UInt32 OfficeToPDFOptions::GetExcelMaxAllowedCellCount()
{
	SDF::Obj found = m_dict.FindObj("ExcelMaxAllowedCellCount");
	if(found.IsValid())
	{
		return (UInt32)(found.GetNumber());
	}
	return (UInt32)(0);
}

inline OfficeToPDFOptions& OfficeToPDFOptions::SetExcelMaxAllowedCellCount(UInt32 value)
{
	OptionsBase::PutNumber(m_dict, "ExcelMaxAllowedCellCount", (value));
	return *this;
}


inline UString OfficeToPDFOptions::GetLayoutResourcesPluginPath()
{
	SDF::Obj found = m_dict.FindObj("LayoutResourcesPluginPath");
	if(found.IsValid())
	{
		return (found.GetAsPDFText());
	}
	return ("");
}

inline OfficeToPDFOptions& OfficeToPDFOptions::SetLayoutResourcesPluginPath(UString value)
{
	OptionsBase::PutText(m_dict, "LayoutResourcesPluginPath", (value));
	return *this;
}


inline UString OfficeToPDFOptions::GetLocale()
{
	SDF::Obj found = m_dict.FindObj("Locale");
	if(found.IsValid())
	{
		return (found.GetAsPDFText());
	}
	return ("");
}

inline OfficeToPDFOptions& OfficeToPDFOptions::SetLocale(UString value)
{
	OptionsBase::PutText(m_dict, "Locale", (value));
	return *this;
}


inline UString OfficeToPDFOptions::GetResourceDocPath()
{
	SDF::Obj found = m_dict.FindObj("ResourceDocPath");
	if(found.IsValid())
	{
		return (found.GetAsPDFText());
	}
	return ("");
}

inline OfficeToPDFOptions& OfficeToPDFOptions::SetResourceDocPath(UString value)
{
	OptionsBase::PutText(m_dict, "ResourceDocPath", (value));
	return *this;
}


inline UString OfficeToPDFOptions::GetSmartSubstitutionPluginPath()
{
	SDF::Obj found = m_dict.FindObj("SmartSubstitutionPluginPath");
	if(found.IsValid())
	{
		return (found.GetAsPDFText());
	}
	return ("");
}

inline OfficeToPDFOptions& OfficeToPDFOptions::SetSmartSubstitutionPluginPath(UString value)
{
	OptionsBase::PutText(m_dict, "SmartSubstitutionPluginPath", (value));
	return *this;
}


inline UString OfficeToPDFOptions::GetTemplateParamsJson()
{
	SDF::Obj found = m_dict.FindObj("TemplateParamsJson");
	if(found.IsValid())
	{
		return (found.GetAsPDFText());
	}
	return ("");
}

inline OfficeToPDFOptions& OfficeToPDFOptions::SetTemplateParamsJson(UString value)
{
	OptionsBase::PutText(m_dict, "TemplateParamsJson", (value));
	return *this;
}


}
}
