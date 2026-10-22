/*
 * FUN_005c2960 (690 B) — __thiscall (ECX = this), RET 0x4 (1 stack arg).
 * Large vector/array processing routine with FPU math, loops, and many
 * helper calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_005c0e80(void);
extern int __cdecl FUN_005dbe50(void);
extern void __cdecl FUN_00637b40(int a);
extern float __cdecl FUN_00637a20(void);
extern char __cdecl FUN_00682ec0(int a, double b, double c);
extern void __cdecl FUN_005809d0(int a, int b, int c);
extern void __cdecl FUN_005c72d0(void *a);
extern void __cdecl FUN_005c75b0(void *a);
extern void __cdecl FUN_00581300(int a, int b, int c, int d, int e);
extern char __cdecl FUN_005c25a0(int a, int b);
extern float __cdecl FUN_005c7ed0(void);
extern void __cdecl FUN_0041c830(void *a, void *b);
extern char __cdecl FUN_005c0c90(void *a, void *b, int c);
extern char __cdecl FUN_005c5650(int a);
extern char __cdecl FUN_005c24d0(int a, int b, int c);
extern void __cdecl FUN_005c0ea0(int a);
extern float DAT_007b220c;
extern float DAT_007878dc;

__declspec(naked) void func_005c2960(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x74
        push    ebx
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x664]
        push    edi
        mov     dword ptr [ebp - 0x14], ecx
        call    FUN_005c0e80
        test    al, al
        jz      l_2bf6
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        cmp     al, 0x1
        jz      l_29d5
        mov     ecx, esi
        call    FUN_005dbe50
        mov     dword ptr [ebp - 0x10], eax
        fild    dword ptr [ebp - 0x10]
        push    0x46
        fstp    dword ptr [ebp - 0x4]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x41
        jz      l_2bf6
        push    0x47
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_2bf6
    l_29d5:
        fld     dword ptr [esi + 0x52c]
        mov     ecx, dword ptr [esi + 0x170]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [esi + 0x528]
        fstp    qword ptr [esp]
        push    ecx
        call    FUN_00682ec0
        add     esp, 0x14
        test    al, al
        jz      l_2bf6
        mov     edx, dword ptr [esi + 0x624]
        mov     eax, dword ptr [esi + 0x628]
        lea     edi, [esi + 0x624]
        push    edx
        push    eax
        push    eax
        call    FUN_005809d0
        add     esp, 0xc
        push    edi
        mov     ecx, esi
        mov     dword ptr [edi + 0x4], eax
        call    FUN_005c72d0
        mov     eax, dword ptr [edi + 0x4]
        sub     eax, dword ptr [edi]
        test    eax, 0xfffffffc
        jz      l_2bf6
        mov     ecx, dword ptr [esi + 0x170]
        mov     edx, dword ptr [ecx]
        lea     eax, [ebp - 0x74]
        push    eax
        call    dword ptr [edx + 0xf0]
        mov     ecx, dword ptr [edi + 0x4]
        sub     ecx, dword ptr [edi]
        sar     ecx, 0x2
        mov     dword ptr [ebp - 0x10], 0x0
        jz      l_2bec
    l_2a63:
        push    edi
        mov     ecx, esi
        call    FUN_005c75b0
        mov     ebx, dword ptr [edi + 0x4]
        mov     edx, dword ptr [eax]
        lea     ecx, [eax + 0x4]
        cmp     ecx, ebx
        mov     dword ptr [ebp - 0x4], edx
        jz      l_2a8b
        mov     edx, dword ptr [ebp + 0x8]
        push    0x0
        push    edx
        push    eax
        push    ebx
        push    ecx
        call    FUN_00581300
        add     esp, 0x14
    l_2a8b:
        mov     eax, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        add     ebx, -0x4
        mov     ecx, esi
        mov     dword ptr [edi + 0x4], ebx
        call    FUN_005c25a0
        cmp     al, 0x1
        jnz     l_2bd2
        mov     ebx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebx + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x38], edx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [ebp - 0x34], ecx
        mov     edx, dword ptr [eax + 0x2c]
        mov     ecx, esi
        mov     dword ptr [ebp - 0x30], edx
        call    FUN_005c7ed0
        fstp    dword ptr [ebp - 0x4]
        lea     eax, [ebp - 0x74]
        push    eax
        lea     ecx, [ebp - 0x38]
        push    ecx
        lea     ecx, [ebp - 0x2c]
        call    FUN_0041c830
        fld     dword ptr [ebp - 0x4]
        fabs
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x2c]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x28]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x18]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x1c], eax
        fld     dword ptr [ebp - 0x1c]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      l_2b8a
        mov     edx, dword ptr [ebp - 0x8]
        mov     dword ptr [ebp - 0x20], edx
        mov     eax, dword ptr [ebp - 0x20]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0xc], eax
        fld     dword ptr [ebp - 0xc]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     l_2b64
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [DAT_007878dc]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_2b8a
        jmp     l_2bd2
    l_2b64:
        fld     dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x24]
        fpatan
        fabs
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x41
        jz      l_2bd2
        fld     dword ptr [ebp - 0x28]
        fld     dword ptr [ebp - 0xc]
        fpatan
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      l_2bd2
    l_2b8a:
        mov     eax, dword ptr [ebp - 0x68]
        mov     ecx, dword ptr [ebp - 0x58]
        mov     edx, dword ptr [ebp - 0x48]
        mov     dword ptr [ebp - 0x44], eax
        xor     eax, eax
        mov     al, byte ptr [esi + 0x6a1]
        mov     dword ptr [ebp - 0x40], ecx
        lea     ecx, [ebp - 0x38]
        mov     dword ptr [ebp - 0x3c], edx
        lea     edx, [ebp - 0x44]
        push    eax
        push    ecx
        push    edx
        call    FUN_005c0c90
        add     esp, 0xc
        cmp     al, 0x1
        jnz     l_2bd2
        push    ebx
        mov     ecx, esi
        call    FUN_005c5650
        mov     ecx, esi
        push    eax
        mov     eax, dword ptr [ebp + 0x8]
        push    ebx
        push    eax
        call    FUN_005c24d0
        cmp     al, 0x1
        jz      l_2bff
    l_2bd2:
        mov     eax, dword ptr [ebp - 0x10]
        inc     eax
        cmp     eax, 0x2
        mov     dword ptr [ebp - 0x10], eax
        jge     l_2bec
        mov     ecx, dword ptr [edi + 0x4]
        sub     ecx, dword ptr [edi]
        sar     ecx, 0x2
        jnz     l_2a63
    l_2bec:
        mov     ecx, dword ptr [ebp - 0x14]
        push    0x0
        call    FUN_005c0ea0
    l_2bf6:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    l_2bff:
        mov     ecx, dword ptr [ebp - 0x14]
        push    0x1
        call    FUN_005c0ea0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
