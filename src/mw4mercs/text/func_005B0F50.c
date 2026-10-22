/*
 * FUN_005B0F50 (14 B true extent; 208 B slice incl. next fn) — in-.text
 * data block function (block 0x5B037F). Decrements a counter at [ecx+0x5e8];
 * when it hits zero, tail-calls FUN_005f5c00.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f5c00(void);

__declspec(naked) void FUN_005B0F50(void)
{
    __asm {
        dec     dword ptr [ecx + 0x5e8]
        jne     L5F5D
        jmp     FUN_005f5c00
L5F5D:
        ret
    }
}
