__int64 __fastcall noreturn_2(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp-38h] [rbp-38h] BYREF
  unsigned int v6; // [rsp-30h] [rbp-30h] BYREF
  __int64 v7; // [rsp-28h] [rbp-28h]
  _QWORD v8[4]; // [rsp-20h] [rbp-20h] BYREF
  int v9; // [rsp+10h] [rbp+10h] BYREF
  int v10; // [rsp+18h] [rbp+18h] BYREF
  char v11; // [rsp+20h] [rbp+20h] BYREF

  v10 = 0;
  v9 = 2;
  v7 = -2i64;
  v2 = MEMORY[0x7FFDC001D470](0i64, 2i64);
  if ( v2 )
  {
    if ( *(_WORD *)v2 == 23117 )
    {
      v3 = v2 + *(int *)(v2 + 60);
      if ( *(_DWORD *)v3 == 0x4550
        && *(_WORD *)(v3 + 0x18) == 523
        && *(_DWORD *)(v3 + 0x84) > 0xEu
        && *(_DWORD *)(v3 + 0xF8) )
      {
        determine_corexit_import(a1);
      }
    }
  }
  v11 = 0;
  v8[0] = &v9;
  v8[1] = &v10;
  v8[2] = &v11;
  HIDWORD(v5) = 2;
  v6 = 2;
  result = sub_4862C((__int64)&v5, &v6, (__int64)v8, (unsigned int *)&v5 + 1);
  if ( !v10 )
    noreturn_1(a1);
  return result;
}
