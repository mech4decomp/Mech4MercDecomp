/*
 * FUN_006FD400 (67 B) — D3D device creation callback handler.
 *
 * __stdcall, RET 8. Checks if param2+0x08 == 0x2307 (D3DDEVTYPE_HAL?).
 * If so, calls FUN_006FDE20, sets globals, calls FUN_007047F0 (timeGetTime),
 * and stores the millisecond remainder.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fde20(void);
extern int __cdecl FUN_007047f0(void);

__declspec(naked) void __stdcall FUN_006fd400(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        cmp     dword ptr [eax + 8], 0x2307
        jnz     l_skip
        call    FUN_006fde20
        mov     eax, 4
        _emit   0xC7
        _emit   0x05
        _emit   0x08
        _emit   0x6F
        _emit   0x7B
        _emit   0x00
        _emit   0xFF
        _emit   0xFF
        _emit   0xFF
        _emit   0xFF
        _emit   0xA3
        _emit   0x4C
        _emit   0x68
        _emit   0x85
        _emit   0x00
        _emit   0xA3
        _emit   0x48
        _emit   0x68
        _emit   0x85
        _emit   0x00
        call    FUN_007047f0
        cdq
        mov     ecx, 0x3E8
        idiv    ecx
        _emit   0x89
        _emit   0x15
        _emit   0x04
        _emit   0x6F
        _emit   0x7B
        _emit   0x00
    l_skip:
        xor     eax, eax
        ret     8
    }
}
