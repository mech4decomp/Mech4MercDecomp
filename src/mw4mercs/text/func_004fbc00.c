/*
 * FUN_004FBC00 (36 B) — Constructor (__thiscall, RET 4).
 *
 * Sets vtable to 0x775D6C, calls FUN_00501470, then optionally frees
 * via FUN_004084E0 if (flags & 1). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501470(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void * __stdcall FUN_004fbc00(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x00775D6C
        call    FUN_00501470
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
