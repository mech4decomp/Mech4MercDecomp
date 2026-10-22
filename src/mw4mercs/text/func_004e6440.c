/* FUN_004e6440 - MLR/Adept state engine destructor (44 B) */

extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004e6440(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x7740bc
        mov     eax, dword ptr [esi + 0x30]
        test    eax, eax
        jz      skip
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip
        push    eax
        call    FUN_004084e0
        add     esp, 4
skip:
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
