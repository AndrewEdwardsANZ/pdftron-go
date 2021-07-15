//---------------------------------------------------------------------------------------
// Copyright (c) 2001-2021 by PDFTron Systems Inc. All Rights Reserved.
// Consult legal.txt regarding legal and license information.
//---------------------------------------------------------------------------------------
// !Warning! This file is autogenerated, modify the .codegen file, not this one
// (any changes here will be wiped out during the autogen process)

#ifndef PDFTRON_H_CPPPDFPDF2HtmlReflowParagraphsModule
#define PDFTRON_H_CPPPDFPDF2HtmlReflowParagraphsModule
#include <C/PDF/TRN_PDF2HtmlReflowParagraphsModule.h>

#include <Common/BasicTypes.h>
#include <Common/UString.h>
#include <PDF/PDFDoc.h>

namespace pdftron { namespace PDF { 
class PDFDoc;

/**
 * The class PDF2HtmlReflowParagraphsModule.
 * static interface to PDFTron SDKs PDF to HTML functionality
 */
class PDF2HtmlReflowParagraphsModule
{
public:
	
	//methods:
	
	/**
	 * Find out whether the pdf2html module is available (and licensed).
	 * 
	 * @return returns true if pdf2html operations can be performed.
	 */
	static bool IsModuleAvailable();

};

#include <Impl/PDF2HtmlReflowParagraphsModule.inl>
} //end pdftron
} //end PDF


#endif //PDFTRON_H_CPPPDFPDF2HtmlReflowParagraphsModule
