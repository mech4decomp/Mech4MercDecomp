/*
 * FUN_005c36b0 (1044 B) — __stdcall RET 8, 2 stack params + ECX this.
 * Heavy FPU math (vector ops, atan2, dot products).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00419480(void *a);
extern void __stdcall FUN_00683f60(void *a, void *b);
extern void __stdcall FUN_0040ca10(void *a, void *b, void *c);
extern void __stdcall FUN_005c7ed0(void *a);
extern void __stdcall FUN_005c3500(void *a, void *b, void *c);
extern void __stdcall FUN_005c8610(void *a);
extern void __stdcall FUN_005c8b00(void *a, void *b);
extern void __stdcall FUN_00419460(void *a, void *b);
extern void __stdcall FUN_0040c9e0(void *a, void *b);
extern void __stdcall FUN_0041c830(void *a, void *b, void *c);
extern void __stdcall FUN_00684530(void *a, void *b, void *c);
extern void __stdcall FUN_006847e0(void *a);
extern void __stdcall FUN_00684840(void *a, int b, int c);
extern void __stdcall FUN_00707e70(int a);
extern char __stdcall FUN_005c7170(void *a);
extern void __stdcall FUN_005c3ad0(void *a, void *b, void *c, void *d, void *e, void *f, void *g);

__declspec(naked) void __stdcall FUN_005c36b0(void *a, void *b)
{
    

extern int DAT_00787940;
extern int DAT_00787928;
extern int DAT_0076c5b0;
extern int DAT_007b220c;
extern int DAT_007878dc;
extern int DAT_0077d040;
extern int DAT_00787920;
extern int DAT_007f22d0;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0xe0
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x170]
        mov     eax, dword ptr [edi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp + -0x38]
        mov     dword ptr [ebp + -0x14], 0x0
        call    FUN_00419480
        mov     ebx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebx + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [ebp + -0x28]
        call    FUN_00419480
        lea     edx, [ebp + -0x60]
        push    edi
        push    edx
        call    FUN_00683f60
        add     esp, 0x8
        lea     eax, [ebp + -0x38]
        push    eax
        lea     ecx, [ebp + -0x28]
        push    ecx
        lea     ecx, [ebp + -0x10]
        call    FUN_0040ca10
        fld     dword ptr [ebp + -0x10]
        fmul    dword ptr [ebp + -0x10]
        mov     byte ptr [ebp + -0x1], 0x1
        fld     dword ptr [ebp + -0xc]
        fmul    dword ptr [ebp + -0xc]
        faddp   st(1), st
        fld     dword ptr [ebp + -0x8]
        fmul    dword ptr [ebp + -0x8]
        faddp   st(1), st
        fcomp dword ptr [DAT_00787940]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_373f
        mov     byte ptr [ebp + -0x1], 0x0
L_373f:
        mov     ecx, esi
        call    FUN_005c7ed0
        fstp    dword ptr [ebp + -0x4c]
        lea     edx, [ebp + -0x38]
        push    edx
        push    ebx
        lea     eax, [ebp + -0x60]
        push    eax
        mov     ecx, esi
        call    FUN_005c3500
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        lea     edi, [esi + 0x4fc]
        mov     dword ptr [edi], ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [edi + 0x4], edx
        mov     dword ptr [edi + 0x8], eax
        call    FUN_005c8610
        push    eax
        lea     ecx, [ebp + 0xffffff34]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebp + -0x54], eax
        call    FUN_005c8b00
        push    eax
        lea     ecx, [ebp + 0xffffff70]
        call    FUN_00419460
        lea     edx, [ebp + -0x28]
        push    edx
        lea     eax, [ebp + -0x38]
        push    eax
        lea     ecx, [ebp + -0x10]
        call    FUN_0040ca10
        fld     dword ptr [ebp + -0x10]
        fmul    dword ptr [ebp + -0x10]
        fld     dword ptr [ebp + -0xc]
        fmul    dword ptr [ebp + -0xc]
        faddp   st(1), st
        fld     dword ptr [ebp + -0x8]
        fmul    dword ptr [ebp + -0x8]
        faddp   st(1), st
        fstp    dword ptr [ebp + -0x1c]
        mov     eax, dword ptr [ebp + -0x1c]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + -0x18], eax
        fld     dword ptr [ebp + -0x18]
        fsub dword ptr [DAT_00787928]
        fstp    dword ptr [ebp + -0x1c]
L_37d7:
        mov     eax, dword ptr [ebp + -0x14]
        test    eax, eax
        jnz     L_382e
        fld     dword ptr [esi + 0x5dc]
        lea     ebx, [esi + 0x5d4]
        fld     dword ptr [ebx + 0x4]
        fld     dword ptr [ebx]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st
        fcomp dword ptr [DAT_0076c5b0]
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x40
        fstp    st(0)
        jnz     L_382e
        mov     ecx, dword ptr [ebp + -0x28]
        mov     edx, dword ptr [ebp + -0x24]
        mov     eax, dword ptr [ebp + -0x20]
        push    ebx
        mov     dword ptr [edi], ecx
        push    edi
        mov     ecx, edi
        mov     dword ptr [edi + 0x4], edx
        mov     dword ptr [edi + 0x8], eax
        call    FUN_0040c9e0
        jmp     L_3840
L_382e:
        lea     ecx, [ebp + -0x28]
        push    ecx
        lea     ebx, [esi + 0x5d4]
        push    edi
        mov     ecx, ebx
        call    FUN_0040ca10
L_3840:
        mov     al, byte ptr [ebp + -0x1]
        test    al, al
        jz      L_3907
        lea     edx, [ebp + 0xffffff70]
        push    edx
        push    edi
        lea     ecx, [ebp + -0x10]
        call    FUN_0041c830
        fld     dword ptr [ebp + -0x4c]
        fabs
        fstp    dword ptr [ebp + -0x2c]
        fld     dword ptr [ebp + -0x8]
        fmul    dword ptr [ebp + -0x8]
        fld     dword ptr [ebp + -0x10]
        fmul    dword ptr [ebp + -0x10]
        faddp   st(1), st
        fstp    dword ptr [ebp + -0x3c]
        fld     dword ptr [ebp + -0xc]
        fmul    dword ptr [ebp + -0xc]
        fadd    dword ptr [ebp + -0x3c]
        fstp    dword ptr [ebp + -0x50]
        mov     eax, dword ptr [ebp + -0x50]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + -0x40], eax
        fld     dword ptr [ebp + -0x40]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_3907
        mov     eax, dword ptr [ebp + -0x3c]
        mov     dword ptr [ebp + -0x44], eax
        mov     eax, dword ptr [ebp + -0x44]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + -0x18], eax
        fld     dword ptr [ebp + -0x18]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_38dd
        fld     dword ptr [ebp + -0x2c]
        fcomp dword ptr [DAT_007878dc]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_3907
        jmp     L_3976
L_38dd:
        fld     dword ptr [ebp + -0x10]
        fld     dword ptr [ebp + -0x8]
        fpatan
        fabs
        fcomp   dword ptr [ebp + -0x2c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_3976
        fld     dword ptr [ebp + -0xc]
        fld     dword ptr [ebp + -0x18]
        fpatan
        fcomp   dword ptr [ebp + -0x2c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_3976
L_3907:
        lea     ecx, [ebp + 0xffffff70]
        push    ecx
        lea     ecx, [ebp + -0x60]
        call    FUN_00419480
        mov     eax, dword ptr [esi + 0x170]
        push    edi
        lea     edx, [ebp + -0x60]
        push    edx
        push    eax
        lea     ecx, [ebp + 0xffffff20]
        call    FUN_00684530
        lea     ecx, [ebp + 0xffffff20]
        call    FUN_006847e0
        fld     dword ptr [ebp + -0x1c]
        cmp     dword ptr [ebp + -0x14], 0x7
        jnz     L_394c
        fstp    st(0)
        fld     dword ptr [ebp + -0x1c]
        fsub dword ptr [DAT_0077d040]
L_394c:
        fld     dword ptr [ebp + 0xffffff50]
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jnz     L_3976
        push    0x0
        push    0x0
        lea     ecx, [ebp + 0xffffff20]
        call    FUN_00684840
        test    eax, eax
        mov     dword ptr [esi + 0x514], eax
        jz      L_39c1
L_3976:
        mov     edx, dword ptr [ebp + 0x8]
        lea     ecx, [ebp + -0x38]
        push    ecx
        push    edx
        lea     eax, [ebp + 0xffffff64]
        push    eax
        mov     ecx, esi
        call    FUN_005c3500
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [edi + 0x8], eax
        xor     eax, eax
        mov     dword ptr [edi], ecx
        mov     dword ptr [edi + 0x4], edx
        mov     dword ptr [esi + 0x5e0], eax
        mov     dword ptr [ebx + 0x8], eax
        mov     dword ptr [ebx + 0x4], eax
        mov     dword ptr [ebx], eax
        mov     eax, dword ptr [ebp + -0x14]
        inc     eax
        cmp     eax, 0x7
        mov     dword ptr [ebp + -0x14], eax
        jg      L_3aab
        jmp     L_37d7
L_39c1:
        mov     ebx, dword ptr [ebp + -0x14]
        test    ebx, ebx
        mov     dword ptr [esi + 0x514], 0x2
        jnz     L_3a75
        fld     dword ptr [esi + 0x5dc]
        fld     dword ptr [esi + 0x5d8]
        fld     dword ptr [esi + 0x5d4]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st
        fcomp dword ptr [DAT_0076c5b0]
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x40
        fstp    st(0)
        jnz     L_3a75
        fld     dword ptr [esi + 0x5e0]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_3a2c
        push    ebx
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x5e0]
        jmp     L_3a75
L_3a2c:
        mov     ecx, dword ptr [ebp + 0x8]
        push    ecx
        mov     ecx, esi
        call    FUN_005c7170
        cmp     al, 0x1
        jz      L_3a5b
        fld dword ptr [DAT_00787920]
        push    0x0
        fadd    dword ptr [esi + 0x5e0]
        fstp    qword ptr [ebp + -0x48]
        call    FUN_00707e70
        fcomp   qword ptr [ebp + -0x48]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_3a75
L_3a5b:
        xor     eax, eax
        mov     dword ptr [esi + 0x5e0], eax
        mov     dword ptr [esi + 0x5dc], eax
        mov     dword ptr [esi + 0x5d8], eax
        mov     dword ptr [esi + 0x5d4], eax
L_3a75:
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + -0x54]
        push    0x0
        push    edx
        mov     edx, dword ptr [ebp + 0x8]
        push    edi
        lea     eax, [ebp + 0xffffff70]
        push    eax
        push    ecx
        push    0x0
        push    edx
        mov     ecx, esi
        call    FUN_005c3ad0
        mov eax, dword ptr [DAT_007f22d0]
        add     eax, ebx
        pop     edi
        pop     esi
        mov dword ptr [DAT_007f22d0], eax
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_3aab:
        mov ecx, dword ptr [DAT_007f22d0]
        pop     edi
        add     ecx, eax
        pop     esi
        mov dword ptr [DAT_007f22d0], ecx
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }


}
