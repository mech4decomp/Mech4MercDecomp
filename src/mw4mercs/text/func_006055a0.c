/*
 * FUN_006055a0 (30 B) — __thiscall scalar-deleting destructor. Calls
 * FUN_006055c0 (real dtor), then frees via FUN_004084e0 if flag bit 0 set.
 * Returns this; RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006055c0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006055a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006055c0
        test    byte ptr [esp + 8], 1
        jz      L_ret
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_ret:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
