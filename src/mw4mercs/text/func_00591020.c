/* FUN_00591020 - __thiscall, 64 bytes */
/* Multiplies 3 stack floats by this->field_24[0..2], accumulates into this->field_48[0..2] */

__declspec(naked) void FUN_00591020(void)
{
    __asm {
        sub     esp, 0xC             /* 3 local floats */
        lea     edx, [ecx + 0x24]    /* edx = &this->field_24 */
        xor     eax, eax             /* eax = 0 (loop index) */

loop_mul:
        fld     dword ptr [esp + eax + 0x10] /* ST(0) = stack_param[i] */
        add     eax, 4
        fmul    dword ptr [edx]      /* ST(0) *= this->field_24[i] */
        add     edx, 4
        cmp     eax, 0xC
        fstp    dword ptr [esp + eax - 4] /* local[i] = result */
        jl      loop_mul

        lea     eax, [ecx + 0x48]    /* eax = &this->field_48 */
        /* __emit: MSVC6 collapses lea edx,[esp] to 8D 14 24; ref uses disp8=0 8D 54 24 00 */
        __emit 0x8D
        __emit 0x54
        __emit 0x24
        __emit 0x00
        mov     ecx, 3               /* loop count */

loop_add:
        fld     dword ptr [eax]      /* ST(0) = this->field_48[i] */
        add     edx, 4
        fadd    dword ptr [edx - 4]  /* ST(0) += local[i] */
        add     eax, 4
        dec     ecx
        fstp    dword ptr [eax - 4]  /* this->field_48[i] = result */
        jnz     loop_add

        add     esp, 0xC
        ret     0xC
    }
}
