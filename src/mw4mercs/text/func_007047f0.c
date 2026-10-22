/* FUN_007047f0 - PRNG (LCG: x = x*0x343fd + 0x269ec3; return (x>>16)&0x7fff) */

extern unsigned int g_858a54; /* 0x00858a54 */

__declspec(naked) unsigned int __cdecl FUN_007047f0(void)
{
    __asm {
        mov eax, dword ptr [g_858a54]
        lea ecx, [eax + eax*2]
        lea edx, [eax + ecx*4]
        shl edx, 4
        add edx, eax
        shl edx, 8
        sub edx, eax
        lea eax, [eax + edx*4 + 0x269ec3]
        mov dword ptr [g_858a54], eax
        sar eax, 0x10
        and eax, 0x7fff
        ret
    }
}
