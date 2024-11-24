__int64 sub_3C44C()
{
  int v5; // er10
  int v6; // er8
  int v7; // er9
  int v8; // er14
  int v14; // edi
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // er8
  int v19; // er10
  unsigned __int64 v32; // rax

  _RAX = 0i64;
  __asm { cpuid }
  v5 = _RDX ^ 0x49656E69;
  v6 = _RCX ^ 0x6C65746E;
  v7 = _RBX;
  v8 = _RAX;
  _RAX = 1i64;
  __asm { cpuid }
  v14 = _RCX;
  if ( !(v7 ^ 0x756E6547 | v6 | v5)
    && ((qword_65038 = -1i64, v15 = _RAX & 0xFFF3FF0, off_65030 = &byte_8000, v15 == 67264)
     || v15 == 132704
     || v15 == 132720
     || (v16 = (unsigned int)(v15 - 198224), (unsigned int)v16 <= 0x20) && (v17 = 0x100010001i64, _bittest64(&v17, v16))) )
  {
    v18 = 3;
    LODWORD(qword_66370) = 3;
  }
  else
  {
    v18 = 2;
  }
  v19 = 0;
  if ( v8 >= 7 )
  {
    _RAX = 7i64;
    __asm { cpuid }
    if ( _bittest((const int *)&_RBX, 9u) )
      LODWORD(qword_66370) = v18 | 2;
    if ( (int)_RAX >= 1 )
    {
      _RAX = 7i64;
      __asm { cpuid }
    }
    _RAX = 36i64;
    if ( v8 >= 36 )
    {
      __asm { cpuid }
      v19 = _RBX;
    }
  }
  dword_65028 = 1;
  dword_6502C = 2;
  qword_65020 = -20i64;
  if ( _bittest(&v14, 0x14u) )
  {
    dword_65028 = 2;
    qword_65020 = -20i64;
    dword_6502C = 6;
  }
  if ( _bittest(&v14, 0x1Bu) )
  {
    __asm { xgetbv }
    if ( _bittest(&v19, 0x15u) )
    {
      v32 = (_RDX << 32) | 0xFFFFFFFFFFFFFFECui64;
      if ( _bittest64((const __int64 *)&v32, 0x13u) )
        qword_65020 = -148i64;
    }
  }
  return 0i64;
}
