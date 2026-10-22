/*
 * FUN_0069be00 (51 B) — __cdecl, 1 stack arg.
 *
 * Calls FUN_0064ca50(param_1), FUN_0069ae70(10, 0x13), FUN_0064d170(),
 * FUN_0064c9e0(...). If the result is 0, calls FUN_00562f40(0x1f).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0064ca50(int a);
extern void __cdecl FUN_0069ae70(int a, int b);
extern int __cdecl FUN_0064d170(void);
extern int __cdecl FUN_0064c9e0(int a, int b);
extern void __cdecl FUN_00562f40(int a);

__declspec(naked) void FUN_0069be00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        call    FUN_0064ca50
        push    0x13
        push    0xa
        mov     esi, eax
        call    FUN_0069ae70
        call    FUN_0064d170
        push    eax
        push    esi
        call    FUN_0064c9e0
        add     esp, 0x14
        test    eax, eax
        pop     esi
        jnz     L_done
        push    0x1f
        call    FUN_00562f40
        pop     ecx
    L_done:
        ret
    }
}
