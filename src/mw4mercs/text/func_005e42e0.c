/*
 * FUN_005E42E0 (30 B) - Scalar deleting destructor (__thiscall, RET 4).
 *
 * Calls FUN_005E43D0 (real destructor), then if the flag param has bit 0
 * set, frees the object via FUN_004084E0. Returns the object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005e43d0(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __stdcall FUN_005e42e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005e43d0
        test    byte ptr [esp + 0x8], 0x1
        jz      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
