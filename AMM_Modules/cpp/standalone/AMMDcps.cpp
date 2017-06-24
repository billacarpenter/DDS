//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: AMMDcps.cpp
//  Source: AMMDcps.idl
//  Generated: Sat Jun 24 13:20:04 2017
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "AMMDcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < AMM::Performance::Statement, struct StatementSeq_uniq_>;
#endif
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < AMM::Performance::xAPIModifier, struct xAPIModifierSeq_uniq_>;
#endif
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < AMM::PatientAction::BioGears::Command, struct CommandSeq_uniq_>;
#endif
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < AMM::Physiology::HighFrequencyNode, struct HighFrequencyNodeSeq_uniq_>;
#endif
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < AMM::Physiology::Node, struct NodeSeq_uniq_>;
#endif
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < AMM::Simulation::Tick, struct TickSeq_uniq_>;
#endif

const char * AMM::Simulation::TickTypeSupportInterface::_local_id = "IDL:AMM/Simulation/TickTypeSupportInterface:1.0";

AMM::Simulation::TickTypeSupportInterface_ptr AMM::Simulation::TickTypeSupportInterface::_duplicate (AMM::Simulation::TickTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Simulation::TickTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Simulation::TickTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Simulation::TickTypeSupportInterface_ptr AMM::Simulation::TickTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (AMM::Simulation::TickTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < AMM::Simulation::TickTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Simulation::TickTypeSupportInterface_ptr AMM::Simulation::TickTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickTypeSupportInterface_ptr result;
   result = dynamic_cast < AMM::Simulation::TickTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Simulation::TickDataWriter::_local_id = "IDL:AMM/Simulation/TickDataWriter:1.0";

AMM::Simulation::TickDataWriter_ptr AMM::Simulation::TickDataWriter::_duplicate (AMM::Simulation::TickDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Simulation::TickDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Simulation::TickDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Simulation::TickDataWriter_ptr AMM::Simulation::TickDataWriter::_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickDataWriter_ptr result = NULL;
   if (p && p->_is_a (AMM::Simulation::TickDataWriter::_local_id))
   {
      result = dynamic_cast < AMM::Simulation::TickDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Simulation::TickDataWriter_ptr AMM::Simulation::TickDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickDataWriter_ptr result;
   result = dynamic_cast < AMM::Simulation::TickDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Simulation::TickDataReader::_local_id = "IDL:AMM/Simulation/TickDataReader:1.0";

AMM::Simulation::TickDataReader_ptr AMM::Simulation::TickDataReader::_duplicate (AMM::Simulation::TickDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Simulation::TickDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Simulation::TickDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Simulation::TickDataReader_ptr AMM::Simulation::TickDataReader::_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickDataReader_ptr result = NULL;
   if (p && p->_is_a (AMM::Simulation::TickDataReader::_local_id))
   {
      result = dynamic_cast < AMM::Simulation::TickDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Simulation::TickDataReader_ptr AMM::Simulation::TickDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickDataReader_ptr result;
   result = dynamic_cast < AMM::Simulation::TickDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Simulation::TickDataReaderView::_local_id = "IDL:AMM/Simulation/TickDataReaderView:1.0";

AMM::Simulation::TickDataReaderView_ptr AMM::Simulation::TickDataReaderView::_duplicate (AMM::Simulation::TickDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Simulation::TickDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Simulation::TickDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Simulation::TickDataReaderView_ptr AMM::Simulation::TickDataReaderView::_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickDataReaderView_ptr result = NULL;
   if (p && p->_is_a (AMM::Simulation::TickDataReaderView::_local_id))
   {
      result = dynamic_cast < AMM::Simulation::TickDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Simulation::TickDataReaderView_ptr AMM::Simulation::TickDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickDataReaderView_ptr result;
   result = dynamic_cast < AMM::Simulation::TickDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::NodeTypeSupportInterface::_local_id = "IDL:AMM/Physiology/NodeTypeSupportInterface:1.0";

AMM::Physiology::NodeTypeSupportInterface_ptr AMM::Physiology::NodeTypeSupportInterface::_duplicate (AMM::Physiology::NodeTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::NodeTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::NodeTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::NodeTypeSupportInterface_ptr AMM::Physiology::NodeTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::NodeTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::NodeTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::NodeTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::NodeTypeSupportInterface_ptr AMM::Physiology::NodeTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::NodeTypeSupportInterface_ptr result;
   result = dynamic_cast < AMM::Physiology::NodeTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::NodeDataWriter::_local_id = "IDL:AMM/Physiology/NodeDataWriter:1.0";

AMM::Physiology::NodeDataWriter_ptr AMM::Physiology::NodeDataWriter::_duplicate (AMM::Physiology::NodeDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::NodeDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::NodeDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::NodeDataWriter_ptr AMM::Physiology::NodeDataWriter::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::NodeDataWriter_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::NodeDataWriter::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::NodeDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::NodeDataWriter_ptr AMM::Physiology::NodeDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::NodeDataWriter_ptr result;
   result = dynamic_cast < AMM::Physiology::NodeDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::NodeDataReader::_local_id = "IDL:AMM/Physiology/NodeDataReader:1.0";

AMM::Physiology::NodeDataReader_ptr AMM::Physiology::NodeDataReader::_duplicate (AMM::Physiology::NodeDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::NodeDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::NodeDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::NodeDataReader_ptr AMM::Physiology::NodeDataReader::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::NodeDataReader_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::NodeDataReader::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::NodeDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::NodeDataReader_ptr AMM::Physiology::NodeDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::NodeDataReader_ptr result;
   result = dynamic_cast < AMM::Physiology::NodeDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::NodeDataReaderView::_local_id = "IDL:AMM/Physiology/NodeDataReaderView:1.0";

AMM::Physiology::NodeDataReaderView_ptr AMM::Physiology::NodeDataReaderView::_duplicate (AMM::Physiology::NodeDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::NodeDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::NodeDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::NodeDataReaderView_ptr AMM::Physiology::NodeDataReaderView::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::NodeDataReaderView_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::NodeDataReaderView::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::NodeDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::NodeDataReaderView_ptr AMM::Physiology::NodeDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::NodeDataReaderView_ptr result;
   result = dynamic_cast < AMM::Physiology::NodeDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::HighFrequencyNodeTypeSupportInterface::_local_id = "IDL:AMM/Physiology/HighFrequencyNodeTypeSupportInterface:1.0";

AMM::Physiology::HighFrequencyNodeTypeSupportInterface_ptr AMM::Physiology::HighFrequencyNodeTypeSupportInterface::_duplicate (AMM::Physiology::HighFrequencyNodeTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::HighFrequencyNodeTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::HighFrequencyNodeTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::HighFrequencyNodeTypeSupportInterface_ptr AMM::Physiology::HighFrequencyNodeTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyNodeTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::HighFrequencyNodeTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::HighFrequencyNodeTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::HighFrequencyNodeTypeSupportInterface_ptr AMM::Physiology::HighFrequencyNodeTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyNodeTypeSupportInterface_ptr result;
   result = dynamic_cast < AMM::Physiology::HighFrequencyNodeTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::HighFrequencyNodeDataWriter::_local_id = "IDL:AMM/Physiology/HighFrequencyNodeDataWriter:1.0";

AMM::Physiology::HighFrequencyNodeDataWriter_ptr AMM::Physiology::HighFrequencyNodeDataWriter::_duplicate (AMM::Physiology::HighFrequencyNodeDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::HighFrequencyNodeDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::HighFrequencyNodeDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::HighFrequencyNodeDataWriter_ptr AMM::Physiology::HighFrequencyNodeDataWriter::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyNodeDataWriter_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::HighFrequencyNodeDataWriter::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::HighFrequencyNodeDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::HighFrequencyNodeDataWriter_ptr AMM::Physiology::HighFrequencyNodeDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyNodeDataWriter_ptr result;
   result = dynamic_cast < AMM::Physiology::HighFrequencyNodeDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::HighFrequencyNodeDataReader::_local_id = "IDL:AMM/Physiology/HighFrequencyNodeDataReader:1.0";

AMM::Physiology::HighFrequencyNodeDataReader_ptr AMM::Physiology::HighFrequencyNodeDataReader::_duplicate (AMM::Physiology::HighFrequencyNodeDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::HighFrequencyNodeDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::HighFrequencyNodeDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::HighFrequencyNodeDataReader_ptr AMM::Physiology::HighFrequencyNodeDataReader::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyNodeDataReader_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::HighFrequencyNodeDataReader::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::HighFrequencyNodeDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::HighFrequencyNodeDataReader_ptr AMM::Physiology::HighFrequencyNodeDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyNodeDataReader_ptr result;
   result = dynamic_cast < AMM::Physiology::HighFrequencyNodeDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::HighFrequencyNodeDataReaderView::_local_id = "IDL:AMM/Physiology/HighFrequencyNodeDataReaderView:1.0";

AMM::Physiology::HighFrequencyNodeDataReaderView_ptr AMM::Physiology::HighFrequencyNodeDataReaderView::_duplicate (AMM::Physiology::HighFrequencyNodeDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::HighFrequencyNodeDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::HighFrequencyNodeDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::HighFrequencyNodeDataReaderView_ptr AMM::Physiology::HighFrequencyNodeDataReaderView::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyNodeDataReaderView_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::HighFrequencyNodeDataReaderView::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::HighFrequencyNodeDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::HighFrequencyNodeDataReaderView_ptr AMM::Physiology::HighFrequencyNodeDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyNodeDataReaderView_ptr result;
   result = dynamic_cast < AMM::Physiology::HighFrequencyNodeDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::PatientAction::BioGears::CommandTypeSupportInterface::_local_id = "IDL:AMM/PatientAction/BioGears/CommandTypeSupportInterface:1.0";

AMM::PatientAction::BioGears::CommandTypeSupportInterface_ptr AMM::PatientAction::BioGears::CommandTypeSupportInterface::_duplicate (AMM::PatientAction::BioGears::CommandTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::PatientAction::BioGears::CommandTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::PatientAction::BioGears::CommandTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::PatientAction::BioGears::CommandTypeSupportInterface_ptr AMM::PatientAction::BioGears::CommandTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   AMM::PatientAction::BioGears::CommandTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (AMM::PatientAction::BioGears::CommandTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < AMM::PatientAction::BioGears::CommandTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::PatientAction::BioGears::CommandTypeSupportInterface_ptr AMM::PatientAction::BioGears::CommandTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::PatientAction::BioGears::CommandTypeSupportInterface_ptr result;
   result = dynamic_cast < AMM::PatientAction::BioGears::CommandTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::PatientAction::BioGears::CommandDataWriter::_local_id = "IDL:AMM/PatientAction/BioGears/CommandDataWriter:1.0";

AMM::PatientAction::BioGears::CommandDataWriter_ptr AMM::PatientAction::BioGears::CommandDataWriter::_duplicate (AMM::PatientAction::BioGears::CommandDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::PatientAction::BioGears::CommandDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::PatientAction::BioGears::CommandDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::PatientAction::BioGears::CommandDataWriter_ptr AMM::PatientAction::BioGears::CommandDataWriter::_narrow (DDS::Object_ptr p)
{
   AMM::PatientAction::BioGears::CommandDataWriter_ptr result = NULL;
   if (p && p->_is_a (AMM::PatientAction::BioGears::CommandDataWriter::_local_id))
   {
      result = dynamic_cast < AMM::PatientAction::BioGears::CommandDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::PatientAction::BioGears::CommandDataWriter_ptr AMM::PatientAction::BioGears::CommandDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::PatientAction::BioGears::CommandDataWriter_ptr result;
   result = dynamic_cast < AMM::PatientAction::BioGears::CommandDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::PatientAction::BioGears::CommandDataReader::_local_id = "IDL:AMM/PatientAction/BioGears/CommandDataReader:1.0";

AMM::PatientAction::BioGears::CommandDataReader_ptr AMM::PatientAction::BioGears::CommandDataReader::_duplicate (AMM::PatientAction::BioGears::CommandDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::PatientAction::BioGears::CommandDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::PatientAction::BioGears::CommandDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::PatientAction::BioGears::CommandDataReader_ptr AMM::PatientAction::BioGears::CommandDataReader::_narrow (DDS::Object_ptr p)
{
   AMM::PatientAction::BioGears::CommandDataReader_ptr result = NULL;
   if (p && p->_is_a (AMM::PatientAction::BioGears::CommandDataReader::_local_id))
   {
      result = dynamic_cast < AMM::PatientAction::BioGears::CommandDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::PatientAction::BioGears::CommandDataReader_ptr AMM::PatientAction::BioGears::CommandDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::PatientAction::BioGears::CommandDataReader_ptr result;
   result = dynamic_cast < AMM::PatientAction::BioGears::CommandDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::PatientAction::BioGears::CommandDataReaderView::_local_id = "IDL:AMM/PatientAction/BioGears/CommandDataReaderView:1.0";

AMM::PatientAction::BioGears::CommandDataReaderView_ptr AMM::PatientAction::BioGears::CommandDataReaderView::_duplicate (AMM::PatientAction::BioGears::CommandDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::PatientAction::BioGears::CommandDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::PatientAction::BioGears::CommandDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::PatientAction::BioGears::CommandDataReaderView_ptr AMM::PatientAction::BioGears::CommandDataReaderView::_narrow (DDS::Object_ptr p)
{
   AMM::PatientAction::BioGears::CommandDataReaderView_ptr result = NULL;
   if (p && p->_is_a (AMM::PatientAction::BioGears::CommandDataReaderView::_local_id))
   {
      result = dynamic_cast < AMM::PatientAction::BioGears::CommandDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::PatientAction::BioGears::CommandDataReaderView_ptr AMM::PatientAction::BioGears::CommandDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::PatientAction::BioGears::CommandDataReaderView_ptr result;
   result = dynamic_cast < AMM::PatientAction::BioGears::CommandDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Performance::xAPIModifierTypeSupportInterface::_local_id = "IDL:AMM/Performance/xAPIModifierTypeSupportInterface:1.0";

AMM::Performance::xAPIModifierTypeSupportInterface_ptr AMM::Performance::xAPIModifierTypeSupportInterface::_duplicate (AMM::Performance::xAPIModifierTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Performance::xAPIModifierTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Performance::xAPIModifierTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Performance::xAPIModifierTypeSupportInterface_ptr AMM::Performance::xAPIModifierTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   AMM::Performance::xAPIModifierTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (AMM::Performance::xAPIModifierTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < AMM::Performance::xAPIModifierTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Performance::xAPIModifierTypeSupportInterface_ptr AMM::Performance::xAPIModifierTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Performance::xAPIModifierTypeSupportInterface_ptr result;
   result = dynamic_cast < AMM::Performance::xAPIModifierTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Performance::xAPIModifierDataWriter::_local_id = "IDL:AMM/Performance/xAPIModifierDataWriter:1.0";

AMM::Performance::xAPIModifierDataWriter_ptr AMM::Performance::xAPIModifierDataWriter::_duplicate (AMM::Performance::xAPIModifierDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Performance::xAPIModifierDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Performance::xAPIModifierDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Performance::xAPIModifierDataWriter_ptr AMM::Performance::xAPIModifierDataWriter::_narrow (DDS::Object_ptr p)
{
   AMM::Performance::xAPIModifierDataWriter_ptr result = NULL;
   if (p && p->_is_a (AMM::Performance::xAPIModifierDataWriter::_local_id))
   {
      result = dynamic_cast < AMM::Performance::xAPIModifierDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Performance::xAPIModifierDataWriter_ptr AMM::Performance::xAPIModifierDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Performance::xAPIModifierDataWriter_ptr result;
   result = dynamic_cast < AMM::Performance::xAPIModifierDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Performance::xAPIModifierDataReader::_local_id = "IDL:AMM/Performance/xAPIModifierDataReader:1.0";

AMM::Performance::xAPIModifierDataReader_ptr AMM::Performance::xAPIModifierDataReader::_duplicate (AMM::Performance::xAPIModifierDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Performance::xAPIModifierDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Performance::xAPIModifierDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Performance::xAPIModifierDataReader_ptr AMM::Performance::xAPIModifierDataReader::_narrow (DDS::Object_ptr p)
{
   AMM::Performance::xAPIModifierDataReader_ptr result = NULL;
   if (p && p->_is_a (AMM::Performance::xAPIModifierDataReader::_local_id))
   {
      result = dynamic_cast < AMM::Performance::xAPIModifierDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Performance::xAPIModifierDataReader_ptr AMM::Performance::xAPIModifierDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Performance::xAPIModifierDataReader_ptr result;
   result = dynamic_cast < AMM::Performance::xAPIModifierDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Performance::xAPIModifierDataReaderView::_local_id = "IDL:AMM/Performance/xAPIModifierDataReaderView:1.0";

AMM::Performance::xAPIModifierDataReaderView_ptr AMM::Performance::xAPIModifierDataReaderView::_duplicate (AMM::Performance::xAPIModifierDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Performance::xAPIModifierDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Performance::xAPIModifierDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Performance::xAPIModifierDataReaderView_ptr AMM::Performance::xAPIModifierDataReaderView::_narrow (DDS::Object_ptr p)
{
   AMM::Performance::xAPIModifierDataReaderView_ptr result = NULL;
   if (p && p->_is_a (AMM::Performance::xAPIModifierDataReaderView::_local_id))
   {
      result = dynamic_cast < AMM::Performance::xAPIModifierDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Performance::xAPIModifierDataReaderView_ptr AMM::Performance::xAPIModifierDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Performance::xAPIModifierDataReaderView_ptr result;
   result = dynamic_cast < AMM::Performance::xAPIModifierDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Performance::StatementTypeSupportInterface::_local_id = "IDL:AMM/Performance/StatementTypeSupportInterface:1.0";

AMM::Performance::StatementTypeSupportInterface_ptr AMM::Performance::StatementTypeSupportInterface::_duplicate (AMM::Performance::StatementTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Performance::StatementTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Performance::StatementTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Performance::StatementTypeSupportInterface_ptr AMM::Performance::StatementTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   AMM::Performance::StatementTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (AMM::Performance::StatementTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < AMM::Performance::StatementTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Performance::StatementTypeSupportInterface_ptr AMM::Performance::StatementTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Performance::StatementTypeSupportInterface_ptr result;
   result = dynamic_cast < AMM::Performance::StatementTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Performance::StatementDataWriter::_local_id = "IDL:AMM/Performance/StatementDataWriter:1.0";

AMM::Performance::StatementDataWriter_ptr AMM::Performance::StatementDataWriter::_duplicate (AMM::Performance::StatementDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Performance::StatementDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Performance::StatementDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Performance::StatementDataWriter_ptr AMM::Performance::StatementDataWriter::_narrow (DDS::Object_ptr p)
{
   AMM::Performance::StatementDataWriter_ptr result = NULL;
   if (p && p->_is_a (AMM::Performance::StatementDataWriter::_local_id))
   {
      result = dynamic_cast < AMM::Performance::StatementDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Performance::StatementDataWriter_ptr AMM::Performance::StatementDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Performance::StatementDataWriter_ptr result;
   result = dynamic_cast < AMM::Performance::StatementDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Performance::StatementDataReader::_local_id = "IDL:AMM/Performance/StatementDataReader:1.0";

AMM::Performance::StatementDataReader_ptr AMM::Performance::StatementDataReader::_duplicate (AMM::Performance::StatementDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Performance::StatementDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Performance::StatementDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Performance::StatementDataReader_ptr AMM::Performance::StatementDataReader::_narrow (DDS::Object_ptr p)
{
   AMM::Performance::StatementDataReader_ptr result = NULL;
   if (p && p->_is_a (AMM::Performance::StatementDataReader::_local_id))
   {
      result = dynamic_cast < AMM::Performance::StatementDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Performance::StatementDataReader_ptr AMM::Performance::StatementDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Performance::StatementDataReader_ptr result;
   result = dynamic_cast < AMM::Performance::StatementDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Performance::StatementDataReaderView::_local_id = "IDL:AMM/Performance/StatementDataReaderView:1.0";

AMM::Performance::StatementDataReaderView_ptr AMM::Performance::StatementDataReaderView::_duplicate (AMM::Performance::StatementDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Performance::StatementDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Performance::StatementDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Performance::StatementDataReaderView_ptr AMM::Performance::StatementDataReaderView::_narrow (DDS::Object_ptr p)
{
   AMM::Performance::StatementDataReaderView_ptr result = NULL;
   if (p && p->_is_a (AMM::Performance::StatementDataReaderView::_local_id))
   {
      result = dynamic_cast < AMM::Performance::StatementDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Performance::StatementDataReaderView_ptr AMM::Performance::StatementDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Performance::StatementDataReaderView_ptr result;
   result = dynamic_cast < AMM::Performance::StatementDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}



