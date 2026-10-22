/*
 * FUN_00498d40 (30 B) - MLR particle/flare scalar deleting destructor.
 * __thiscall (ECX = this), 1 stack arg (deleting flag), RET 0x4.
 *
 * Calls the real destructor FUN_00498f10, then frees the object via
 * FUN_004084e0 if the low flag bit is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00498f10(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00498d40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00498f10
        test    byte ptr [esp + 0x8], 0x1
        jz      L_58
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_58:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
