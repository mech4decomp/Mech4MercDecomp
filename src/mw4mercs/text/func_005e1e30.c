/*
 * FUN_005e1e30 (30 B) — __thiscall destructor.
 *
 * Calls FUN_005e1e50(this); if the low bit of the flags param is set,
 * frees this via FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005e1e50(void *this);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void *__stdcall FUN_005e1e30(void *this, int flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005e1e50
        test    byte ptr [esp + 0x8], 1
        jz      l_ret
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_ret:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
