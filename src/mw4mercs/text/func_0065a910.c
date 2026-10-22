/*
 * FUN_0065A910 (485 B) — Collision/aiming update with cross-product math.
 *
 * [ESP+4] = param_1, [ESP+8] = param_2. Checks FUN_005c9800 state and
 * a flag at param_1+0x4e0, then computes a 3D cross product (FPU) and
 * dispatches to FUN_0065a840 / FUN_005c9850 / FUN_005c53a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f25c0;
extern float g_770168;
extern float g_794a9c;
extern float g_775980;

extern char __cdecl FUN_005c9800(void);
extern char __cdecl FUN_00415230(int a);
extern void __cdecl FUN_00419480(void *a);
extern void __cdecl FUN_0040ca10(void *a, void *b);
extern float __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_0065a840(void *a, void *b);
extern void __cdecl FUN_00428730(void *a);
extern void __cdecl FUN_0040c410(void *a);
extern char __cdecl FUN_005c98a0(void);
extern void __cdecl FUN_005c9850(void);
extern void __cdecl FUN_0040ca40(void *a, float b);
extern void __cdecl FUN_005c53a0(void *a);

__declspec(naked) int FUN_0065a910(void)
{
    __asm {
        sub     esp, 0x48
        push    esi
        mov     esi, dword ptr [esp + 0x50]
        push    edi
        mov     ecx, esi
        call    FUN_005c9800
        cmp     al, 0x1
        jnz     L_65a9c5
        test    dword ptr [esi + 0x4e0], 0xfffffffc
        jnz     L_65a9c5
        mov     eax, dword ptr [g_7f25c0]
        mov     edi, dword ptr [esp + 0x58]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_65a9cd
        fld     dword ptr [edi + 0x444]
        fcomp   dword ptr [g_770168]
        fnstsw  ax
        test    ah, 0x41
        jz      L_65a9bb
        mov     eax, dword ptr [edi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00419480
        mov     ecx, dword ptr [esi + 0x170]
        mov     edx, dword ptr [ecx + 0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [esp + 0x30]
        call    FUN_00419480
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     ecx, [esp + 0x40]
        call    FUN_0040ca10
        lea     ecx, [esp + 0x38]
        call    FUN_0040cb00
        fcomp   dword ptr [g_794a9c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_65a9cd
L_65a9bb:
        push    edi
        push    esi
        call    FUN_0065a840
        add     esp, 0x8
L_65a9c5:
        pop     edi
        xor     eax, eax
        pop     esi
        add     esp, 0x48
        ret
L_65a9cd:
        mov     ecx, dword ptr [edi + 0xd8]
        lea     edx, [esp + 0x44]
        push    edx
        add     ecx, 0x80
        call    FUN_00428730
        lea     eax, [esp + 0x44]
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_0040c410
        mov     edx, dword ptr [esi + 0x170]
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [edx + 0xd8]
        add     ecx, 0x80
        call    FUN_00428730
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x18]
        fsubp   st(1), st(0)
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x8]
        fsubp   st(1), st(0)
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x14]
        fsubp   st(1), st(0)
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fcomp   dword ptr [g_775980]
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        fstp    st(0)
        jnz     L_65aa83
        mov     ecx, esi
        call    FUN_005c98a0
        cmp     al, 0x1
        jnz     L_65aa83
        mov     ecx, esi
        call    FUN_005c9850
        pop     edi
        mov     eax, 0x2
        pop     esi
        add     esp, 0x48
        ret
L_65aa83:
        push    0x42c80000
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_0040ca40
        mov     ecx, dword ptr [esi + 0x170]
        mov     eax, dword ptr [ecx + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        fadd    dword ptr [esp + 0x8]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x24], edx
        fstp    dword ptr [esp + 0x8]
        mov     dword ptr [esp + 0x28], eax
        fld     dword ptr [esp + 0x24]
        lea     ecx, [esp + 0x8]
        fadd    dword ptr [esp + 0xc]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x2c]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        call    FUN_005c53a0
        pop     edi
        mov     eax, 0x1
        pop     esi
        add     esp, 0x48
        ret
    }
}
