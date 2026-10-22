/*
 * FUN_005e1c30 (18 B) — __stdcall; frees a pointer via FUN_004084e0 if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005e1c30(void *p, int unused)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      l_ret
        push    eax
        call    FUN_004084e0
        pop     ecx
    l_ret:
        ret     8
    }
}
