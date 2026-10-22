/*
 * FUN_00665500 (355 B) — __cdecl, 2 params (int*, float).
 *   Reads object transforms, computes a distance and drives a camera/
 *   animation adjustment. Heavy FPU usage with ESP-based locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f1f84;
extern float g_795478;
extern float g_7748c8;
extern float g_77a1a0;
extern float g_77de90;
extern float g_76d3c8;

extern char __cdecl FUN_00415230(void);
extern void __cdecl FUN_006100d0(void);

__declspec(naked) void __cdecl FUN_00665500(void)
{
    __asm {
        sub     esp, 0x14
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, dword ptr [g_7f1f84]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        test    al, al
        jz      L_65665d
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     edi, dword ptr [eax + 0x99c]
        test    edi, edi
        jz      L_65665d
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        push    0x0
        mov     dword ptr [esp + 0x14], ecx
        push    0xbf800000
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], eax
        call    dword ptr [edx + 0x34]
        mov     ecx, dword ptr [esp + 0x1c]
        push    eax
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        push    ecx
        call    FUN_006100d0
        fsubr   dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esi]
        add     esp, 0x18
        mov     ecx, esi
        fstp    dword ptr [esp + 0xc]
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0x19c]
        mov     ecx, dword ptr [edi + 0xe0]
        mov     dword ptr [esp + 0x8], eax
        cmp     dword ptr [ecx + 0x14], 0x6
        jz      L_65665d
        fld     dword ptr [esp + 0xc]
        fcomp   dword ptr [esp + 0x24]
        __emit  0xDF   /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B WAIT) */
        __emit  0xE0
        __emit  0xF6   /* __emit: test ah,imm8 rejected by MSVC6 inline asm */
        __emit  0xC4
        __emit  0x01
        jnz     L_6565ed
        fld     dword ptr [esp + 0x8]
        fcomp   dword ptr [g_795478]
        __emit  0xDF   /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B WAIT) */
        __emit  0xE0
        __emit  0xF6   /* __emit: test ah,imm8 rejected by MSVC6 inline asm */
        __emit  0xC4
        __emit  0x01
        jnz     L_6565ed
        fld     dword ptr [esp + 0x8]
        fadd    st(0), st(0)
        fadd    dword ptr [esp + 0xc]
        fcomp   dword ptr [esp + 0x24]
        __emit  0xDF   /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B WAIT) */
        __emit  0xE0
        __emit  0xF6   /* __emit: test ah,imm8 rejected by MSVC6 inline asm */
        __emit  0xC4
        __emit  0x01
        jz      L_65665d
L_6565ed:
        fld     dword ptr [esp + 0x8]
        fcomp   dword ptr [g_7748c8]
        __emit  0xDF   /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B WAIT) */
        __emit  0xE0
        __emit  0xF6   /* __emit: test ah,imm8 rejected by MSVC6 inline asm */
        __emit  0xC4
        __emit  0x01
        jz      L_65665d
        fld     dword ptr [g_7748c8]
        fsub    dword ptr [esp + 0x8]
        fadd    st(0), st(0)
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0xc]
        faddp   st(1), st(0)
        fmul    dword ptr [g_77a1a0]
        fst     dword ptr [esp + 0x24]
        fcomp   dword ptr [g_77de90]
        __emit  0xDF   /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B WAIT) */
        __emit  0xE0
        __emit  0xF6   /* __emit: test ah,imm8 rejected by MSVC6 inline asm */
        __emit  0xC4
        __emit  0x41
        jnz     L_656635
        mov     dword ptr [esp + 0x24], 0x3ecccccd
        jmp     L_65664e
L_656635:
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [g_76d3c8]
        __emit  0xDF   /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B WAIT) */
        __emit  0xE0
        __emit  0xF6   /* __emit: test ah,imm8 rejected by MSVC6 inline asm */
        __emit  0xC4
        __emit  0x01
        jz      L_65664e
        mov     dword ptr [esp + 0x24], 0x3e800000
L_65664e:
        mov     eax, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x80]
L_65665d:
        pop     edi
        pop     esi
        add     esp, 0x14
        ret
    }
}
