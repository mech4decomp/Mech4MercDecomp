/*
 * FUN_00538AE0 (59 B) — Array element marker with conditional call.
 *
 * Computes index = param * 1031, sets byte at [this + index*8 + 0x353D] to 1.
 * If param != global->field_28 and *(this->field_4C+0x14) != 3, calls a function.
 * __thiscall (ECX = this), RET 0x08 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00538ae0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        _emit 0xC6
        _emit 0x84
        _emit 0xD1
        _emit 0x3D
        _emit 0x35
        _emit 0x00
        _emit 0x00
        _emit 0x01
        push    esi
        _emit 0x8B
        _emit 0x35
        _emit 0x94
        _emit 0xB0
        _emit 0x7D
        _emit 0x00
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x28]
        cmp     eax, edx
        jz      l_do_call
        mov     edx, dword ptr [ecx + 0x4C]
        cmp     dword ptr [edx + 0x14], 3
        jz      l_skip
    l_do_call:
        push    eax
        _emit 0xE8
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x00
    l_skip:
        pop     esi
        ret     8
    }
}
