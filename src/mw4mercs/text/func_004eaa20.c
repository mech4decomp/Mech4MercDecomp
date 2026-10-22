/*
 * FUN_004EAA20 (243 B) - MLR/Adept gradient/color lookup (__thiscall, RET 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d064;   /* DAT_0076d064 */
extern float g_7744a4;   /* DAT_007744a4 */
extern int   g_7dc728;   /* DAT_007dc728 */
extern double g_774538;  /* DAT_00774538 */
extern int (*g_76b2e4)(double);   /* IAT 0x0076b2e4 */
extern int __cdecl FUN_0075db4a(void);

__declspec(naked) void __fastcall FUN_004eaa20(void)
{
    __asm {
        push    ecx
        push    edi
        mov     edi, dword ptr [ecx + 0x208]
        test    edi, edi
        jnz     LAA33
        xor     al, al
        pop     edi
        pop     ecx
        ret     4
    LAA33:
        fld     dword ptr [g_76d064]
        mov     eax, dword ptr [esp + 0xc]
        fdiv    dword ptr [g_7744a4]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x151]
        push    esi
        mov     esi, dword ptr [g_7dc728]
        sub     esp, 0x8
        mov     dword ptr [esp + 0x18], edx
        fld     dword ptr [eax]
        fsub    dword ptr [esi + 0x160]
        fmul    st(0), st(1)
        fisub   dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [eax + 0x8]
        xor     eax, eax
        fsub    dword ptr [esi + 0x15c]
        mov     al, byte ptr [ecx + 0x150]
        fmul    st(0), st(1)
        mov     dword ptr [esp + 0x18], eax
        fisub   dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        fstp    st(0)
        fld     dword ptr [esp + 0x10]
        fmul    qword ptr [g_774538]
        fstp    qword ptr [esp]
        call    dword ptr [g_76b2e4]
        add     esp, 0x8
        call    FUN_0075db4a
        mov     esi, 0x100
        sub     esi, eax
        jns     LAAB4
        xor     esi, esi
        jmp     LAAC1
    LAAB4:
        cmp     esi, 0xff
        jle     LAAC1
        mov     esi, 0xff
    LAAC1:
        fld     dword ptr [esp + 0x10]
        sub     esp, 0x8
        fmul    qword ptr [g_774538]
        fstp    qword ptr [esp]
        call    dword ptr [g_76b2e4]
        add     esp, 0x8
        call    FUN_0075db4a
        mov     ecx, 0x100
        sub     ecx, eax
        jns     LAAF8
        xor     ecx, ecx
        shl     ecx, 0x8
        add     ecx, edi
        mov     al, byte ptr [ecx + esi]
        pop     esi
        pop     edi
        pop     ecx
        ret     4
    LAAF8:
        cmp     ecx, 0xff
        jle     LAB05
        mov     ecx, 0xff
    LAB05:
        shl     ecx, 0x8
        add     ecx, edi
        mov     al, byte ptr [ecx + esi]
        pop     esi
        pop     edi
        pop     ecx
        ret     4
    }
}
