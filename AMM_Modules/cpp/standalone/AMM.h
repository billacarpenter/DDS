//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: AMM.h
//  Source: ../../../IDL/AMM.idl
//  Generated: Sat Jun 24 13:20:04 2017
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _AMM_H_
#define _AMM_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"


namespace AMM
{
   namespace Simulation
   {
      struct Tick;

      struct Tick
      {
            DDS::LongLong frame;
            DDS::Float time;
      };

      typedef DDS_DCPSStruct_var < Tick> Tick_var;
      typedef Tick&Tick_out;
   }
   namespace Physiology
   {
      struct Node;
      struct HighFrequencyNode;

      struct Node
      {
            DDS::LongLong frame;
            DDS::String_mgr nodepath;
            DDS::String_mgr unit;
            DDS::Double dbl;
            DDS::String_mgr str;
      };

      typedef DDS_DCPSStruct_var < Node> Node_var;
      typedef DDS_DCPSStruct_out < Node> Node_out;

      struct HighFrequencyNode
      {
            DDS::LongLong frame;
            DDS::String_mgr nodepath;
            DDS::String_mgr unit;
            DDS::Double dbl;
            DDS::String_mgr str;
      };

      typedef DDS_DCPSStruct_var < HighFrequencyNode> HighFrequencyNode_var;
      typedef DDS_DCPSStruct_out < HighFrequencyNode> HighFrequencyNode_out;
   }
   namespace PatientAction
   {
      namespace BioGears
      {
         struct Command;

         struct Command
         {
               DDS::String_mgr message;
         };

         typedef DDS_DCPSStruct_var < Command> Command_var;
         typedef DDS_DCPSStruct_out < Command> Command_out;
      }
   }
   namespace Performance
   {
      struct xAPIModifier;
      struct Statement;

      struct xAPIModifier
      {
            DDS::String_mgr key;
            DDS::String_mgr value;
      };

      typedef DDS_DCPSStruct_var < xAPIModifier> xAPIModifier_var;
      typedef DDS_DCPSStruct_out < xAPIModifier> xAPIModifier_out;
      struct xAPI_Modifiers_uniq_ {};
      typedef DDS_DCPSUVLSeq < xAPIModifier, struct xAPI_Modifiers_uniq_> xAPI_Modifiers;
      typedef DDS_DCPSSequence_var < xAPI_Modifiers> xAPI_Modifiers_var;
      typedef DDS_DCPSSequence_out < xAPI_Modifiers> xAPI_Modifiers_out;

      struct Statement
      {
            DDS::String_mgr noun;
            xAPI_Modifiers noun_modifiers;
            DDS::String_mgr verb;
            xAPI_Modifiers verb_modifiers;
            DDS::String_mgr obj;
            xAPI_Modifiers obj_modifiers;
      };

      typedef DDS_DCPSStruct_var < Statement> Statement_var;
      typedef DDS_DCPSStruct_out < Statement> Statement_out;
   }
   namespace Sys
   {
      namespace Log
      {
         struct info;
         struct warning;
         struct error;
         struct debug;

         struct info
         {
               DDS::String_mgr message;
         };

         typedef DDS_DCPSStruct_var < info> info_var;
         typedef DDS_DCPSStruct_out < info> info_out;

         struct warning
         {
               DDS::String_mgr message;
         };

         typedef DDS_DCPSStruct_var < warning> warning_var;
         typedef DDS_DCPSStruct_out < warning> warning_out;

         struct error
         {
               DDS::String_mgr message;
         };

         typedef DDS_DCPSStruct_var < error> error_var;
         typedef DDS_DCPSStruct_out < error> error_out;

         struct debug
         {
               DDS::String_mgr message;
         };

         typedef DDS_DCPSStruct_var < debug> debug_var;
         typedef DDS_DCPSStruct_out < debug> debug_out;
      }
   }
}




#endif 
