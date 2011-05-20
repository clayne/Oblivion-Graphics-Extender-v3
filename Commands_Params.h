#include "obse/GameAPI.h"

#define EXTRACTARGS paramInfo, arg1, opcodeOffsetPtr, thisObj, arg3, scriptObj, eventList

static ParamInfo kParams_OneString[1] =
{
  { "string",	kParamType_String,	0 },
};
static ParamInfo kParams_OneInt[1] =
{
  { "int", kParamType_Integer, 0 },
};

static ParamInfo kParams_OneIntOneOptInt[2] =
{
  { "int", kParamType_Integer, 0 },
  { "int", kParamType_Integer, 1 },
};

static ParamInfo kParams_TwoInt[2] =
{
  { "int", kParamType_Integer, 0 },
  { "int", kParamType_Integer, 0 },
};

static ParamInfo kParams_IntFloat[2] =
{
  { "int", kParamType_Integer, 0 },
  { "float", kParamType_Float, 0 },
};

static ParamInfo kParams_Int2Floats[3] =
{
  { "int", kParamType_Integer, 0 },
  { "float", kParamType_Float, 0 },
  { "float", kParamType_Float, 0 },
};

static ParamInfo kParams_Int3Floats[4] =
{
  { "int", kParamType_Integer, 0 },
  { "float", kParamType_Float, 0 },
  { "float", kParamType_Float, 0 },
  { "float", kParamType_Float, 0 },
};

static ParamInfo kParams_StringInt[2] =
{
  { "string", kParamType_String, 0 },
  { "int", kParamType_Integer, 0 },
};

static ParamInfo kParams_StringOptInt[2] =
{
  { "string", kParamType_String, 0 },
  { "int", kParamType_Integer, 1 },
};

static ParamInfo kParams_IntStringInt[3] =
{
  { "int", kParamType_Integer, 0 },
  { "string", kParamType_String, 0 },
  { "int", kParamType_Integer, 0 },
};

static ParamInfo kParams_IntStringFloat[3] =
{
  { "int", kParamType_Integer, 0 },
  { "string", kParamType_String, 0 },
  { "float", kParamType_Float, 0 },
};

static ParamInfo kParams_StringStringInt[3] =
{
  { "string", kParamType_String, 0 },
  { "string", kParamType_String, 0 },
  { "int", kParamType_Integer, 0 },
};

static ParamInfo kParams_IntStringInt4[6] =
{
  { "int", kParamType_Integer, 0 },
  { "string", kParamType_String, 0 },
  { "int", kParamType_Integer, 0 },
  { "int", kParamType_Integer, 0 },
  { "int", kParamType_Integer, 0 },
  { "int", kParamType_Integer, 0 },
};

static ParamInfo kParams_IntStringFloat4[6] =
{
  { "int", kParamType_Integer, 0 },
  { "string", kParamType_String, 0 },
  { "float", kParamType_Float, 0 },
  { "float", kParamType_Float, 0 },
  { "float", kParamType_Float, 0 },
  { "float", kParamType_Float, 0 },
};

static ParamInfo kParams_StringStringInt4[6] =
{
  { "string", kParamType_String, 0 },
  { "string", kParamType_String, 0 },
  { "int", kParamType_Integer, 0 },
  { "int", kParamType_Integer, 0 },
  { "int", kParamType_Integer, 0 },
  { "int", kParamType_Integer, 0 },
};

static ParamInfo kParams_StringStringFloat4[6] =
{
  { "string", kParamType_String, 0 },
  { "string", kParamType_String, 0 },
  { "float", kParamType_Float, 0 },
  { "float", kParamType_Float, 0 },
  { "float", kParamType_Float, 0 },
  { "float", kParamType_Float, 0 },
};
