//---------------------------------------------------------------------------------------
// Copyright (c) 2001-2021 by PDFTron Systems Inc. All Rights Reserved.
// Consult legal.txt regarding legal and license information.
//---------------------------------------------------------------------------------------
// !Warning! This file is autogenerated, modify the .codegen file, not this one
// (any changes here will be wiped out during the autogen process)

#ifndef PDFTRON_H_CPPPDFReflow
#define PDFTRON_H_CPPPDFReflow
#include <C/PDF/TRN_Reflow.h>

#include <Common/BasicTypes.h>
#include <Common/UString.h>
#include <PDF/PDFDoc.h>

namespace pdftron { namespace PDF { 


/**
 * The class Reflow.
 * Reflow annotations between PDF and HTML
 *
 * DocumentConversion instances are created through methods belonging to
 * the Convert class. See Convert.ReflowWithPage for an example.
 */
class Reflow
{
public:
		Reflow();
	Reflow(const Reflow& other);
	Reflow(TRN_Reflow impl);
	Reflow& operator= (const Reflow& other);
	~Reflow();
	
	void Destroy();

	//methods:
	
	/**
	 * Converts PDF to HTML.
	 * 
	 * @return returns HTML as a string.
	 */
	UString GetHtml();
	
	/**
	 * Gets PDF annotation(s) as JSON.
	 * 
	 * @param in_id -- an annotation ID, or an empty string.
	 * @return returns JSON string.
	 */
	UString GetAnnot(UString in_id);
	
	/**
	 * Updates PDF annotation.
	 * 
	 * @param in_json -- update instructions (JSON).
	 * @return returns JSON string.
	 */
	UString SetAnnot(UString in_json);

#ifndef SWIGHIDDEN
	TRN_Reflow m_impl;
#endif

private:

#ifndef SWIGHIDDEN
	mutable bool m_owner; 
#endif
};

#include <Impl/Reflow.inl>
} //end pdftron
} //end PDF


#endif //PDFTRON_H_CPPPDFReflow
