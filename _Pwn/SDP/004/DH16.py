__int64 __fastcall sub_140001000(__int64 a1)
{
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; (unsigned __int64)i < 0x12; ++i )
  {
    if ( *(_DWORD *)&aC[4 * i] != *(unsigned __int8 *)(a1 + i) )
      return 0i64;
  }
  return 1i64;
}