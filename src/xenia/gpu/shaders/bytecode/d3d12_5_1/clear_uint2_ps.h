#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Buffer Definitions: 
//
// cbuffer XeClearConstants
// {
//
//   uint2 xe_clear_value;              // Offset:    0 Size:     8
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      ID      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- ------- -------------- ------
// XeClearConstants                  cbuffer      NA          NA     CB0            cb0      1 
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Input
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   xy          0   TARGET    uint   xy  
//
ps_5_1
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[0:0][1], immediateIndexed, space=0
dcl_output o0.xy
mov o0.xy, CB0[0][0].xyxx
ret 
// Approximately 2 instruction slots used
#endif

const BYTE clear_uint2_ps[] =
{
     68,  88,  66,  67,  37,  23, 
     17,   1, 102, 148, 181,  42, 
    241, 102, 112, 167, 142, 147, 
     73,   7,   1,   0,   0,   0, 
    148,   2,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
     88,   1,   0,   0, 104,   1, 
      0,   0, 156,   1,   0,   0, 
    248,   1,   0,   0,  82,  68, 
     69,  70,  28,   1,   0,   0, 
      1,   0,   0,   0, 120,   0, 
      0,   0,   1,   0,   0,   0, 
     60,   0,   0,   0,   1,   5, 
    255, 255,   0,   5,   4,   0, 
    244,   0,   0,   0,  19,  19, 
     68,  37,  60,   0,   0,   0, 
     24,   0,   0,   0,  40,   0, 
      0,   0,  40,   0,   0,   0, 
     36,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
    100,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  88, 101, 
     67, 108, 101,  97, 114,  67, 
    111, 110, 115, 116,  97, 110, 
    116, 115,   0, 171, 171, 171, 
    100,   0,   0,   0,   1,   0, 
      0,   0, 144,   0,   0,   0, 
     16,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    184,   0,   0,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
      2,   0,   0,   0, 208,   0, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 120, 101, 
     95,  99, 108, 101,  97, 114, 
     95, 118,  97, 108, 117, 101, 
      0, 117, 105, 110, 116,  50, 
      0, 171, 171, 171,   1,   0, 
     19,   0,   1,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    199,   0,   0,   0,  77, 105, 
     99, 114, 111, 115, 111, 102, 
    116,  32,  40,  82,  41,  32, 
     72,  76,  83,  76,  32,  83, 
    104,  97, 100, 101, 114,  32, 
     67, 111, 109, 112, 105, 108, 
    101, 114,  32,  49,  48,  46, 
     49,   0,  73,  83,  71,  78, 
      8,   0,   0,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     79,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      3,  12,   0,   0,  83,  86, 
     95,  84,  97, 114, 103, 101, 
    116,   0, 171, 171,  83,  72, 
     69,  88,  84,   0,   0,   0, 
     81,   0,   0,   0,  21,   0, 
      0,   0, 106,   8,   0,   1, 
     89,   0,   0,   7,  70, 142, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 101,   0, 
      0,   3,  50,  32,  16,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   7,  50,  32,  16,   0, 
      0,   0,   0,   0,  70, 128, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  62,   0,   0,   1, 
     83,  84,  65,  84, 148,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0
};
