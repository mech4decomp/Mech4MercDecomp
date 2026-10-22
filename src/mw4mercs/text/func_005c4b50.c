/*
 * func_005c4b50 - FUN_005c4b50
 * Float interpolation helper. Computes a value based on two global
 * parameters (0x54/0x53) and an input float argument.
 */
__declspec(naked) void func_005c4b50()
{
    

/* extern data/function symbols for __emit replacements */
extern void __cdecl FUN_005dbe52(void);
extern void __cdecl FUN_005eaeed(void);
extern void __cdecl FUN_00637b22(void);
extern void __cdecl FUN_006379fb(void);
extern void __cdecl FUN_00637af7(void);
extern void __cdecl FUN_006379d0(void);
__asm {
sub     esp, 8
        /* __emit: call rel32 to absolute address not expressible in MSVC6 inline asm */
        call FUN_005dbe52
        mov     ecx, [esp + 0xc]
        mov     [esp + 4], eax
        fild    dword ptr [esp + 4]
        /* __emit: MSVC6 encodes fstp [esp] as D9 1C 24, not D9 5C 24 00 */
        __emit 0xD9
        __emit 0x5C
        __emit 0x24
        __emit 0x00
        /* __emit: call rel32 to absolute address not expressible in MSVC6 inline asm */
        call FUN_005eaeed
        push    0x54
        fstp    dword ptr [esp + 0x10]
        /* __emit: call rel32 to absolute address not expressible in MSVC6 inline asm */
        call FUN_00637b22
        mov     ecx, eax
        /* __emit: call rel32 to absolute address not expressible in MSVC6 inline asm */
        call FUN_006379fb
        fstp    dword ptr [esp + 4]
        /* __emit: MSVC6 encodes fld [esp] as D9 04 24, not D9 44 24 00 */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fcomp   dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 1
        jnz     L1
        fld     dword ptr [esp + 0xc]
        add     esp, 8
        ret     4
    L1:
        push    0x53
        /* __emit: call rel32 to absolute address not expressible in MSVC6 inline asm */
        call FUN_00637af7
        mov     ecx, eax
        /* __emit: call rel32 to absolute address not expressible in MSVC6 inline asm */
        call FUN_006379d0
        fmul    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0xc]
        fsub    st, st(1)
        /* __emit: MSVC6 encodes fld [esp] as D9 04 24, not D9 44 24 00 */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fdiv    dword ptr [esp + 4]
        fmulp   st(1), st
        faddp   st(1), st
        add     esp, 8
        ret     4
    }


}
