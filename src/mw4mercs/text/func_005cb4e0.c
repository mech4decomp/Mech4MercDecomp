/*
 * FUN_005cb4e0 (18 B) — If param != 0, free it via FUN_004084E0.
 *
 * __stdcall, RET 8 (two stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005cb4e0(void *a, void *b)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      l_done
        push    eax
        call    FUN_004084e0
        pop     ecx
    l_done:
        ret     8
    }
}
