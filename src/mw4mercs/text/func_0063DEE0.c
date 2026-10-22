/*
 * FUN_0063DEE0 (202 B) — clamps two doubles and increments a counter array,
 * storing a result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_76d970;
extern double g_78d008;

__declspec(naked) void FUN_0063DEE0(void)
{
    __asm {
        fld     qword ptr [ecx+0xcc]
        fcomp   qword ptr [g_76d970]
        fld     qword ptr [esp+4]
        fnstsw  ax
        test    ah, 0x40
        je      L_defd
        fst     qword ptr [ecx+0xcc]
    L_defd:
        fld     qword ptr [ecx+0xd4]
        fcomp   qword ptr [g_76d970]
        fnstsw  ax
        test    ah, 0x40
        je      L_df16
        fst     qword ptr [ecx+0xd4]
    L_df16:
        fcom    qword ptr [ecx+0xcc]
        fnstsw  ax
        test    ah, 1
        jne     L_df4f
    L_df23:
        fld     qword ptr [ecx+0xcc]
        mov     al, byte ptr [ecx+0xdc]
        fadd    qword ptr [g_78d008]
        test    al, al
        sete    al
        mov     byte ptr [ecx+0xdc], al
        fst     qword ptr [ecx+0xcc]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_df23
    L_df4f:
        fcom    qword ptr [ecx+0xd4]
        fnstsw  ax
        test    ah, 1
        jne     L_dfa4
        push    esi
    L_df5d:
        lea     eax, [ecx+0xe0]
        mov     esi, 0xc
    L_df68:
        mov     edx, dword ptr [eax]
        test    edx, edx
        je      L_df71
        inc     edx
        mov     dword ptr [eax], edx
    L_df71:
        cmp     dword ptr [eax], 0xa
        jne     L_df7c
        mov     dword ptr [eax], 0
    L_df7c:
        add     eax, 4
        dec     esi
        jne     L_df68
        fld     qword ptr [ecx+0xd4]
        fadd    qword ptr [g_78d008]
        fst     qword ptr [ecx+0xd4]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_df5d
        fstp    qword ptr [ecx+0x2c]
        pop     esi
        ret     8
    L_dfa4:
        fstp    qword ptr [ecx+0x2c]
        ret     8
    }
}
