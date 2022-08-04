#pragma once
/******************************************************************************/
/* File   : ServiceSwcOs.hpp                                                  */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceSwcOs.hpp"
#include "CfgServiceSwcOs.hpp"
#include "ServiceSwcOs_core.hpp"
#include "infServiceSwcOs_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceSwcOs:
      INTERFACES_EXPORTED_SWCSERVICEOS
   ,  public abstract_module
   ,  public class_ServiceSwcOs_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceSwcOs_Type* lptrConst = (ConstServiceSwcOs_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SWCSERVICEOS_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SWCSERVICEOS_CONST,       SWCSERVICEOS_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SWCSERVICEOS_CONFIG_DATA, SWCSERVICEOS_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SWCSERVICEOS_CODE) DeInitFunction (void);
      FUNC(void, SWCSERVICEOS_CODE) MainFunction   (void);
      SWCSERVICEOS_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceSwcOs, SWCSERVICEOS_VAR) ServiceSwcOs;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
