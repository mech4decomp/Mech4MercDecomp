/*
 * FUN_005f3ff0 (1573 B) — __thiscall, RET 8 (2 stack params).
 *
 * Vehicle update: computes aim/turn angles, copies a 4x3 matrix, and does a
 * large matrix multiply. Heavy FPU usage.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_007b220c;
extern float DAT_0076c5b0;
extern float DAT_0078a30c;
extern float DAT_0076d064;
extern float DAT_0076d598;
extern float DAT_00770168;
extern int DAT_007b4354;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007dc728;
extern void FUN_00419480(void);
extern void FUN_00419460(void);
extern void FUN_0041fde0(void);
extern void FUN_0041c830(void);
extern void FUN_005f5a00(void);
extern void FUN_00428730(void);
extern void FUN_004e2f40(void);
extern void FUN_004e8dc0(void);
extern void FUN_0040d030(void);
extern void FUN_005fa120(void);

__declspec(naked) void __fastcall FUN_005f3ff0(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x144
        push    ebx
        mov     ebx, ecx
        mov     al, byte ptr [ebx + 0x468]
        test    al, al
        push    esi
        push    edi
        jz      L4144
        mov     eax, dword ptr [ebx + 0xd8]
        lea     esi, [eax + 0x80]
        push    esi
        lea     ecx, [ebp - 0x64]
        call    FUN_00419480
        push    esi
        lea     ecx, [ebp - 0xf8]
        call    FUN_00419460
        push    0x2
        push    0x0
        push    0x1
        push    0x7b8d18
        lea     ecx, [ebp - 0xf8]
        call    FUN_0041fde0
        lea     eax, [ebp - 0xf8]
        push    eax
        lea     ecx, [ebx + 0x45c]
        push    ecx
        lea     ecx, [ebp - 0x18]
        call    FUN_0041c830
        mov     al, byte ptr [ebx + 0x469]
        test    al, al
        jz      L4073
        fld     dword ptr [ebp - 0x18]
        fchs
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x10]
        fchs
        fstp    dword ptr [ebp - 0x10]
L4073:
        fld     dword ptr [ebp - 0x10]
        mov     dword ptr [ebx + 0x430], 0
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw ax
        test ah, 0x1
        jz      L4144
        fld     dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x10]
        fpatan
        fcom    dword ptr [DAT_0076c5b0]
        fst     dword ptr [ebp - 0x8]
        fnstsw ax
        test ah, 0x41
        jz      L40af
        fchs
L40af:
        fcomp   dword ptr [DAT_0078a30c]
        fnstsw ax
        test ah, 0x41
        jnz     L4144
        mov     edx, dword ptr [ebx + 0x78]
        lea     ecx, [ebx + 0x78]
        call    dword ptr [edx + 0x4]
        fld     qword ptr [ebp + 0x8]
        fsub    qword ptr [ebx + 0xe4]
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        fstp    dword ptr [ebp - 0x4]
        call    dword ptr [eax + 0x114]
        fdivr   dword ptr [ebx + 0x440]
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [ebp - 0x8]
        fld     dword ptr [DAT_0076d064]
        fsub    st, st(2)
        fmul    dword ptr [esi + 0x2b4]
        fld     dword ptr [esi + 0x2b0]
        fmul    st, st(3)
        faddp   st(1), st
        fmul    dword ptr [ebp - 0x4]
        fdivp   st(1), st
        fstp    st(1)
        fcom    dword ptr [DAT_0076d598]
        fst     dword ptr [ebx + 0x430]
        fnstsw ax
        test ah, 0x1
        jz      L412d
        fstp    st
        mov     dword ptr [ebx + 0x430], 0xbf800000
        jmp     L4144
L412d:
        fcomp   dword ptr [DAT_0076d064]
        fnstsw ax
        test ah, 0x41
        jnz     L4144
        mov     dword ptr [ebx + 0x430], 0x3f800000
L4144:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     esi, dword ptr [ebx + 0xd8]
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [ebx + 0xec], ecx
        add     esi, 0x50
        lea     edi, [ebx + 0xf4]
        mov     ecx, 0xc
        rep movsd
        mov     ecx, ebx
        mov     dword ptr [ebx + 0xf0], edx
        call    FUN_005f5a00
        mov     ecx, dword ptr [ebx + 0x508]
        test    ecx, ecx
        jz      L45fd
        mov     eax, dword ptr [DAT_007b4354]
        test    eax, eax
        jz      L45fd
        mov     eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [eax]
        xor     edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0x20]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0x1e4]
        test    edx, edx
        jz      L45fd
        lea     eax, [ebp - 0xc8]
        mov     dword ptr [ebp - 0xc0], 0xbf800000
        mov     dword ptr [ebp - 0xc4], 0xbf800000
        mov     dword ptr [ebp - 0xc8], 0xbf800000
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [DAT_007dab40]
        mov     dword ptr [ebp - 0x13c], 0xbf800000
        mov     dword ptr [ebp - 0x140], 0xbf800000
        mov     dword ptr [ebp - 0x144], 0xbf800000
        mov     edx, dword ptr [ecx]
        xor     edx, eax
        mov     eax, dword ptr [edx + 0x20]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1e4]
        mov     edx, dword ptr [ecx]
        lea     eax, [ebp - 0x144]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     ecx, 0xc
        lea     esi, [ebp - 0x138]
        lea     edi, [ebp - 0xbc]
        rep movsd
        lea     ecx, [ebp - 0x28]
        push    ecx
        lea     ecx, [ebp - 0xbc]
        mov     dword ptr [ebp - 0x1c], 0x43fa0000
        call    FUN_00428730
        mov     eax, dword ptr [ebx + 0x124]
        test    eax, eax
        jz      L45fd
        mov     edx, dword ptr [ebx + 0xd8]
        add     eax, 0x10
        mov     dword ptr [ebp - 0xc], eax
        add     edx, 0x80
        lea     eax, [ebp - 0xf8]
        mov     dword ptr [ebp - 0x4], edx
        mov     dword ptr [ebp - 0x8], eax
        mov     edx, dword ptr [ebp - 0xc]
        push    esi
        mov     esi, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp - 0x8]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st
        faddp   st(1), st
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        mov     ecx, dword ptr [ebp - 0xec]
        mov     eax, dword ptr [ebp - 0xcc]
        mov     edx, dword ptr [ebp - 0xdc]
        mov     dword ptr [ebp - 0x34], ecx
        mov     dword ptr [ebp - 0x2c], eax
        lea     ecx, [ebp - 0x34]
        mov     dword ptr [ebp - 0x30], edx
        lea     eax, [ebp - 0x7c]
        mov     dword ptr [ebp - 0x7c], ecx
        mov     ecx, dword ptr [DAT_007dc728]
        lea     edx, [ebp - 0x64]
        push    eax
        mov     dword ptr [ebp - 0x78], edx
        mov     dword ptr [ebp - 0x74], 0
        mov     dword ptr [ebp - 0x6c], ebx
        mov     dword ptr [ebp - 0x68], 0x1000
        call    FUN_004e2f40
        mov     edx, dword ptr [ebp - 0x1c]
        lea     ecx, [ebp - 0x18]
        push    ecx
        push    edx
        lea     ecx, [ebp - 0x34]
        call    FUN_004e8dc0
        lea     eax, [ebp - 0x18]
        push    eax
        lea     ecx, [ebp - 0xbc]
        call    FUN_0040d030
        mov     eax, dword ptr [ebx + 0xd8]
        lea     esi, [eax + 0x80]
        push    esi
        lea     ecx, [ebp - 0x58]
        call    FUN_00419480
        fld     dword ptr [ebp - 0x30]
        fsub    dword ptr [ebp - 0x54]
        fstp    dword ptr [ebp - 0x88]
        fld     dword ptr [ebp - 0x24]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fld     dword ptr [ebp - 0x88]
        fnstsw ax
        test ah, 0x1
        jnz     L44a0
        fadd    dword ptr [DAT_00770168]
        jmp     L44a5
L44a0:
        fdiv    dword ptr [ebp - 0x24]
        fchs
L44a5:
        mov     ecx, dword ptr [DAT_007dab44]
        fstp    dword ptr [ebp - 0x84]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [eax + 0x18]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x178]
        test    ecx, ecx
        jz      L45eb
        mov     ecx, dword ptr [eax + 0x20]
        mov     eax, dword ptr [eax + 0x18]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x178]
        mov     eax, dword ptr [eax + 0x6b4]
        xor     ecx, 0x85739531
        test    eax, eax
        jz      L45eb
        test    ecx, ecx
        jz      L45eb
        fld     dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        fld     dword ptr [esi + 0xc]
        mov     eax, dword ptr [eax + 0xac]
        fxch    st(1)
        mov     dword ptr [ebp - 0x48], edx
        mov     edx, dword ptr [esi + 0x1c]
        fsub    st, st(1)
        fxch    st(1)
        mov     dword ptr [ebp - 0x44], eax
        mov     eax, dword ptr [esi + 0x2c]
        fstp    st
        fld     dword ptr [ebp - 0x48]
        mov     dword ptr [ebp - 0x3c], edx
        fsub    dword ptr [ebp - 0x3c]
        mov     dword ptr [ebp - 0x38], eax
        fld     dword ptr [ebp - 0x44]
        mov     edx, dword ptr [ebx + 0x508]
        fsub    dword ptr [ebp - 0x38]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        mov     esi, dword ptr [ebx + 0x50c]
        fld     st(2)
        fmul    st, st(3)
        fld     st(1)
        fmul    st, st(2)
        faddp   st(1), st
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fstp    dword ptr [ebp - 0xc]
        fstp    st
        fstp    st
        fstp    st
        fld     dword ptr [ecx + 0x1b8]
        mov     dword ptr [ebp - 0x8c], esi
        fld     st(0)
        fmul    st, st(1)
        fstp    dword ptr [ebp - 0x4]
        fstp    st
        jz      L45eb
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [ebp - 0xc]
        fnstsw ax
        test ah, 0x41
        jnz     L45dd
        fld     dword ptr [ecx + 0x1b4]
        mov     edx, dword ptr [edx + 0x10]
        fld     st(0)
        mov     byte ptr [edx + 0xa0], 0x1
        fmulp   st(1), st
        fld     dword ptr [ebp - 0x4]
        fsub    st, st(1)
        fst     dword ptr [ebp - 0x8]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw ax
        test ah, 0x1
        jz      L45e9
        fld     dword ptr [ebp - 0xc]
        fcomp   st(1)
        fnstsw ax
        test ah, 0x1
        jz      L45c4
        fstp    dword ptr [ebp - 0xc]
        jmp     L45c6
L45c4:
        fstp    st
L45c6:
        fld     dword ptr [ebp - 0x4]
        fsub    dword ptr [ebp - 0xc]
        fdiv    dword ptr [ebp - 0x8]
        fmul    dword ptr [ebx + 0x50c]
        fstp    dword ptr [ebp - 0x8c]
        jmp     L45eb
L45dd:
        mov     eax, dword ptr [edx + 0x10]
        mov     byte ptr [eax + 0xa0], 0
        jmp     L45eb
L45e9:
        fstp    st
L45eb:
        mov     ecx, dword ptr [ebx + 0x508]
        mov     edx, dword ptr [ecx]
        lea     eax, [ebp - 0xc8]
        push    eax
        call    dword ptr [edx + 0x4]
L45fd:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp + 0x8]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    FUN_005fa120
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }

}
