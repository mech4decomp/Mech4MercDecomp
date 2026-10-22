/*
 * FUN_0063FA10 (202 B) — clamps two doubles and increments a counter array,
 * storing a result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_76d970;
extern double g_78d008;

__declspec(naked) void FUN_0063FA10(void)
{
    __asm {
        fld     qword ptr [ecx+0xf0]
        fcomp   qword ptr [g_76d970]
        fld     qword ptr [esp+4]
        fnstsw  ax
        test    ah, 0x40
        je      L_fa2d
        fst     qword ptr [ecx+0xf0]
    L_fa2d:
        fld     qword ptr [ecx+0xf8]
        fcomp   qword ptr [g_76d970]
        fnstsw  ax
        test    ah, 0x40
        je      L_fa46
        fst     qword ptr [ecx+0xf8]
    L_fa46:
        fcom    qword ptr [ecx+0xf0]
        fnstsw  ax
        test    ah, 1
        jne     L_fa7f
    L_fa53:
        fld     qword ptr [ecx+0xf0]
        mov     al, byte ptr [ecx+0x100]
        fadd    qword ptr [g_78d008]
        test    al, al
        sete    al
        mov     byte ptr [ecx+0x100], al
        fst     qword ptr [ecx+0xf0]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_fa53
    L_fa7f:
        fcom    qword ptr [ecx+0xf8]
        fnstsw  ax
        test    ah, 1
        jne     L_fad4
        push    esi
    L_fa8d:
        lea     eax, [ecx+0x104]
        mov     esi, 0xc
    L_fa98:
        mov     edx, dword ptr [eax]
        test    edx, edx
        je      L_faa1
        inc     edx
        mov     dword ptr [eax], edx
    L_faa1:
        cmp     dword ptr [eax], 0xa
        jne     L_faac
        mov     dword ptr [eax], 0
    L_faac:
        add     eax, 4
        dec     esi
        jne     L_fa98
        fld     qword ptr [ecx+0xf8]
        fadd    qword ptr [g_78d008]
        fst     qword ptr [ecx+0xf8]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_fa8d
        fstp    qword ptr [ecx+0x2c]
        pop     esi
        ret     8
    L_fad4:
        fstp    qword ptr [ecx+0x2c]
        ret     8
    }
}
