__int64 __fastcall determine_corexit_import(unsigned int a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0i64;
  result = LoadLibray(0i64, L"mscoree.dll", &v4);
  v3 = v4;
  if ( (_DWORD)result )
  {
    result = GetProcAddress[0x7FFDC001B200](v4, "CorExitProcess"); //maybe
    if ( result )
      result = MEMORY[0x1D456FA3D50](a1);
    v3 = v4;
  }
  if ( v3 )
    result = MEMORY[0x7FFDC001CB10]();
  return result;
}
