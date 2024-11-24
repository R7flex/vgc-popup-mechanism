void __fastcall __noreturn noreturn_1(unsigned int a1)
{
  __int64 v2; // rax

  if ( (unsigned __int8)sub_4882C() )
  {
    v2 = MEMORY[0x7FFDC0024BC0]();
    MEMORY[0x7FFDC0020AA0](v2, a1);
  }
  determine_corexit_import(a1);
  MEMORY[0x7FFDC001E3E0](a1);
  JUMPOUT(0x48829i64);
}
