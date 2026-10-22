/*
 * FUN_1000ffa0 (44 B) - __stdcall, RET 0x8.
 * If this+0xc != 0 return 0xc112000d; else call FUN_1001ca10(arg2,this)
 * and, if >= 0, set this+0x4=1.
 *
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca10(void);

__declspec(naked) void __stdcall FUN_1000ffa0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L1
        mov     eax, 0xc112000d
        pop     esi
        ret     0x8
    L1:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_1001ca10
        test    eax, eax
        jl      L2
        mov     byte ptr [esi + 0x4], 0x1
    L2:
        pop     esi
        ret     0x8
    }
}
