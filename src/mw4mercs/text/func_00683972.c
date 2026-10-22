/*
 * FUN_00683972 (extent 0x683972-0x6839de) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;

__declspec(naked) void FUN_00683972(void)
{
    __asm {
        // jump-table tail of prior function @ 0x00683972 (18 bytes of data,
        // literal patched addresses; one byte per __emit line)
        __emit 0x8B  // jt dword 0x37CCFF8B
        __emit 0xFF
        __emit 0xCC
        __emit 0x37
        __emit 0x68  // jt dword 0x37E80068
        __emit 0x00
        __emit 0xE8
        __emit 0x37
        __emit 0x68  // jt dword 0x37EF0068
        __emit 0x00
        __emit 0xEF
        __emit 0x37
        __emit 0x68  // jt dword 0x37F60068
        __emit 0x00
        __emit 0xF6
        __emit 0x37
        __emit 0x68  // last jt byte @ 0x683983
        __emit 0x00
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov    ecx, dword ptr [esp + 4]
        fld    dword ptr [ecx + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_39b3
        fld    dword ptr [g_0076c5b0]
        fsubr    dword ptr [g_0076d064]
        ret    4
L_39b3:
        fld    dword ptr [ecx + 0x14]
        fcomp    dword ptr [ecx + 0x10]
        fnstsw  ax
        test    ah, 1
        jne    L_39cf
        fld    dword ptr [g_0076d064]
        fsubr    dword ptr [g_0076d064]
        ret    4
L_39cf:
        fld    dword ptr [ecx + 0x14]
        fdiv    dword ptr [ecx + 0x10]
        fsubr    dword ptr [g_0076d064]
        ret    4
    }
}
