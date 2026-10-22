/*
 * FUN_006a3aa0 (30 B) — __thiscall ABL object destructor. Calls base
 * destructor FUN_006a22e0, then if the delete-flag (stack arg) is set,
 * frees the object via FUN_004084e0 (operator delete). Returns `this`.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a22e0(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_006a3aa0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a22e0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_done
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_done:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
