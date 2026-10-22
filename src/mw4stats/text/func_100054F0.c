/*
 * MW4Stats.dll - FUN_100054f0 (0x100054F0, 37 B, __cdecl)
 * If FUN_10005520(param_3) returns 0, calls FUN_10006260(param_1,param_2,param_3).
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10005520(void);
extern void __cdecl FUN_10006260(void);

__declspec(naked) void FUN_100054f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     ecx, esi
        call    FUN_10005520
        test    al, al
        jnz     L1
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        push    esi
        push    eax
        push    ecx
        call    FUN_10006260
        add     esp, 0xc
L1:
        pop     esi
        ret
    }
}
