/*
 * FUN_00647ab0 (16 B) -- __cdecl (RET): if arg0 != NULL, free it
 * via FUN_004084e0 (cdecl, 1 arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00647ab0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      LBF
        push    eax
        call    FUN_004084e0
        pop     ecx
LBF:
        ret
    }
}
