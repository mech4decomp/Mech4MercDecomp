/*
 * FUN_0074C3E0 (524 B) — Light-type-to-string formatter. Dispatches on the
 * light type (1=point, 2=spot, 3=directional) and builds a description string
 * via sprintf into DAT_008bacf4 / DAT_008badf4.
 *
 * __stdcall, RET 4 (1 param: int *param_1). Returns char *.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_7ab558;                                /* _DAT_007ab558 (sqrt operand) */
extern int (__cdecl *g_76b420)(void *dst, const char *fmt, ...); /* sprintf IAT */

extern void __cdecl FUN_0074c360(void);

__declspec(naked) char * __stdcall FUN_0074c3e0(int *param_1)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ebx]
        dec     eax
        push    esi
        push    edi
        jz      L_535
        dec     eax
        jz      L_442
        dec     eax
        jz      L_401
        pop     edi
        pop     esi
        mov     eax, 0x7ab590
        pop     ebx
        ret     0x4
L_401:
        push    ebx
        call    FUN_0074c360
        fld     dword ptr [ebx + 0x48]
        push    eax
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [ebx + 0x44]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebx + 0x40]
        fstp    qword ptr [esp]
        push    0x7ab560
        push    0x8bacf4
        call    dword ptr [g_76b420]
        add     esp, 0x24
        pop     edi
        pop     esi
        mov     eax, 0x8bacf4
        pop     ebx
        ret     0x4
L_442:
        fld     qword ptr [g_7ab558]
        fsqrt
        fcomp   dword ptr [ebx + 0x4c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_47b
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ab554
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, 0x8badf4
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        jmp     L_497
L_47b:
        fld     dword ptr [ebx + 0x4c]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7ab54c
        push    0x8badf4
        call    dword ptr [g_76b420]
        add     esp, 0x10
L_497:
        push    ebx
        call    FUN_0074c360
        fld     dword ptr [ebx + 0x64]
        push    eax
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [ebx + 0x60]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        sub     esp, 0x8
        fld     dword ptr [ebx + 0x50]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x10]
        sub     esp, 0x8
        fld     dword ptr [ebx + 0x5c]
        fstp    qword ptr [esp + 0x10]
        fld     dword ptr [ebx + 0x58]
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebx + 0x54]
        fstp    qword ptr [esp]
        push    0x8badf4
        fld     dword ptr [ebx + 0x48]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [ebx + 0x44]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        sub     esp, 0x8
        fld     dword ptr [ebx + 0x40]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x10]
        sub     esp, 0x8
        fld     dword ptr [ebx + 0x3c]
        fstp    qword ptr [esp + 0x10]
        fld     dword ptr [ebx + 0x38]
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebx + 0x34]
        fstp    qword ptr [esp]
        push    0x7ab4b8
        push    0x8bacf4
        call    dword ptr [g_76b420]
        add     esp, 0x70
        pop     edi
        pop     esi
        mov     eax, 0x8bacf4
        pop     ebx
        ret     0x4
L_535:
        fld     qword ptr [g_7ab558]
        fsqrt
        fcomp   dword ptr [ebx + 0x4c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_56e
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ab554
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, 0x8badf4
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        jmp     L_58a
L_56e:
        fld     dword ptr [ebx + 0x4c]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7ab54c
        push    0x8badf4
        call    dword ptr [g_76b420]
        add     esp, 0x10
L_58a:
        push    ebx
        call    FUN_0074c360
        fld     dword ptr [ebx + 0x5c]
        push    eax
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [ebx + 0x58]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebx + 0x54]
        fstp    qword ptr [esp]
        push    0x8badf4
        fld     dword ptr [ebx + 0x3c]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [ebx + 0x38]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebx + 0x34]
        fstp    qword ptr [esp]
        push    0x7ab46c
        push    0x8bacf4
        call    dword ptr [g_76b420]
        add     esp, 0x40
        pop     edi
        pop     esi
        mov     eax, 0x8bacf4
        pop     ebx
        ret     0x4
    }
}
