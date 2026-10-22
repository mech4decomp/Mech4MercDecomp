/*
 * FUN_00647a80 (18 B) -- __stdcall (RET 0x8): if arg0 != NULL, free it
 * via FUN_004084e0 (cdecl, 1 arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00647a80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L8F
        push    eax
        call    FUN_004084e0
        pop     ecx
L8F:
        ret     0x8
    }
}
