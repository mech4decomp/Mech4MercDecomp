/*
 * FUN_006a3720 (465 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * Evaluates a set of float conditions and dispatches to various helpers,
 * returning a float result in ST(0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   *g_799d48;
extern int   *g_7f1f84;
extern float  g_799d40;
extern float  g_76c5b0;
extern float  g_76d064;
extern float  g_77431c;

extern void __cdecl FUN_006a4ae0(void);
extern void __cdecl FUN_006a22f0(void);
extern void __cdecl FUN_006a26f0(void);
extern void __cdecl FUN_006a4da0(void);
extern void __cdecl FUN_006a49e0(void);
extern void __cdecl FUN_00663900(void);
extern void __cdecl FUN_00664b20(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00664850(void);
extern void __cdecl FUN_00663bd0(void);

__declspec(naked) void __stdcall FUN_006a3720(void *param)
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
        jnz     L_3756
        mov     byte ptr [edi + 0x4], 0x1
        jmp     L_375a
L_3756:
        mov     byte ptr [edi + 0x4], 0x0
L_375a:
        push    esi
        call    FUN_006a22f0
        add     esp, 0x4
        test    al, al
        jz      L_38e6
        push    esi
        mov     ecx, edi
        call    FUN_006a26f0
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_378f
        fld     dword ptr [g_76d064]
        mov     byte ptr [edi + 0x4], 0x0
        pop     edi
        pop     esi
        ret     0x4
L_378f:
        mov     edx, dword ptr [edi + 0x38]
        lea     ecx, [edi + 0x38]
        push    esi
        call    dword ptr [edx]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_37b4
        fld     dword ptr [g_76d064]
        mov     byte ptr [edi + 0x4], 0x0
        pop     edi
        pop     esi
        ret     0x4
L_37b4:
        push    0x0
        push    0x42340000
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
        jz      L_37e5
        fstp    st(0)
        fld     dword ptr [esp + 0xc]
L_37e5:
        fcomp   dword ptr [g_799d40]
        push    0x0
        fnstsw  ax
        test    ah, 0x1
        jnz     L_3821
        mov     eax, dword ptr [esi]
        push    0x42340000
        mov     ecx, esi
        call    dword ptr [eax + 0xd8]
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
L_3821:
        push    0x0
        push    esi
        call    FUN_006a4da0
        fcomp   dword ptr [g_799d40]
        add     esp, 0xc
        fnstsw  ax
        test    ah, 0x1
        jnz     L_38a7
        push    esi
        call    FUN_00664b20
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        push    0x40800000
        mov     ecx, esi
        call    dword ptr [edx + 0x78]
        test    al, al
        jz      L_388b
        mov     eax, dword ptr [esi]
        mov     edi, dword ptr [g_7f1f84]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        test    al, al
        jz      L_388b
        mov     eax, 0x2
        push    eax
        push    0x42f00000
        push    esi
        call    FUN_00664850
        fld     dword ptr [g_76d064]
        add     esp, 0xc
        pop     edi
        pop     esi
        ret     0x4
L_388b:
        xor     eax, eax
        push    eax
        push    0x42f00000
        push    esi
        call    FUN_00664850
        fld     dword ptr [g_76d064]
        add     esp, 0xc
        pop     edi
        pop     esi
        ret     0x4
L_38a7:
        mov     edx, dword ptr [esi]
        push    0x40800000
        mov     ecx, esi
        call    dword ptr [edx + 0x78]
        test    al, al
        jz      L_38d8
        mov     eax, dword ptr [esi]
        mov     edi, dword ptr [g_7f1f84]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        test    al, al
        jz      L_38d8
        mov     eax, 0x2
        jmp     L_38da
L_38d8:
        xor     eax, eax
L_38da:
        push    0x0
        push    eax
        push    esi
        call    FUN_00663bd0
        add     esp, 0xc
L_38e6:
        fld     dword ptr [g_76d064]
        pop     edi
        pop     esi
        ret     0x4
    }
}
