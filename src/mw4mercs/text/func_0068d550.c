/*
 * FUN_0068d550 (18 B) — delete wrapper: if the pointer is non-null,
 * calls operator delete (FUN_004084e0) on it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_0068d550(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      skip
        push    eax
        call    FUN_004084e0
        pop     ecx
skip:
        ret     0x8
    }
}
