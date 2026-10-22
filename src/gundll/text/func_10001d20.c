/*
 * FUN_10001d20 (34 B) - __stdcall, RET 0x4. Allocates via FUN_1000c1b0,
 * sets header to -1, returns +8.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000c1b0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10001d20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        add     eax, 8
        push    eax
        call    FUN_1000c1b0
        test    eax, eax
        jz      L_3d
        mov     dword ptr [eax], 0xffffffff
        add     eax, 8
        ret     4
L_3d:
        xor     eax, eax
        ret     4
    }
}
