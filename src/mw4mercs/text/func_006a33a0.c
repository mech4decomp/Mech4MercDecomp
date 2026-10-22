/*
 * FUN_006A33A0 (483 B) — Weapon/effect state update (__thiscall, RET 4).
 *
 * ECX = this, [ESP+4] = param. Calls a virtual method on this+0x28,
 * then a series of FPU-compared helpers (FUN_006a4ae0, FUN_006a22f0,
 * FUN_006a29d0, FUN_006a4da0, FUN_006a49e0) and virtual dispatch
 * (CALL [vtbl+0x78]/[+0x34]/[+0xd8]) to select a behavior.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_799d48;
extern float g_799d40;
extern float g_76c5b0;
extern float g_76d064;
extern int g_7f1f84;
extern float g_77431c;

extern float __cdecl FUN_006a4ae0(void *a, int b);
extern char __cdecl FUN_006a22f0(void *a);
extern float __cdecl FUN_006a29d0(void *a);
extern float __cdecl FUN_006a4da0(void *a, float b, int c);
extern float __cdecl FUN_006a49e0(void *a);
extern char __cdecl FUN_00415230(int a);
extern void __cdecl FUN_00663900(void *a, float b);
extern void __cdecl FUN_00664b20(void *a);
extern void __cdecl FUN_00664850(void *a, float b, int c);
extern void __cdecl FUN_00663bd0(void *a, int b, int c);

__declspec(naked) void __fastcall FUN_006a33a0(void *param1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x28]
        lea     ecx, [edi + 0x28]
        push    esi
        call    dword ptr [eax]
        fstp    st(0)
        mov     ecx, dword ptr [g_799d48]
        push    ecx
        push    esi
        call    FUN_006a4ae0
        fcomp   dword ptr [g_799d40]
        add     esp, 0x8
        fnstsw  ax
        test    ah, 0x1
        jnz     L_6a33d6
        mov     byte ptr [edi + 0x4], 0x1
        jmp     L_6a33da
L_6a33d6:
        mov     byte ptr [edi + 0x4], 0x0
L_6a33da:
        push    esi
        call    FUN_006a22f0
        add     esp, 0x4
        test    al, al
        jz      L_6a3578
        push    esi
        mov     ecx, edi
        call    FUN_006a29d0
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_6a340f
        fld     dword ptr [g_76d064]
        mov     byte ptr [edi + 0x4], 0x0
        pop     edi
        pop     esi
        ret     0x4
L_6a340f:
        push    0x0
        push    0x42a00000
        push    esi
        call    FUN_006a4da0
        fsubr   dword ptr [g_76d064]
        push    esi
        fstp    dword ptr [esp + 0x1c]
        call    FUN_006a49e0
        fcom    dword ptr [esp + 0x1c]
        add     esp, 0x10
        fnstsw  ax
        test    ah, 0x41
        jz      L_6a3440
        fstp    st(0)
        fld     dword ptr [esp + 0xc]
L_6a3440:
        fcomp   dword ptr [g_799d40]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_6a34ae
        mov     edx, dword ptr [esi]
        push    0x40800000
        mov     ecx, esi
        call    dword ptr [edx + 0x78]
        test    al, al
        jz      L_6a347e
        mov     eax, dword ptr [esi]
        mov     edi, dword ptr [g_7f1f84]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        test    al, al
        jz      L_6a347e
        mov     eax, 0x2
        jmp     L_6a3480
L_6a347e:
        xor     eax, eax
L_6a3480:
        mov     edx, dword ptr [esi]
        push    eax
        push    0x42a00000
        mov     ecx, esi
        call    dword ptr [edx + 0xd8]
        fmul    dword ptr [g_77431c]
        push    ecx
        fstp    dword ptr [esp]
        push    esi
        call    FUN_00663900
        fld     dword ptr [g_76d064]
        add     esp, 0xc
        pop     edi
        pop     esi
        ret     0x4
L_6a34ae:
        push    0x0
        push    0x40a00000
        push    esi
        call    FUN_006a4da0
        fcomp   dword ptr [g_799d40]
        add     esp, 0xc
        fnstsw  ax
        test    ah, 0x1
        jnz     L_6a3539
        push    esi
        call    FUN_00664b20
        mov     eax, dword ptr [esi]
        add     esp, 0x4
        push    0x40800000
        mov     ecx, esi
        call    dword ptr [eax + 0x78]
        test    al, al
        jz      L_6a351d
        mov     edx, dword ptr [esi]
        mov     edi, dword ptr [g_7f1f84]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        test    al, al
        jz      L_6a351d
        mov     eax, 0x2
        push    eax
        push    0x42c80000
        push    esi
        call    FUN_00664850
        fld     dword ptr [g_76d064]
        add     esp, 0xc
        pop     edi
        pop     esi
        ret     0x4
L_6a351d:
        xor     eax, eax
        push    eax
        push    0x42c80000
        push    esi
        call    FUN_00664850
        fld     dword ptr [g_76d064]
        add     esp, 0xc
        pop     edi
        pop     esi
        ret     0x4
L_6a3539:
        mov     eax, dword ptr [esi]
        push    0x40800000
        mov     ecx, esi
        call    dword ptr [eax + 0x78]
        test    al, al
        jz      L_6a356a
        mov     edx, dword ptr [esi]
        mov     edi, dword ptr [g_7f1f84]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        test    al, al
        jz      L_6a356a
        mov     eax, 0x2
        jmp     L_6a356c
L_6a356a:
        xor     eax, eax
L_6a356c:
        push    0x0
        push    eax
        push    esi
        call    FUN_00663bd0
        add     esp, 0xc
L_6a3578:
        fld     dword ptr [g_76d064]
        pop     edi
        pop     esi
        ret     0x4
    }
}
