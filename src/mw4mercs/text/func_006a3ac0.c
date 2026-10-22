/*
 * FUN_006a3ac0 (197 B) — __thiscall, RET 0x4 (1 stack arg).
 *
 * Calls vtable[0xd4](param_1); if it returns 1, calls FUN_006a4ba0 and
 * conditionally FUN_00662ee0. Then calls FUN_006a4b70 twice to decide a
 * flag at this+0x8, and finally calls FUN_00664940 or FUN_00663460,
 * returning 0x76d064 in ST0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_799d40;            /* 0x00799d40 */
extern float g_76d064;            /* 0x0076d064 */
extern void __cdecl FUN_006a4ba0(void);
extern void __cdecl FUN_00662ee0(void);
extern void __cdecl FUN_006a4b70(void);
extern void __cdecl FUN_00664940(void);
extern void __cdecl FUN_00663460(void);

__declspec(naked) float __cdecl FUN_006a3ac0(int this, int *param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        mov     ecx, esi
        call    dword ptr [eax + 0xd4]
        cmp     al, 0x1
        jnz     l_after1
        push    0x40a00000
        push    0x41a00000
        push    esi
        call    FUN_006a4ba0
        fcomp   dword ptr [g_799d40]
        add     esp, 0xc
        fnstsw  ax
        test    ah, 0x1
        jnz     l_after1
        push    0x1
        push    esi
        call    FUN_00662ee0
        add     esp, 0x8
    l_after1:
        push    0x42480000
        push    esi
        call    FUN_006a4b70
        fcomp   dword ptr [g_799d40]
        add     esp, 0x8
        fnstsw  ax
        test    ah, 0x1
        jnz     l_else
        mov     dword ptr [edi + 0x8], 0x1
        jmp     l_check
    l_else:
        push    0x44160000
        push    esi
        call    FUN_006a4b70
        fsubr   dword ptr [g_76d064]
        add     esp, 0x8
        fcomp   dword ptr [g_799d40]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_check
        mov     dword ptr [edi + 0x8], 0x0
    l_check:
        cmp     dword ptr [edi + 0x8], 0x1
        jnz     l_other
        push    0x44160000
        push    esi
        call    FUN_00664940
        fld     dword ptr [g_76d064]
        add     esp, 0x8
        pop     edi
        pop     esi
        ret     0x4
    l_other:
        push    0x40a00000
        push    esi
        call    FUN_00663460
        fld     dword ptr [g_76d064]
        add     esp, 0x8
        pop     edi
        pop     esi
        ret     0x4
    }
}
