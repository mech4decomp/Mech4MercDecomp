/*
 * FUN_1000d960 (44 B) — __stdcall, RET 0x8.
 * If (param_1+0xc)!=0 return 0xc112000d; else call FUN_1001ca10(param_1,
 * param_2); if result >= 0 set byte (param_1+4)=1; return result.
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_1001ca10(void);

__declspec(naked) void __stdcall FUN_1000d960(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L975
        mov     eax, 0c112000dh
        pop     esi
        ret     0x8
    L975:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_1001ca10
        test    eax, eax
        jl      L988
        mov     byte ptr [esi + 0x4], 0x1
    L988:
        pop     esi
        ret     0x8
    }
}
