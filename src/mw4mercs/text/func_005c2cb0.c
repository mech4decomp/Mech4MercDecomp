/*
 * FUN_005c2cb0 (688 B) — __thiscall (ECX = this), RET 0x10 (4 stack args).
 * Large vector/loop processing routine with FPU math and many helper calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005c8610(int a);
extern void __cdecl FUN_005c8b00(void *a, int b);
extern void __cdecl FUN_00419460(int a);
extern float __cdecl FUN_005c7ed0(void);
extern void __cdecl FUN_0041c830(void *a, void *b);
extern char __cdecl FUN_005c7170(int a);
extern void __cdecl FUN_00419480(void *a);
extern void __cdecl FUN_00684530(int a, void *b, void *c);
extern void __cdecl FUN_006847e0(void);
extern int __cdecl FUN_00684840(int a, int b);
extern float __cdecl FUN_00415020(void);
extern void __cdecl FUN_005c3ad0(int a, int b, int c, void *d, void *e, int f, int g);
extern int DAT_007878f0;
extern float DAT_007b220c;
extern float DAT_007878dc;
extern float DAT_0076d064;
extern float DAT_0076e1ec;
extern float DAT_007878f4;

__declspec(naked) void func_005c2cb0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xb4
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        lea     ecx, [edi + 0x1c8]
        call    FUN_0041fd80
        push    eax
        mov     ecx, edi
        call    FUN_005c8610
        push    eax
        mov     dword ptr [ebp - 0x30], eax
        lea     eax, [ebp - 0xa0]
        push    eax
        mov     ecx, edi
        call    FUN_005c8b00
        push    eax
        lea     ecx, [ebp - 0x70]
        call    FUN_00419460
        mov     ecx, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [ecx]
        xor     ebx, ebx
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x20], ebx
        mov     dword ptr [ebp - 0xc], eax
        jz      l_2f1f
        lea     esi, [edi + 0x4fc]
        jmp     l_2d0e
    l_2d0b:
        mov     eax, dword ptr [ebp - 0xc]
    l_2d0e:
        mov     edx, dword ptr [DAT_007878f0]
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [ebp - 0x10], edx
        mov     edx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [eax + 0x10]
        mov     dword ptr [esi], ecx
        mov     ecx, edi
        mov     dword ptr [esi + 0x4], edx
        mov     dword ptr [esi + 0x8], eax
        call    FUN_005c7ed0
        fstp    dword ptr [ebp - 0x4]
        lea     ecx, [ebp - 0x70]
        push    ecx
        push    esi
        lea     ecx, [ebp - 0x1c]
        call    FUN_0041c830
        fld     dword ptr [ebp - 0x4]
        fabs
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x1c]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x28]
        mov     eax, dword ptr [ebp - 0x28]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x2c], eax
        fld     dword ptr [ebp - 0x2c]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      l_2def
        mov     edx, dword ptr [ebp - 0x8]
        mov     dword ptr [ebp - 0x34], edx
        mov     eax, dword ptr [ebp - 0x34]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x24], eax
        fld     dword ptr [ebp - 0x24]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     l_2dc1
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [DAT_007878dc]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_2def
        jmp     l_2f0c
    l_2dc1:
        fld     dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x14]
        fpatan
        fabs
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x41
        jz      l_2f0c
        fld     dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x24]
        fpatan
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      l_2f0c
    l_2def:
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        mov     ecx, edi
        mov     dword ptr [ebp - 0x4], 0x4
        call    FUN_005c7170
        cmp     al, 0x1
        jnz     l_2e0c
        mov     dword ptr [ebp - 0x4], 0x1
    l_2e0c:
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        mov     dword ptr [ebp - 0x8], 0x0
        jle     l_2f0c
    l_2e1e:
        lea     ecx, [ebp - 0x70]
        push    ecx
        lea     ecx, [ebp - 0x40]
        inc     ebx
        call    FUN_00419480
        mov     eax, dword ptr [edi + 0x170]
        push    esi
        lea     edx, [ebp - 0x40]
        push    edx
        push    eax
        lea     ecx, [ebp - 0xb4]
        call    FUN_00684530
        lea     ecx, [ebp - 0xb4]
        call    FUN_006847e0
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x8]
        push    ecx
        push    edx
        lea     ecx, [ebp - 0xb4]
        call    FUN_00684840
        sub     eax, 0x0
        jz      l_2f2a
        dec     eax
        jz      l_2ee8
        cmp     ebx, 0x20
        jg      l_2f1f
        mov     eax, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0x4]
        inc     eax
        cmp     eax, ecx
        jge     l_2efa
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [eax + 0x10]
        mov     dword ptr [esi], ecx
        mov     dword ptr [esi + 0x4], edx
        mov     dword ptr [esi + 0x8], eax
        call    FUN_00415020
        fadd    st(0), st(0)
        fsub    dword ptr [DAT_0076d064]
        fmul    dword ptr [ebp - 0x10]
        fadd    dword ptr [esi]
        fstp    dword ptr [esi]
        call    FUN_00415020
        fadd    st(0), st(0)
        fsub    dword ptr [DAT_0076d064]
        fmul    dword ptr [ebp - 0x10]
        fmul    dword ptr [DAT_0076e1ec]
        fadd    dword ptr [esi + 0x4]
        fstp    dword ptr [esi + 0x4]
        call    FUN_00415020
        fadd    st(0), st(0)
        fsub    dword ptr [DAT_0076d064]
        fmul    dword ptr [ebp - 0x10]
        fadd    dword ptr [esi + 0x8]
        fstp    dword ptr [esi + 0x8]
        fld     dword ptr [DAT_007878f4]
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x10]
        jmp     l_2efa
    l_2ee8:
        mov     ecx, dword ptr [ebp - 0x20]
        inc     ecx
        cmp     ebx, 0x6
        mov     dword ptr [ebp - 0x20], ecx
        jle     l_2efa
        mov     eax, ecx
        cmp     eax, ebx
        jz      l_2f1f
    l_2efa:
        mov     eax, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0x4]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x8], eax
        jl      l_2e1e
    l_2f0c:
        mov     ecx, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ebp + 0x10]
        cmp     eax, dword ptr [edx]
        mov     dword ptr [ebp - 0xc], eax
        jnz     l_2d0b
    l_2f1f:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    l_2f2a:
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp - 0x30]
        push    0x1
        push    eax
        mov     eax, dword ptr [ebp - 0xc]
        push    esi
        lea     ecx, [ebp - 0x70]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        push    edx
        mov     edx, dword ptr [ebp + 0x8]
        push    ecx
        push    edx
        mov     ecx, edi
        mov     dword ptr [edi + 0x514], 0x0
        call    FUN_005c3ad0
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
