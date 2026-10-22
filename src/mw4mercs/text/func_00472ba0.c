/*
 * FUN_00472ba0 (30 B) — MLR object destructor (__thiscall, RET 0x4).
 * Calls FUN_00472d40, conditionally frees via FUN_004084e0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00472d40(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00472ba0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00472d40
        test    byte ptr [esp + 0x8], 0x1
        jz      L_bb8
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_bb8:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
