/*
 * FUN_006a2d80 (198 B) — __thiscall, RET 0x4 (1 stack arg).
 *
 * Calls vtable[0](param_1) on sub-object this+0x30, then FUN_006a4ae0 to
 * set a flag at this+0x4, FUN_006a22f0 / FUN_006a2a30 to decide an early
 * return, and a chain of virtual calls (0x78, 0x34, 0xd8) feeding
 * FUN_00663bd0. Returns 0x76d064 in ST0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_799d48;              /* 0x00799d48 */
extern float g_799d40;            /* 0x00799d40 */
extern float g_76c5b0;            /* 0x0076c5b0 */
extern float g_76d064;            /* 0x0076d064 */
extern int g_7f1f84;              /* 0x007f1f84 */
extern void __cdecl FUN_006a4ae0(void);
extern void __cdecl FUN_006a22f0(void);
extern void __cdecl FUN_006a2a30(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00663bd0(void);

__declspec(naked) float __cdecl FUN_006a2d80(int this, int *param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x30]
        lea     ecx, [edi + 0x30]
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
        jnz     l_flag0
        mov     byte ptr [edi + 0x4], 0x1
        jmp     l_after_flag
    l_flag0:
        mov     byte ptr [edi + 0x4], 0x0
    l_after_flag:
        push    esi
        call    FUN_006a22f0
        add     esp, 0x4
        test    al, al
        jz      l_ret
        push    esi
        mov     ecx, edi
        call    FUN_006a2a30
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_cont
        fld     dword ptr [g_76d064]
        mov     byte ptr [edi + 0x4], 0x1
        pop     edi
        pop     esi
        ret     0x4
    l_cont:
        mov     edx, dword ptr [esi]
        push    0x40800000
        mov     ecx, esi
        call    dword ptr [edx + 0x78]
        test    al, al
        jz      l_zero
        mov     eax, dword ptr [esi]
        mov     edi, dword ptr [g_7f1f84]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        test    al, al
        jz      l_zero
        mov     edi, 0x2
        jmp     l_after_edi
    l_zero:
        xor     edi, edi
    l_after_edi:
        mov     edx, dword ptr [esi]
        push    0x40a00000
        mov     ecx, esi
        call    dword ptr [edx + 0xd8]
        push    ecx
        fstp    dword ptr [esp]
        push    edi
        push    esi
        call    FUN_00663bd0
        add     esp, 0xc
    l_ret:
        fld     dword ptr [g_76d064]
        pop     edi
        pop     esi
        ret     0x4
    }
}
