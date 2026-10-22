/*
 * FUN_005c3da0 (1415 B) — __stdcall RET 4, 1 stack param + ECX this.
 * Heavy FPU math (vector ops, atan2, dot products).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00580540(void *a, void *b);
extern void __stdcall FUN_0041fd80(void *a);
extern void __stdcall FUN_005809b0(void *a, void *b);
extern void __stdcall FUN_00580760(void *a, void *b, void *c);
extern void __stdcall FUN_005c72d0(void *a, void *b);
extern void __stdcall FUN_004c41d0(void *a, void *b);
extern void __stdcall FUN_0040c0e0(void *a);
extern void __stdcall FUN_00707e70(int a);
extern void __stdcall FUN_00507f90(void *a, void *b);
extern void __stdcall FUN_00419460(void *a, void *b);
extern void __stdcall FUN_00428730(void *a, void *b);
extern void __stdcall FUN_00419480(void *a, void *b);
extern void __stdcall FUN_0040c410(void *a, void *b);
extern void __stdcall FUN_00421100(void *a, void *b);
extern char __stdcall FUN_005c5650(void *a, void *b);
extern void __stdcall FUN_005cb3a0(void *a);
extern void __stdcall FUN_00684050(void *a, void *b);
extern void __stdcall FUN_006836f0(void *a, void *b, void *c);
extern void __stdcall FUN_005cb3c0(void *a);
extern void __stdcall FUN_005fbb00(void *a, void *b);
extern void __stdcall FUN_005c3500(void *a, void *b, void *c);
extern void __stdcall FUN_0040ca10(void *a, void *b, void *c);
extern void __stdcall FUN_0040cb00(void *a);
extern void __stdcall FUN_00682f70(void *a, void *b, void *c, void *d, void *e);
extern void __stdcall FUN_005c7ed0(void *a);
extern void __stdcall FUN_0041c830(void *a, void *b, void *c);
extern void __stdcall FUN_0040ca40(void *a, void *b, int c);
extern void __stdcall FUN_0040c9e0(void *a, void *b);
extern void __stdcall FUN_00684580(void *a, void *b, void *c);
extern void __stdcall FUN_006847e0(void *a);
extern void __stdcall FUN_00684840(void *a, void *b, int c);
extern void __stdcall FUN_00684150(void *a);
extern void __stdcall FUN_005c8610(void *a);
extern void __stdcall FUN_005c8b00(void *a, void *b);
extern void __stdcall FUN_005c3ad0(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h);
extern void __stdcall FUN_00415020(void);
extern void __stdcall FUN_005cb1a0(void *a, void *b);
extern void __stdcall FUN_005cb1b0(void *a, void *b);
extern void __stdcall FUN_005cb280(void *a, void *b);
extern void __stdcall FUN_004084e0(void *a);
extern void __stdcall FUN_00580560(void *a);

__declspec(naked) void __stdcall FUN_005c3da0(void *a)
{
    

extern int DAT_0078792c;
extern int DAT_007b220c;
extern int DAT_007878dc;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x20c
        push    ebx
        push    esi
        push    edi
        lea     eax, [ebp + -0x1]
        mov     edi, ecx
        push    eax
        lea     ecx, [ebp + -0x2c]
        call    FUN_00580540
        lea     ecx, [edi + 0x1c8]
        call    FUN_0041fd80
        mov     ecx, dword ptr [ebp + -0x24]
        mov     dword ptr [ebp + -0x8], eax
        mov     eax, dword ptr [ebp + -0x28]
        cmp     eax, ecx
        jz      L_3dea
        lea     ecx, [ebp + -0x8]
        push    ecx
        push    eax
        call    FUN_005809b0
        mov     eax, dword ptr [ebp + -0x28]
        add     esp, 0x8
        add     eax, 0x4
        mov     dword ptr [ebp + -0x28], eax
        jmp     L_3df9
L_3dea:
        push    0x1
        lea     edx, [ebp + -0x8]
        push    edx
        push    eax
        lea     ecx, [ebp + -0x2c]
        call    FUN_00580760
L_3df9:
        lea     eax, [ebp + -0x2c]
        push    eax
        mov     ecx, edi
        call    FUN_005c72d0
        mov     ecx, dword ptr [edi + 0x170]
        add     ecx, 0x3f8
        push    ecx
        lea     ecx, [ebp + -0x48]
        call    FUN_004c41d0
        lea     ecx, [ebp + -0x48]
        mov     dword ptr [ebp + -0x48], 0x77d13c
        call    FUN_0040c0e0
        mov     ebx, eax
        test    ebx, ebx
        jz      L_42fd
L_3e32:
        mov     edx, dword ptr [ebx]
        push    0x0
        mov     ecx, ebx
        call    dword ptr [edx + 0xb8]
        cmp     al, 0x1
        jnz     L_42eb
        mov     eax, dword ptr [ebx + 0x78]
        lea     esi, [ebx + 0x78]
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        test    eax, eax
        jz      L_42eb
        mov     ecx, dword ptr [edi + 0x600]
        mov     eax, dword ptr [ecx]
        cmp     eax, ecx
        jz      L_3e93
L_3e65:
        cmp     dword ptr [eax + 0x8], ebx
        jz      L_3e72
        mov     eax, dword ptr [eax]
        cmp     eax, ecx
        jnz     L_3e65
        jmp     L_3e93
L_3e72:
        fld dword ptr [DAT_0078792c]
        push    0x0
        fadd    dword ptr [eax + 0xc]
        fstp    dword ptr [ebp + -0x10]
        call    FUN_00707e70
        fcomp   dword ptr [ebp + -0x10]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_42eb
L_3e93:
        lea     ecx, [ebp + 0xfffffe24]
        push    ecx
        mov     ecx, dword ptr [ebx + 0x198]
        call    FUN_00507f90
        push    eax
        lea     ecx, [ebp + 0xffffff10]
        call    FUN_00419460
        lea     edx, [ebp + -0x58]
        push    edx
        lea     ecx, [ebp + 0xffffff10]
        call    FUN_00428730
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        lea     ecx, [ebp + 0xffffff10]
        push    ecx
        lea     ecx, [ebp + 0xffffff04]
        mov     esi, eax
        call    FUN_00419480
        lea     edx, [ebp + 0xffffff04]
        push    edx
        lea     ecx, [ebp + 0xffffff48]
        call    FUN_0040c410
        lea     eax, [ebp + -0x58]
        push    eax
        lea     ecx, [ebp + 0xffffff54]
        call    FUN_00421100
        fld     dword ptr [esi + 0x58]
        fstp    dword ptr [ebp + 0xffffff60]
        lea     ecx, [edi + 0x1c8]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      L_4316
        push    esi
        mov     ecx, edi
        call    FUN_005c5650
        cmp     al, 0x1
        mov     byte ptr [ebp + -0x1], al
        mov     dword ptr [ebp + -0x10], esi
        jnz     L_3fbe
        lea     ecx, [ebp + -0x39]
        push    ecx
        lea     ecx, [ebp + 0xffffff64]
        call    FUN_005cb3a0
        lea     edx, [ebp + 0xffffff64]
        push    edx
        lea     eax, [esi + 0x370]
        push    eax
        call    FUN_00684050
        lea     ecx, [ebp + 0xffffff64]
        push    ecx
        push    esi
        call    FUN_006836f0
        add     esp, 0x10
        test    eax, eax
        jz      L_3f9a
        mov     eax, dword ptr [eax + 0x24]
        test    eax, eax
        jz      L_3f9a
        mov     eax, dword ptr [eax + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [ebp + -0x1c], edx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [ebp + -0x18], ecx
        mov     edx, dword ptr [eax + 0x2c]
        lea     ecx, [ebp + 0xffffff64]
        mov     dword ptr [ebp + -0x14], edx
        call    FUN_005cb3c0
        jmp     L_4019
L_3f9a:
        lea     eax, [ebp + 0xfffffe9c]
        push    eax
        mov     ecx, esi
        call    FUN_005fbb00
        push    eax
        lea     ecx, [ebp + -0x1c]
        call    FUN_0040c410
        lea     ecx, [ebp + 0xffffff64]
        call    FUN_005cb3c0
        jmp     L_4019
L_3fbe:
        mov     ecx, dword ptr [edi + 0x170]
        mov     edx, dword ptr [ecx + 0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [ebp + 0xfffffef8]
        call    FUN_00419480
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp + 0xfffffe84]
        call    FUN_00419480
        lea     ecx, [ebp + 0xfffffef8]
        push    ecx
        push    esi
        lea     edx, [ebp + 0xfffffe90]
        push    edx
        mov     ecx, edi
        call    FUN_005c3500
        push    eax
        lea     ecx, [ebp + -0x1c]
        call    FUN_0040c410
        mov     dword ptr [ebp + -0x10], 0x0
L_4019:
        lea     eax, [ebp + -0x1c]
        lea     ecx, [edi + 0x4fc]
        push    eax
        call    FUN_0040c410
        lea     ecx, [ebp + 0xffffff10]
        push    ecx
        lea     ecx, [ebp + 0xffffff7c]
        call    FUN_00419480
        lea     edx, [ebp + 0xffffff7c]
        push    edx
        lea     eax, [ebp + -0x1c]
        push    eax
        lea     ecx, [ebp + 0xffffff70]
        call    FUN_0040ca10
        lea     ecx, [ebp + 0xffffff70]
        call    FUN_0040cb00
        fstp    dword ptr [ebp + -0x20]
        mov     eax, dword ptr [ebp + -0x20]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + -0x70], eax
        fld     dword ptr [edi + 0x52c]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [edi + 0x528]
        fstp    qword ptr [esp]
        push    ecx
        fld     dword ptr [ebp + -0x70]
        fstp    dword ptr [esp]
        push    ebx
        call    FUN_00682f70
        add     esp, 0x18
        cmp     al, 0x1
        jnz     L_42eb
        mov     ecx, edi
        call    FUN_005c7ed0
        fstp    dword ptr [ebp + -0x8]
        lea     ecx, [ebp + 0xffffff10]
        push    ecx
        lea     edx, [ebp + -0x1c]
        push    edx
        lea     ecx, [ebp + -0x38]
        call    FUN_0041c830
        fld     dword ptr [ebp + -0x8]
        fabs
        fstp    dword ptr [ebp + -0x8]
        fld     dword ptr [ebp + -0x30]
        fmul    dword ptr [ebp + -0x30]
        fld     dword ptr [ebp + -0x38]
        fmul    dword ptr [ebp + -0x38]
        faddp   st(1), st
        fstp    dword ptr [ebp + -0x20]
        fld     dword ptr [ebp + -0x34]
        fmul    dword ptr [ebp + -0x34]
        fadd    dword ptr [ebp + -0x20]
        fstp    dword ptr [ebp + -0xc]
        mov     eax, dword ptr [ebp + -0xc]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + -0x68], eax
        fld     dword ptr [ebp + -0x68]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_4168
        mov     eax, dword ptr [ebp + -0x20]
        mov     dword ptr [ebp + -0x6c], eax
        mov     eax, dword ptr [ebp + -0x6c]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + -0x4c], eax
        fld     dword ptr [ebp + -0x4c]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_413a
        fld     dword ptr [ebp + -0x8]
        fcomp dword ptr [DAT_007878dc]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4168
        jmp     L_42eb
L_413a:
        fld     dword ptr [ebp + -0x38]
        fld     dword ptr [ebp + -0x30]
        fpatan
        fabs
        fcomp   dword ptr [ebp + -0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_42eb
        fld     dword ptr [ebp + -0x34]
        fld     dword ptr [ebp + -0x4c]
        fpatan
        fcomp   dword ptr [ebp + -0x8]
        fnstsw  ax
        test    ah, 0x1
        jz      L_42eb
L_4168:
        lea     ecx, [ebp + -0x58]
        push    ecx
        lea     ecx, [ebp + -0x64]
        call    FUN_0040c410
        push    0x40800000
        lea     edx, [ebp + -0x64]
        push    edx
        lea     ecx, [ebp + -0x64]
        call    FUN_0040ca40
        lea     eax, [ebp + 0xffffff10]
        push    eax
        lea     ecx, [ebp + 0xfffffeec]
        call    FUN_00419480
        lea     ecx, [ebp + 0xfffffeec]
        push    ecx
        lea     edx, [ebp + -0x64]
        push    edx
        lea     ecx, [ebp + -0x64]
        call    FUN_0040c9e0
        mov     ecx, dword ptr [edi + 0x170]
        lea     eax, [ebp + -0x1c]
        push    eax
        push    ebx
        push    ecx
        lea     ecx, [ebp + 0xfffffea8]
        call    FUN_00684580
        lea     edx, [ebp + -0x64]
        push    edx
        lea     ecx, [ebp + 0xfffffec0]
        mov     dword ptr [ebp + 0xfffffeb8], 0x0
        call    FUN_0040c410
        lea     ecx, [ebp + 0xfffffea8]
        call    FUN_006847e0
        mov     eax, dword ptr [ebp + -0x10]
        push    0x0
        push    eax
        lea     ecx, [ebp + 0xfffffea8]
        call    FUN_00684840
        test    eax, eax
        jnz     L_426c
        cmp     byte ptr [ebp + -0x1], 0x1
        jnz     L_4211
        lea     ecx, [ebp + 0xfffffea8]
        push    ecx
        call    FUN_00684150
        add     esp, 0x4
        jmp     L_421b
L_4211:
        mov     dword ptr [ebp + 0xfffffeb8], 0x0
L_421b:
        lea     ecx, [edi + 0x1c8]
        call    FUN_0041fd80
        push    eax
        mov     ecx, edi
        call    FUN_005c8610
        mov     ebx, eax
        push    ebx
        lea     edx, [ebp + 0xfffffdf4]
        push    edx
        mov     ecx, edi
        call    FUN_005c8b00
        push    eax
        lea     ecx, [ebp + 0xfffffe54]
        call    FUN_00419460
        mov     eax, dword ptr [ebp + 0x8]
        push    0x1
        push    eax
        lea     eax, [edi + 0x4fc]
        push    eax
        lea     ecx, [ebp + 0xfffffe54]
        push    ecx
        push    ebx
        push    0x0
        push    esi
        mov     ecx, edi
        call    FUN_005c3ad0
        jmp     L_42eb
L_426c:
        mov     ecx, dword ptr [edi + 0x600]
        mov     eax, dword ptr [ecx]
        cmp     eax, ecx
        mov     esi, ecx
        jz      L_4289
L_427a:
        cmp     dword ptr [eax + 0x8], ebx
        jz      L_4287
        mov     eax, dword ptr [eax]
        cmp     eax, ecx
        jnz     L_427a
        jmp     L_4289
L_4287:
        mov     esi, eax
L_4289:
        cmp     esi, ecx
        jnz     L_42d6
        push    0x0
        mov     dword ptr [ebp + -0x78], ebx
        call    FUN_00707e70
        fstp    dword ptr [ebp + -0xc]
        call    FUN_00415020
        fadd    dword ptr [ebp + -0xc]
        lea     edx, [ebp + -0x78]
        push    edx
        lea     eax, [ebp + 0xffffff44]
        fstp    dword ptr [ebp + -0x74]
        lea     esi, [edi + 0x600]
        push    eax
        mov     ecx, esi
        call    FUN_005cb1a0
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_005cb1b0
        lea     ecx, [ebp + 0xffffff40]
        push    ecx
        mov     ecx, esi
        call    FUN_005cb280
        jmp     L_42eb
L_42d6:
        push    0x0
        call    FUN_00707e70
        fstp    dword ptr [ebp + -0xc]
        call    FUN_00415020
        fadd    dword ptr [ebp + -0xc]
        fstp    dword ptr [esi + 0xc]
L_42eb:
        lea     ecx, [ebp + -0x48]
        call    FUN_0040c0e0
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_3e32
L_42fd:
        mov     eax, dword ptr [ebp + -0x2c]
        test    eax, eax
        jz      L_430d
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_430d:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_4316:
        lea     ecx, [ebp + -0x2c]
        call    FUN_00580560
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }


}
