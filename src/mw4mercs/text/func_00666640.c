/*
 * FUN_00666640 (77 B) — __cdecl, one char stack param.
 *
 * Calls FUN_0064d170 / FUN_0064c950, conditionally calls FUN_00562f40(0x10),
 * then dispatches FUN_0069ae70(7,0xB) or FUN_0069ae70(0x11,0x37) based on
 * the param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_00666640_dword_80d9b8;   /* DAT_0080d9b8 */

extern void __cdecl FUN_0064d170(void);
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_0069ae70(void);

__declspec(naked) void __stdcall FUN_00666640(void)
{
    __asm {
        call    FUN_0064d170
        push    eax
        call    FUN_0064c950
        mov     ecx, dword ptr [eax + 0x4]
        add     esp, 0x4
        cmp     ecx, 0x3
        jnz     L_1
        mov     eax, dword ptr [eax + 0x14]
        cmp     eax, dword ptr [g_00666640_dword_80d9b8]
        jz      L_2
L_1:
        push    0x10
        call    FUN_00562f40
        add     esp, 0x4
L_2:
        mov     al, byte ptr [esp + 0x4]
        test    al, al
        jz      L_3
        push    0xB
        push    0x7
        call    FUN_0069ae70
        add     esp, 0x8
        ret
L_3:
        push    0x37
        push    0x11
        call    FUN_0069ae70
        add     esp, 0x8
        ret
    }
}
