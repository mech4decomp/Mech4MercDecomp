/*
 * FUN_00523500 (57 B) — Conditional field setter.
 *
 * Reads param struct, checks field_4 value (0 or 7), sets field_14 or
 * field_30 on [this+0x4E8] accordingly.
 * __thiscall (ECX = this), RET 0x08 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00523500(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [eax + 8]
        mov     eax, dword ptr [eax + 4]
        test    eax, eax
        jz      l_case0
        cmp     eax, 7
        jnz     l_done
        _emit 0x8B
        _emit 0x81
        _emit 0xE8
        _emit 0x0E
        _emit 0x04
        _emit 0x00
        mov     ecx, dword ptr [edx]
        mov     dword ptr [eax + 0x30], ecx
        mov     eax, 1
        ret     8
    l_case0:
        _emit 0x8B
        _emit 0x81
        _emit 0xE8
        _emit 0x0E
        _emit 0x04
        _emit 0x00
        mov     ecx, dword ptr [edx]
        mov     dword ptr [eax + 0x14], ecx
    l_done:
        mov     eax, 1
        ret     8
    }
}
