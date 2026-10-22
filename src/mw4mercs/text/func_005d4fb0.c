/*
 * FUN_005d4fb0 (202 B) — __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005d4fb0(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_00788154;
extern int DAT_00788150;
extern int DAT_0078814c;
extern int DAT_00788148;
__asm {
mov     edx, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        fld     dword ptr [esi]
        push    edi
        fsub    dword ptr [edx]
        mov     edi, dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [edi]
        fsub    dword ptr [ecx]
        fld     dword ptr [esp + 0x18]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_4fe7
        mov     dword ptr [esp + 0x18], 0x4cbebc20
L_4fe7:
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_4ffc
        fstp    st(0)
        fld dword ptr [DAT_00788154]
L_4ffc:
        fld     dword ptr [esi + 0x8]
        fsub    dword ptr [edx + 0x8]
        fdiv    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [edi + 0x8]
        pop     edi
        fsub    dword ptr [ecx + 0x8]
        pop     esi
        fdiv    st, st(1)
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [edx]
        fsubr   dword ptr [edx + 0x8]
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [ecx]
        fsubr   dword ptr [ecx + 0x8]
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [esp + 0xc]
        fnstsw  ax
        fsubrp  st(1), st
        test    ah, 0x40
        jz      L_5043
        fmul dword ptr [DAT_00788150]
        jmp     L_504d
L_5043:
        fld     dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0xc]
        fdivp   st(1), st
L_504d:
        fsub    dword ptr [ecx]
        fdivrp  st(1), st
        fcom dword ptr [DAT_0078814c]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_5073
        fcomp dword ptr [DAT_00788148]
        fnstsw  ax
        test    ah, 0x41
        jz      L_5075
        mov     eax, 0x1
        ret     0x10
L_5073:
        fstp    st(0)
L_5075:
        xor     eax, eax
        ret     0x10
    }


}
