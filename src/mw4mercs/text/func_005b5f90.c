/*
 * FUN_005b5f90 (667 B) — __thiscall (ECX = this), RET 8 (two float params).
 * Physics/rotation update: reads object state, does FPU math, calls several
 * helper functions and a virtual method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00419480(void *param);
extern void __stdcall FUN_0041c680(void *a, void *b);
extern void __stdcall FUN_00419460(void *param);
extern void __stdcall FUN_0041a070(void *param);
extern void __stdcall FUN_004daa20(void *param);

__declspec(naked) void __stdcall FUN_005b5f90(void)
{
    

extern int DAT_0076d040;
extern int DAT_00773950;
extern int DAT_0077de90;
extern int DAT_007866d0;
extern int DAT_007866cc;
__asm {
sub     esp, 0x54
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xd8]
        push    edi
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00419480
        fld     dword ptr [esp + 0x68]
        fcomp   dword ptr [esp + 0x10]
        lea     edi, [esi + 0x78]
        fnstsw ax
        test    ah, 0x41
        jnz     L_5b5fce
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x318]
        jmp     L_5b5fdd
L_5b5fce:
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x31c]
        fchs
L_5b5fdd:
        fld     dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x68]
        fabs
        fcom dword ptr [DAT_0076d040]
        fnstsw ax
        test    ah, 0x1
        jz      L_5b6006
        fmul dword ptr [DAT_00773950]
        fmul    st, st(1)
        fstp    dword ptr [esi + 0x580]
        fstp    st(0)
        jmp     L_5b601e
L_5b6006:
        fstp    st(0)
        fmul    dword ptr [esp + 0x64]
        fmul dword ptr [DAT_0077de90]
        fadd    dword ptr [esi + 0x580]
        fstp    dword ptr [esi + 0x580]
L_5b601e:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x31c]
        fchs
        fcomp   dword ptr [esi + 0x580]
        fnstsw ax
        test    ah, 0x41
        jnz     L_5b6051
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x31c]
        fchs
        fstp    dword ptr [esi + 0x580]
        jmp     L_5b607e
L_5b6051:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        fld     dword ptr [esi + 0x580]
        fcomp   dword ptr [eax + 0x318]
        fnstsw ax
        test    ah, 0x41
        jnz     L_5b607e
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax + 0x318]
        mov     dword ptr [esi + 0x580], ecx
L_5b607e:
        mov     ecx, dword ptr [esi + 0xd8]
        mov     edx, dword ptr [esi + 0x580]
        add     ecx, 0x80
        lea     eax, [esi + 0x168]
        push    ecx
        lea     ebx, [esi + 0x198]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [eax], 0x0
        mov     dword ptr [esi + 0x16c], edx
        mov     dword ptr [esi + 0x170], 0x0
        call    FUN_0041c680
        mov     edx, dword ptr [esi + 0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [esp + 0x34]
        call    FUN_00419460
        fld     dword ptr [esp + 0x64]
        fmul    dword ptr [ebx]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x64]
        fmul    dword ptr [ebx + 0x4]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x64]
        fmul    dword ptr [ebx + 0x8]
        lea     ebx, [esi + 0x594]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x64]
        fmul    dword ptr [esi + 0x430]
        fadd    dword ptr [ebx]
        fstp    dword ptr [ebx]
        call    dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x2b4]
        mov     edx, dword ptr [edi]
        fmul    dword ptr [esi + 0x434]
        mov     ecx, edi
        fmul    dword ptr [esp + 0x64]
        fadd    dword ptr [esi + 0x598]
        fstp    dword ptr [esi + 0x598]
        call    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x2b4]
        fmul    dword ptr [esi + 0x438]
        fmul    dword ptr [esp + 0x64]
        fadd    dword ptr [esi + 0x59c]
        fstp    dword ptr [esi + 0x59c]
        fld     dword ptr [esi + 0x598]
        fcomp dword ptr [DAT_007866d0]
        fnstsw ax
        test    ah, 0x1
        jz      L_5b6176
        mov     dword ptr [esi + 0x598], 0xbeb33333
        jmp     L_5b6193
L_5b6176:
        fld     dword ptr [esi + 0x598]
        fcomp dword ptr [DAT_007866cc]
        fnstsw ax
        test    ah, 0x41
        jnz     L_5b6193
        mov     dword ptr [esi + 0x598], 0x3eb33333
L_5b6193:
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [esp + 0x68]
        lea     edx, [esp + 0x1c]
        push    edx
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x164]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0xc]
        push    ebx
        lea     ecx, [esp + 0x34]
        fst     dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x50], edx
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x60], eax
        fadd    dword ptr [ebx]
        fstp    dword ptr [ebx]
        fld     dword ptr [esp + 0x2c]
        fadd    dword ptr [esi + 0x598]
        fstp    dword ptr [esi + 0x598]
        fld     dword ptr [esp + 0x30]
        fadd    dword ptr [esi + 0x59c]
        fstp    dword ptr [esi + 0x59c]
        fstp    dword ptr [esp + 0x40]
        call    FUN_0041a070
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, esi
        call    FUN_004daa20
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x54
        ret     0x8
    }


}
