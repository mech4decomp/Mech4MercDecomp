/*
 * FUN_004C4140 (67 B) — Math function using FPATAN and FDIV.
 *
 * __thiscall (ECX = this), RET 0x10 (4 output params).
 * Computes atan2(this+0x21c, this+0x20c), doubles the angle,
 * and computes this+0x214 / this+0x20c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004c4140(void)
{
    __asm {
        _emit 0xD9
        _emit 0x81
        _emit 0x0C
        _emit 0x02
        _emit 0x00
        _emit 0x00
        mov     eax, dword ptr [ecx + 0x21c]
        _emit 0xD9
        _emit 0x81
        _emit 0x1C
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xD9
        _emit 0xF3
        mov     edx, dword ptr [esp + 4]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [ecx + 0x220]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [esp + 0xc]
        _emit 0xDC
        _emit 0xC0
        _emit 0xD9
        _emit 0x18
        _emit 0xD9
        _emit 0x81
        _emit 0x14
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xD8
        _emit 0xB1
        _emit 0x0C
        _emit 0x02
        _emit 0x00
        _emit 0x00
        mov     ecx, dword ptr [esp + 0x10]
        _emit 0xD9
        _emit 0x19
        ret     0x10
    }
}
