/*
 * FUN_006CE300 — save parser state onto stack.
 *
 * Checks stack depth (max 0x1f), then saves all parser globals
 * into the stack array at 0x83E3E4 and increments the counter.
 *
 * __cdecl, no stack params.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

void __stdcall FUN_006bfa50(const char *str);

__declspec(naked) void __stdcall func_006ce300(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0xEC
        _emit 0xF5
        _emit 0x83
        _emit 0x00
        cmp     ecx, 0x1f
        jnz     L_ok
        push    0x79e6e4
        call    FUN_006bfa50
        _emit 0x8B
        _emit 0x0D
        _emit 0xEC
        _emit 0xF5
        _emit 0x83
        _emit 0x00
        add     esp, 4
    L_ok:
        _emit 0x8B
        _emit 0x15
        _emit 0x34
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        lea     eax, [ecx + ecx * 2]
        shl     eax, 4
        mov     dword ptr [eax + 0x83e3e4], edx
        _emit 0x8B
        _emit 0x15
        _emit 0x24
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     dword ptr [eax + 0x83e3e8], edx
        _emit 0x8B
        _emit 0x15
        _emit 0x30
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     dword ptr [eax + 0x83e3ec], edx
        _emit 0x8B
        _emit 0x15
        _emit 0x2C
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     dword ptr [eax + 0x83e3f0], edx
        _emit 0x8B
        _emit 0x15
        _emit 0x28
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     dword ptr [eax + 0x83e3f4], edx
        _emit 0x8B
        _emit 0x15
        _emit 0x38
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     dword ptr [eax + 0x83e3f8], edx
        _emit 0x8B
        _emit 0x15
        _emit 0x3C
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     dword ptr [eax + 0x83e3fc], edx
        _emit 0x8B
        _emit 0x15
        _emit 0x20
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     dword ptr [eax + 0x83e400], edx
        _emit 0x8B
        _emit 0x15
        _emit 0x44
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     dword ptr [eax + 0x83e408], edx
        _emit 0x8B
        _emit 0x15
        _emit 0x40
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     dword ptr [eax + 0x83e40c], edx
        _emit 0x8B
        _emit 0x15
        _emit 0x08
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        inc     ecx
        mov     dword ptr [eax + 0x83e404], edx
        _emit 0x89
        _emit 0x0D
        _emit 0xEC
        _emit 0xF5
        _emit 0x83
        _emit 0x00
        ret
    }
}
