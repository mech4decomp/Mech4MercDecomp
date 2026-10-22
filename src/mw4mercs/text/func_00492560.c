/*
 * FUN_00492560 (37 B) — __thiscall, RET 8 (2 stack params).
 * Dispatches to a method via a type table lookup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00492560(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x40]
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + ecx * 0x4]
        mov     edx, dword ptr [eax + 0xc]
        _emit 0x8B  /* mov ecx, [0x007b8c0c] */
        _emit 0x0D
        _emit 0x0C
        _emit 0x8C
        _emit 0x7B
        _emit 0x00
        mov     ecx, dword ptr [ecx + edx * 0x4]
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        add     esp, 0x8
        ret     0x8
    }
}
