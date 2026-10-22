/*
 * FUN_004D3BB0 (36 B) — Constructor (__thiscall, RET 4).
 *
 * Sets vtable to 0x772968, calls FUN_004DFDC0, then optionally frees
 * via FUN_004084E0 if (flags & 1). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dfdc0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void * __stdcall FUN_004d3bb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x00772968
        call    FUN_004dfdc0
        test    byte ptr [esp + 8], 1
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
