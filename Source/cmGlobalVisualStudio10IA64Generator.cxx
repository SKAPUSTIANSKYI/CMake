/*============================================================================
  CMake - Cross Platform Makefile Generator
  Copyright 2000-2009 Kitware, Inc., Insight Software Consortium

  Distributed under the OSI-approved BSD License (the "License");
  see accompanying file Copyright.txt for details.

  This software is distributed WITHOUT ANY WARRANTY; without even the
  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the License for more information.
============================================================================*/
#include "cmGlobalVisualStudio10IA64Generator.h"
#include "cmMakefile.h"
#include "cmake.h"

//----------------------------------------------------------------------------
cmGlobalVisualStudio10IA64Generator::cmGlobalVisualStudio10IA64Generator()
{
  this->ArchitectureId = "Itanium";
  this->AdditionalPlatformDefinition = "CMAKE_FORCE_IA64";
}

//----------------------------------------------------------------------------
void cmGlobalVisualStudio10IA64Generator
::GetDocumentation(cmDocumentationEntry& entry)
{
  entry.Name = cmGlobalVisualStudio10IA64Generator::GetActualName();
  entry.Brief = "Generates Visual Studio 10 Itanium project files.";
  entry.Full = "";
}
