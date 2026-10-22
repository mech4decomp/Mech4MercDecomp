/*
 * FUN_006665a0 (68 B) - Log/output dispatcher.
 *
 * Calls FUN_0064d170() then FUN_0064c950(result); if result != DAT_0080d9b0,
 * calls FUN_00562f40(0x10). Then based on char param_1, calls
 * FUN_0069ae70(7,0xb) or FUN_0069ae70(0x11,0x37).
 *
 * __cdecl, one char param.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_0064d170(void);
extern int FUN_0064c950(int);
extern int DAT_0080d9b0;
extern void FUN_00562f40(int);
extern void FUN_0069ae70(int, int);

__declspec(naked) void __cdecl FUN_006665a0(void)
{
    __asm {
        call    FUN_0064d170
        push    eax
        call    FUN_0064c950
        mov     ecx, dword ptr [DAT_0080d9b0]
        add     esp, 4
        cmp     eax, ecx
        jz      L_skip
        push    0x10
        call    FUN_00562f40
        add     esp, 4
L_skip:
        mov     al, byte ptr [esp + 4]
        test    al, al
        jz      L_else
        push    0xb
        push    0x7
        call    FUN_0069ae70
        add     esp, 8
        ret
L_else:
        push    0x37
        push    0x11
        call    FUN_0069ae70
        add     esp, 8
        ret
    }
}
