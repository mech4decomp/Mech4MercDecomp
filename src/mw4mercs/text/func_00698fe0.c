/*
 * FUN_00698fe0 (36 B) — Table lookup helper.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * Indexes a 0x10-byte-entry table at (this->field_18)->field_2c by
 * param_1; returns 0 if entry->field_c is zero, else
 * entry->field_8 + (this->field_18)->field_24.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00698fe0(void)
{
    __asm {
        mov     ecx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx + 0x2c]
        shl     eax, 4
        add     eax, edx
        mov     dl, byte ptr [eax + 0xc]
        test    dl, dl
        jnz     L_retval
        xor     eax, eax
        ret     4
L_retval:
        mov     eax, dword ptr [eax + 8]
        add     eax, dword ptr [ecx + 0x24]
        ret     4
    }
}
