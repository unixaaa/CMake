/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing for details.  */
#ifndef cmGetTargetPropertyCommand_h
#define cmGetTargetPropertyCommand_h

#include "cmCommand.h"

class cmGetTargetPropertyCommand : public cmCommand
{
public:
  cmCommand* Clone() CM_OVERRIDE { return new cmGetTargetPropertyCommand; }

  /**
   * This is called when the command is first encountered in
   * the input file.
   */
  bool InitialPass(std::vector<std::string> const& args,
                   cmExecutionStatus& status) CM_OVERRIDE;

  /**
   * The name of the command as specified in CMakeList.txt.
   */
  std::string GetName() const CM_OVERRIDE { return "get_target_property"; }

  cmTypeMacro(cmGetTargetPropertyCommand, cmCommand);
};

#endif
