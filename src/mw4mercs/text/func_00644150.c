/*
 * FUN_00644150 (37 B) — __thiscall byte-packing setter.
 *
 * this->[0x34] = ((param_4 << 8 | param_1) << 8 | param_2) << 8 | param_3.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00644150(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10] ; param_4
        mov     edx, dword ptr [esp + 4]    ; param_1
        shl     eax, 8
        add     eax, edx
        mov     edx, dword ptr [esp + 8]    ; param_2
        shl     eax, 8
        add     eax, edx
        mov     edx, dword ptr [esp + 0xC]  ; param_3
        shl     eax, 8
        add     eax, edx
        mov     dword ptr [ecx + 0x34], eax
        ret     0x10
    }
}
