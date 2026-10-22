/*
 * FUN_005ed440 (900 B) — __thiscall method (ECX = this), RET 8.
 *
 * Complex update routine with FPU math, vtable dispatch, and
 * block copies (rep movsd).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0040c410(void *p);
extern void __stdcall FUN_00415230(void *a, void *b);
extern void __stdcall FUN_00551870(void *a, void *b);
extern void __stdcall FUN_005a94e0(void *a, void *b);
extern void __fastcall FUN_005edd30(void *p);
extern void __fastcall FUN_005edf00(void *p);
extern void __fastcall FUN_005ee2a0(void *p, void *a);
extern void __stdcall FUN_006d1ad0(void *a, void *b, void *c, void *d);
extern void __stdcall FUN_00549950(void *p);
extern void __stdcall FUN_004084e0(void *p);
extern void __stdcall FUN_004daa20(void *p);
extern void __stdcall FUN_00707e70(void *p);

/* extern data symbols for absolute-address operands */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern float DAT_0076f5d8;
extern float DAT_0078235c;
extern int DAT_007dc700;
extern int DAT_00840048;
extern int DAT_007f26a4;
extern int DAT_007f268c;
extern float DAT_00789db8;

__declspec(naked) void __stdcall FUN_005ed440(void *p1, void *p2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        sub     esp, 0x38
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx + 0x12c]
        test    ecx, ecx
        push    ebp
        push    esi
        push    edi
        mov     dword ptr [ebx + 0x130], eax
        jz      L470
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x18]
        xor     al, al
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x38
        ret     8
L470:
        mov     esi, dword ptr [eax]
        mov     edx, dword ptr [ebx + 0x78]
        lea     edi, [ebx + 0x78]
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], esi
        call    dword ptr [edx + 0x4]
        mov     dword ptr [esp + 0x50], eax
        lea     eax, [ebx + 0x218]
        push    eax
        lea     ecx, [esp + 0x34]
        call    FUN_0040c410
        lea     ebp, [esi + 0xc]
        push    ebp
        lea     ecx, [esp + 0x28]
        call    FUN_0040c410
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x30]
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [DAT_007dab40]
        fstp    dword ptr [esp + 0x18]
        xor     edx, eax
        fld     dword ptr [esp + 0x28]
        mov     eax, dword ptr [edx + 0x1c]
        fsub    dword ptr [esp + 0x34]
        xor     eax, 0x85739531
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0x20]
        call    dword ptr [eax + 0x4]
        fld     dword ptr [esp + 0x1c]
        mov     ecx, eax
        fld     dword ptr [esp + 0x20]
        fld     dword ptr [ebx + 0x224]
        fadd    dword ptr [DAT_0076f5d8]
        fld     st(1)
        fmul    st(0), st(2)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        faddp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        fcompp
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x1
        fstp    st(0)
        jnz     L6BF
        fld     dword ptr [ecx + 0x34]
        fsub    dword ptr [DAT_0078235c]
        fcomp   dword ptr [esi + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     L557
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L557
        mov     ecx, dword ptr [DAT_007dc700]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        test    al, al
        jnz     L6BF
L557:
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x34]
        push    ecx
        sub     esp, 0xc
        mov     ecx, esp
        push    ebp
        call    FUN_00551870
        sub     esp, 0xc
        lea     eax, [esi + 0x18]
        mov     ecx, esp
        push    eax
        call    FUN_005a94e0
        mov     ecx, ebx
        call    FUN_005edd30
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L6BF
        mov     ecx, dword ptr [DAT_007dc700]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        test    al, al
        jnz     L5C5
        mov     eax, dword ptr [esi + 0x8]
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x34]
        push    eax
        push    edx
        sub     esp, 0xc
        mov     ecx, esp
        push    ebp
        call    FUN_00551870
        sub     esp, 0xc
        lea     eax, [esi + 0x18]
        mov     ecx, esp
        push    eax
        call    FUN_005a94e0
        mov     ecx, ebx
        call    FUN_005edf00
L5C5:
        mov     ecx, dword ptr [esi + 0x8]
        mov     eax, dword ptr [DAT_007dc700]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [ecx + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L673
        mov     eax, dword ptr [esp + 0x50]
        mov     cl, byte ptr [eax + 0x6c]
        test    cl, cl
        jz      L673
        mov     ecx, dword ptr [ebp]
        mov     edx, dword ptr [ebp + 0x4]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebp + 0x8]
        mov     dword ptr [eax + 0x8], ecx
        sub     esp, 0xc
        mov     dword ptr [eax + 0x4], edx
        lea     eax, [esi + 0x18]
        mov     ecx, esp
        push    eax
        call    FUN_005a94e0
        mov     edx, dword ptr [esi + 0x8]
        push    edx
        mov     ecx, ebx
        call    FUN_005ee2a0
        mov     eax, dword ptr [DAT_00840048]
        test    eax, eax
        jz      L6BF
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax + 0x70]
        test    ecx, ecx
        jl      L6BF
        mov     eax, dword ptr [ebx + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x18], edx
        push    0x1
        mov     edx, eax
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        push    ecx
        mov     ecx, dword ptr [DAT_00840048]
        call    FUN_006d1ad0
        jmp     L6BF
L673:
        mov     eax, dword ptr [DAT_007f26a4]
        mov     esi, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L6BF
        mov     esi, dword ptr [esi + 0x280]
        test    esi, esi
        jz      L6BF
        mov     eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L6BF
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [esi + 0x3b0]
        test    ecx, ecx
        jz      L6BF
        mov     eax, dword ptr [eax + 0x74]
        push    eax
        call    FUN_00549950
L6BF:
        mov     esi, dword ptr [ebx + 0xd8]
        mov     edx, dword ptr [ebp + 0x4]
        lea     eax, [ebx + 0xf4]
        add     esi, 0x80
        mov     ecx, 0xc
        mov     edi, eax
        rep     movsd
        mov     ecx, dword ptr [ebp]
        mov     dword ptr [eax + 0xc], ecx
        mov     ecx, dword ptr [ebp + 0x8]
        mov     dword ptr [eax + 0x1c], edx
        mov     dword ptr [eax + 0x2c], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ecx + 0x8]
        test    edx, edx
        jz      L790
        cmp     byte ptr [ecx + 0x34], 0x2
        jnz     L790
        fld     dword ptr [ebp]
        mov     edx, dword ptr [ebp + 0x4]
        fld     dword ptr [ecx + 0x18]
        mov     dword ptr [esp + 0x1c], edx
        fmul    dword ptr [DAT_00789db8]
        mov     edx, dword ptr [ebp + 0x8]
        fld     dword ptr [ecx + 0x1c]
        mov     dword ptr [esp + 0x20], edx
        fmul    dword ptr [DAT_00789db8]
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [ecx + 0x20]
        fmul    dword ptr [DAT_00789db8]
        fstp    dword ptr [esp + 0x44]
        faddp   st(1), st
        fld     dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 0x40]
        fstp    dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x44]
        fstp    dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x20]
        fstp    dword ptr [eax + 0xc]
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [eax + 0x2c], edx
        mov     esi, dword ptr [ebx + 0x130]
        test    esi, esi
        jz      L786
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L77D
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L77D:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L786:
        mov     dword ptr [ebx + 0x130], 0
L790:
        mov     eax, dword ptr [esp + 0x4c]
        mov     edi, eax
        mov     ecx, 0xc
        lea     esi, [ebx + 0xf4]
        rep     movsd
        push    eax
        mov     ecx, ebx
        call    FUN_004daa20
        push    0x0
        call    FUN_00707e70
        pop     edi
        fstp    qword ptr [ebx + 0xec]
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x38
        ret     8
    }
}
