/*****************************************************/
/* File   : Swc_Os.cpp                               */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "Swc_Os.h"

#include "Swc_Os_Unused.h"

#include "NvM_SchM.h"
#include "EcuM_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Swc_Os:
      public class_module
   ,  public interface_Swc_Os
{
   public:
      FUNC(void, OS_CODE) InitFunction   (void);
      FUNC(void, OS_CODE) DeInitFunction (void);
      FUNC(void, OS_CODE) MainFunction   (void);
      FUNC(void, OS_CODE) StartupHook    (void);
      FUNC(void, OS_CODE) ShutdownHook   (void);
      FUNC(void, OS_CODE) TASK_Idle      (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_Swc_Os Swc_Os;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, OS_CODE) module_Swc_Os::InitFunction(void){
}

FUNC(void, OS_CODE) module_Swc_Os::DeInitFunction(void){
}

FUNC(void, OS_CODE) module_Swc_Os::MainFunction(void){
}

FUNC(void, OS_CODE) module_Swc_Os::StartupHook(void){
}

FUNC(void, OS_CODE) module_Swc_Os::ShutdownHook(void){
}

FUNC(void, OS_CODE) module_Swc_Os::TASK_Idle(void){
   SchM_Client_ptr_EcuM->MainFunction();
   SchM_Client_ptr_NvM->MainFunction();
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

