/*
 * FUN_005ea980 (1180 B) — __thiscall, no stack params (plain RET).
 *
 * Large update/render routine. Reads this+0x78 vtable, calls FUN_005f07c0,
 * and performs a series of matrix/vector setup calls (FUN_00428850,
 * FUN_0040d030, FUN_00419460, FUN_0041a070, FUN_004daa20) with FPU
 * arithmetic on this+0x1xx/0x2xx fields. Branches on byte this+0x1dc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f07c0(void);
extern void __stdcall FUN_00428850(void);
extern void __stdcall FUN_0040d030(void);
extern void __stdcall FUN_004daa20(void);
extern void __stdcall FUN_00419460(void);
extern void __stdcall FUN_0041a070(void);

__declspec(naked) void __stdcall FUN_005ea980(void)
{
    

extern int DAT_007b8cec;
extern int DAT_007b8ce8;
extern int DAT_007b8cf0;
extern int DAT_0076c5b0;
extern int DAT_0076d064;
extern int DAT_00789868;
extern int DAT_007899e4;
extern int DAT_0076c5ac;
__asm {
sub     esp, 0xe4
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        call    FUN_005f07c0
        mov     edi, dword ptr [eax + 0x9ac]
        mov     eax, dword ptr [ebp + 0x78]
        lea     ecx, [ebp + 0x78]
        mov     dword ptr [esp + 0x44], edi
        call    dword ptr [eax + 0x4]
        mov     bl, byte ptr [ebp + 0x1dc]
        test    bl, bl
        mov     dword ptr [esp + 0x10], eax
        jz      L_AB14
        mov ecx, dword ptr [DAT_007b8cec]
        mov edx, dword ptr [DAT_007b8ce8]
        mov eax, dword ptr [DAT_007b8cf0]
        mov     dword ptr [esp + 0x24], ecx
        push    0x7b9460
        lea     ecx, [esp + 0xc8]
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_00428850
        mov     esi, dword ptr [ebp + 0x180]
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x5c]
        add     eax, 0x50
        mov     dword ptr [esp + 0x58], ecx
        mov     edx, dword ptr [eax + 0x1c]
        lea     ecx, [esp + 0x58]
        mov     dword ptr [esp + 0x5c], edx
        mov     eax, dword ptr [eax + 0x2c]
        push    ecx
        lea     ecx, [esp + 0xc8]
        mov     dword ptr [esp + 0x64], eax
        call    FUN_0040d030
        lea     edx, [esp + 0xc4]
        push    edx
        mov     ecx, esi
        call    FUN_004daa20
        fld     dword ptr [ebp + 0x20c]
        fadd    dword ptr [ebp + 0x1c0]
        mov eax, dword ptr [DAT_007b8cf0]
        push    0x7b9460
        lea     ecx, [esp + 0xc8]
        fst     dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x2c], eax
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [ebp + 0x1bc]
        fstp    dword ptr [esp + 0x24]
        call    FUN_00419460
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0xc8]
        call    FUN_0041a070
        lea     edx, [esp + 0xc4]
        push    edx
        lea     ecx, [edi + 0xd4]
        call    FUN_00428850
        mov     esi, dword ptr [ebp + 0x194]
        test    esi, esi
        jz      L_AB14
        push    0x7b9460
        lea     ecx, [esp + 0x98]
        call    FUN_00428850
        fld     dword ptr [esp + 0x48]
        mov     eax, dword ptr [esp + 0x10]
        fmul    dword ptr [eax + 0x648]
        mov     dword ptr [esp + 0x40], 0
        mov     dword ptr [esp + 0x38], 0
        fstp    dword ptr [esp + 0x3c]
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x5c]
        add     eax, 0x50
        mov     dword ptr [esp + 0x4c], ecx
        mov     edx, dword ptr [eax + 0x1c]
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x50], edx
        mov     eax, dword ptr [eax + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x98]
        mov     dword ptr [esp + 0x58], eax
        call    FUN_0040d030
        lea     edx, [esp + 0x38]
        push    edx
        lea     ecx, [esp + 0x98]
        call    FUN_0041a070
        lea     eax, [esp + 0x94]
        push    eax
        mov     ecx, esi
        call    FUN_004daa20
L_AB14:
        test    bl, bl
        fld dword ptr [DAT_0076c5b0]
        jnz     L_AB7D
        cmp     dword ptr [ebp + 0x1e0], 0x3
        jz      L_AB73
        fstp    st(0)
        fld     dword ptr [ebp + 0x198]
        fcomp dword ptr [DAT_0076c5b0]
        fld     dword ptr [ebp + 0x198]
        fnstsw  ax
        test    ah, 0x41
        jz      L_AB44
        fchs
L_AB44:
        mov     ecx, dword ptr [esp + 0x10]
        fdiv    dword ptr [ecx + 0x644]
        fst     dword ptr [esp + 0x10]
        fcomp dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_AB67
        mov     dword ptr [esp + 0x10], 0x3f800000
L_AB67:
        fld dword ptr [DAT_0076d064]
        fsub    dword ptr [esp + 0x10]
        jmp     L_AB8D
L_AB73:
        mov     dword ptr [esp + 0x10], 0x3f800000
        jmp     L_AB8D
L_AB7D:
        fstp    st(0)
        mov     dword ptr [esp + 0x10], 0x3f800000
        fld dword ptr [DAT_0076c5b0]
L_AB8D:
        fld dword ptr [DAT_007b8ce8]
        mov edx, dword ptr [DAT_007b8cf0]
        fstp    dword ptr [esp + 0x14]
        mov     eax, edx
        mov     dword ptr [esp + 0x1c], eax
        fmul    dword ptr [ebp + 0x19c]
        mov     dword ptr [esp + 0x40], edx
        fstp    dword ptr [esp + 0x18]
        fld dword ptr [DAT_00789868]
        fmul dword ptr [DAT_007899e4]
        fld     dword ptr [esp + 0x18]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x1
        jz      L_ABD0
        fstp    dword ptr [esp + 0x18]
        jmp     L_ABF3
L_ABD0:
        fstp    st(0)
        fld dword ptr [DAT_00789868]
        fmul dword ptr [DAT_0076c5ac]
        fld     dword ptr [esp + 0x18]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jnz     L_ABF1
        fstp    dword ptr [esp + 0x18]
        jmp     L_ABF3
L_ABF1:
        fstp    st(0)
L_ABF3:
        push    0x7b9460
        lea     ecx, [esp + 0x68]
        call    FUN_00428850
        mov     esi, dword ptr [ebp + 0x180]
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x5c]
        add     eax, 0x50
        mov     dword ptr [esp + 0x2c], ecx
        mov     edx, dword ptr [eax + 0x1c]
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x30], edx
        mov     eax, dword ptr [eax + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x38], eax
        call    FUN_0041a070
        lea     edx, [esp + 0x2c]
        push    edx
        lea     ecx, [esp + 0x68]
        call    FUN_0040d030
        test    bl, bl
        jnz     L_AC51
        lea     eax, [esp + 0x64]
        push    eax
        mov     ecx, esi
        call    FUN_004daa20
L_AC51:
        fld     dword ptr [esp + 0x10]
        mov ecx, dword ptr [DAT_007b8cf0]
        fmul    dword ptr [ebp + 0x20c]
        mov     dword ptr [esp + 0x1c], ecx
        push    0x7b9460
        lea     ecx, [esp + 0x68]
        fst     dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [ebp + 0x204]
        fstp    dword ptr [esp + 0x18]
        call    FUN_00419460
        mov     esi, dword ptr [ebp + 0x188]
        mov     eax, dword ptr [esi + 0xd8]
        mov     edx, dword ptr [eax + 0x5c]
        add     eax, 0x50
        mov     dword ptr [esp + 0x2c], edx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x30], ecx
        mov     edx, dword ptr [eax + 0x2c]
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x38], edx
        call    FUN_0041a070
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x68]
        call    FUN_0040d030
        lea     edx, [esp + 0x64]
        push    edx
        mov     ecx, esi
        call    FUN_004daa20
        fld     dword ptr [ebp + 0x208]
        mov     ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [DAT_007b8cf0]
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], eax
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x64]
        rep movsd
        mov     esi, dword ptr [ebp + 0x18c]
        fstp    dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi + 0xd8]
        mov     edx, dword ptr [eax + 0x5c]
        add     eax, 0x50
        mov     dword ptr [esp + 0x2c], edx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x30], ecx
        mov     edx, dword ptr [eax + 0x2c]
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x38], edx
        call    FUN_0041a070
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x68]
        call    FUN_0040d030
        lea     edx, [esp + 0x64]
        push    edx
        mov     ecx, esi
        call    FUN_004daa20
        test    bl, bl
        jnz     L_ADBA
        mov ecx, dword ptr [DAT_007b8ce8]
        mov eax, dword ptr [DAT_007b8cec]
        mov edx, dword ptr [DAT_007b8cf0]
        mov     dword ptr [esp + 0x20], ecx
        push    0x7b9460
        lea     ecx, [esp + 0x98]
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x2c], edx
        call    FUN_00419460
        fld     dword ptr [ebp + 0x1bc]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x10]
        lea     eax, [esp + 0x20]
        fadd    dword ptr [ebp + 0x1c0]
        push    eax
        lea     ecx, [esp + 0x98]
        fstp    dword ptr [esp + 0x28]
        call    FUN_0041a070
        mov     edx, dword ptr [esp + 0x44]
        lea     ecx, [esp + 0x94]
        push    ecx
        lea     ecx, [edx + 0xd4]
        call    FUN_00419460
L_ADBA:
        push    0x7b9460
        lea     ecx, [esp + 0x98]
        call    FUN_00419460
        fld     dword ptr [ebp + 0x198]
        mov ecx, dword ptr [DAT_007b8cf0]
        mov eax, dword ptr [DAT_007b8cec]
        lea     edx, [esp + 0x38]
        mov     dword ptr [esp + 0x40], ecx
        fstp    dword ptr [esp + 0x38]
        push    edx
        lea     ecx, [esp + 0x98]
        mov     dword ptr [esp + 0x40], eax
        call    FUN_0041a070
        mov     eax, dword ptr [esp + 0x44]
        lea     edi, [eax + 0x104]
        mov     ecx, 0xc
        lea     esi, [esp + 0x94]
        rep movsd
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xe4
        ret
    }


}
