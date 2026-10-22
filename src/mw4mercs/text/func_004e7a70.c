/*
 * FUN_004E7A70 (22 B) — If this->field_18 is non-null, negates
 * this->field_14 and adds it to *field_18. Then zeroes field_14.
 *
 * __fastcall (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004e7a70(void)
{
    __asm {
        mov     eax, [ecx + 0x18]
        xor     edx, edx
        cmp     eax, edx
        jz      l_skip
        fld     dword ptr [ecx + 0x14]
        fchs
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
    l_skip:
        mov     [ecx + 0x14], edx
        ret
    }
}
