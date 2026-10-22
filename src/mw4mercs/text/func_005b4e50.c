/*
 * FUN_005b4e50 (1001 B) — __thiscall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00419480(void *a);
extern void __stdcall FUN_0041c680(void *a, void *b);
extern void __stdcall FUN_0040c410(void *a);
extern void __stdcall FUN_00428730(void *a);
extern void __stdcall FUN_0040ca40(int a, void *b);
extern void __stdcall FUN_0040c9e0(void *a, void *b);
extern void __stdcall FUN_005b4d30(void *a, void *b);
extern void __stdcall FUN_00428810(void *a);
extern void __stdcall FUN_004c41f0(void *a);
extern void __stdcall FUN_0041acb0(void *a);
extern void __stdcall FUN_0041a070(void *a);
extern void __stdcall FUN_004daa20(void *a);

__declspec(naked) void __stdcall FUN_005b4e50(int a, int b)
{
    

extern int DAT_0076d048;
extern int DAT_0076c5b0;
extern int DAT_0076d064;
__asm {
sub     esp, 0xf4
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x78]
        push    esi
        lea     ecx, [ebx + 0x78]
        push    edi
        call    dword ptr [eax + 0x4]
        fld     qword ptr [esp + 0x104]
        fsub    qword ptr [ebx + 0xe4]
        mov     esi, dword ptr [ebx + 0xd8]
        add     esi, 0x80
        push    esi
        fstp    dword ptr [esp + 0x18]
        lea     ecx, [esp + 0x68]
        mov     edi, eax
        call    FUN_00419480
        push    esi
        lea     ecx, [ebx + 0x168]
        push    ecx
        lea     ecx, [esp + 0xa8]
        call    FUN_0041c680
        lea     edx, [esp + 0x64]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_0040c410
        fld     dword ptr [esp + 0xa0]
        fmul    dword ptr [esp + 0x14]
        lea     eax, [esp + 0xc4]
        push    eax
        mov     ecx, esi
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0xac]
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        call    FUN_00428730
        lea     ecx, [esp + 0xc4]
        push    ecx
        lea     ecx, [esp + 0x44]
        call    FUN_0040c410
        push    0x41c80000
        lea     edx, [esp + 0x44]
        push    edx
        lea     ecx, [esp + 0x48]
        call    FUN_0040ca40
        push    esi
        lea     ecx, [esp + 0x5c]
        call    FUN_00419480
        lea     eax, [esp + 0x40]
        push    eax
        lea     ecx, [esp + 0x5c]
        push    ecx
        lea     ecx, [esp + 0x60]
        call    FUN_0040c9e0
        fld     dword ptr [esp + 0x5c]
        fadd dword ptr [DAT_0076d048]
        lea     edx, [esp + 0x58]
        push    ebx
        push    edx
        fstp    dword ptr [esp + 0x64]
        call    FUN_005b4d30
        add     esp, 0x8
        fstp    dword ptr [esp + 0x10]
        push    esi
        lea     ecx, [esp + 0x34]
        call    FUN_00419480
        push    0x40800000
        lea     eax, [esp + 0x44]
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_0040ca40
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     edx, [esp + 0x34]
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_0040c9e0
        fld     dword ptr [esp + 0x34]
        fadd dword ptr [DAT_0076d048]
        lea     eax, [esp + 0xac]
        fstp    dword ptr [esp + 0x34]
        push    eax
        mov     ecx, esi
        call    FUN_00428810
        lea     ecx, [esp + 0xac]
        push    ecx
        lea     ecx, [esp + 0x98]
        call    FUN_0040c410
        push    0x41f00000
        lea     edx, [esp + 0x98]
        push    edx
        lea     ecx, [esp + 0x9c]
        call    FUN_0040ca40
        lea     eax, [esp + 0xb8]
        push    eax
        mov     ecx, esi
        call    FUN_004c41f0
        lea     ecx, [esp + 0xb8]
        push    ecx
        lea     ecx, [esp + 0x8c]
        call    FUN_0040c410
        push    0x41f00000
        lea     edx, [esp + 0x8c]
        push    edx
        lea     ecx, [esp + 0x90]
        call    FUN_0040ca40
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x4c], eax
        mov     dword ptr [esp + 0x50], ecx
        lea     eax, [esp + 0x94]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x38]
        mov     dword ptr [esp + 0x5c], edx
        call    FUN_0040c9e0
        lea     edx, [esp + 0x88]
        push    edx
        lea     eax, [esp + 0x50]
        push    eax
        lea     ecx, [esp + 0x54]
        call    FUN_0040c9e0
        lea     ecx, [esp + 0x30]
        push    ebx
        push    ecx
        call    FUN_005b4d30
        fstp    dword ptr [esp + 0x44]
        lea     edx, [esp + 0x54]
        push    ebx
        push    edx
        call    FUN_005b4d30
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x20]
        add     esp, 0x10
        fld     dword ptr [esp + 0x3c]
        fcomp   dword ptr [esp + 0x10]
        fnstsw ax
        test    ah, 0x41
        jnz     L_5079
        fstp    st(0)
        fld     dword ptr [esp + 0x3c]
L_5079:
        fld     dword ptr [esp + 0xc]
        fcomp   st(1)
        fnstsw ax
        test    ah, 0x41
        jnz     L_508c
        fstp    st(0)
        fld     dword ptr [esp + 0xc]
L_508c:
        mov     al, byte ptr [ebx + 0x548]
        test    al, al
        jz      L_509e
        fadd    dword ptr [ebx + 0x544]
        jmp     L_50a4
L_509e:
        fadd    dword ptr [ebx + 0x540]
L_50a4:
        fsub    dword ptr [esp + 0x68]
        fcom dword ptr [DAT_0076c5b0]
        fld     dword ptr [esp + 0x14]
        fnstsw ax
        test    ah, 0x41
        jnz     L_50c1
        fmul    dword ptr [edi + 0x318]
        jmp     L_50c7
L_50c1:
        fmul    dword ptr [edi + 0x31c]
L_50c7:
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x10]
        fchs
        fstp    dword ptr [esp + 0xc]
        fcom    dword ptr [esp + 0xc]
        fnstsw ax
        test    ah, 0x1
        jz      L_50e8
        fstp    st(0)
        fld     dword ptr [esp + 0xc]
        jmp     L_50f9
L_50e8:
        fcom    dword ptr [esp + 0x10]
        fnstsw ax
        test    ah, 0x41
        jnz     L_50f9
        fstp    st(0)
        fld     dword ptr [esp + 0x10]
L_50f9:
        fld     dword ptr [esp + 0x68]
        mov     eax, dword ptr [ebx]
        fadd    st(0), st(1)
        mov     ecx, ebx
        fstp    dword ptr [esp + 0x1c]
        fstp    st(0)
        call    dword ptr [eax + 0x114]
        fdivr   dword ptr [ebx + 0x440]
        push    esi
        lea     ecx, [esp + 0x28]
        fstp    dword ptr [esp + 0x10]
        call    FUN_0041acb0
        fld dword ptr [DAT_0076d064]
        fsub    dword ptr [esp + 0xc]
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x70]
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        fmul    dword ptr [edi + 0x2b4]
        fld     dword ptr [edi + 0x2b0]
        lea     ecx, [esp + 0x80]
        fmul    dword ptr [esp + 0x10]
        push    ecx
        push    eax
        faddp   st(1), st(0)
        mov     ecx, ebx
        fmul    dword ptr [esp + 0x20]
        fmul    dword ptr [ebx + 0x430]
        fadd    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [ebx + 0x178]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [ebx + 0x568]
        fchs
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [ebx + 0x570]
        fstp    dword ptr [esp + 0x34]
        call    dword ptr [edx + 0x164]
        fld     dword ptr [esp + 0x7c]
        fadd    dword ptr [esp + 0x18]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp + 0xd0]
        fst     dword ptr [esp + 0x18]
        rep movsd
        fld     dword ptr [esp + 0x80]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x84]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 0x70]
        mov     edx, dword ptr [esp + 0x20]
        lea     eax, [esp + 0x24]
        mov     dword ptr [esp + 0xec], ecx
        fstp    dword ptr [esp + 0x24]
        push    eax
        fld     dword ptr [esp + 0x2c]
        lea     ecx, [esp + 0xd4]
        fadd    dword ptr [esp + 0x78]
        mov     dword ptr [esp + 0x100], edx
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x30]
        fadd    dword ptr [esp + 0x7c]
        fstp    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0xe0]
        call    FUN_0041a070
        lea     ecx, [esp + 0xd0]
        push    ecx
        mov     ecx, ebx
        call    FUN_004daa20
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xf4
        ret     0x8
    }


}
