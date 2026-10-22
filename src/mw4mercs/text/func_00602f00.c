/*
 * FUN_00602f00 (18 B) — if ([esp+4] != 0) FUN_004084e0([esp+4]);
 * __stdcall RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00602f00(void)
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
