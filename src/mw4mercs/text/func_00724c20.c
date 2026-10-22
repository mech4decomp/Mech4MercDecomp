/*
 * FUN_00724C20 (779 B) — Sound slider index dispatcher. Reads a slider
 * value from a global config table based on a switch (jump table) and
 * writes the result into up to three output pointers.
 *
 * __stdcall, RET 0x14 (5 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_00856b94;
extern int DAT_00856b8c;
extern int DAT_00856a8c[];
extern void __cdecl FUN_006fab90(void);
extern char str_7a5440[];
extern int DAT_00724f34;   /* switch jump table base 0x00724F34 */
extern char DAT_00724f58;  /* switch byte table base 0x00724F58 */

__declspec(naked) void __stdcall FUN_00724c20(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 8
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jz      l_33
        mov     dword ptr [eax], 0
    l_33:
        mov     ecx, dword ptr [ebp + 0x14]
        test    ecx, ecx
        jz      l_40
        mov     dword ptr [ecx], 0
    l_40:
        push    esi
        mov     esi, dword ptr [ebp + 0x18]
        test    esi, esi
        push    edi
        jz      l_4f
        mov     dword ptr [esi], 0
    l_4f:
        mov     edx, dword ptr [DAT_00856b94]
        test    edx, edx
        jz      l_2b
        mov     edx, dword ptr [ebp + 0xc]
        cmp     edx, 0x200
        jg      l_e16
        jz      l_dfa
        lea     edi, [edx - 2]
        cmp     edi, 0xfe
        ja      l_eac
        xor     edx, edx
        mov     dl, byte ptr [edi + DAT_00724f58]
        jmp     dword ptr [edx*4 + DAT_00724f34]

    /* case 2 */
        mov     ecx, dword ptr [ebp + 8]
        cmp     ecx, -1
        jz      l_cac
        mov     ecx, dword ptr [ecx*4 + DAT_00856a8c]
        mov     edx, dword ptr [ecx + 0x5c]
        pop     edi
        mov     dword ptr [eax], edx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14
    l_cac:
        mov     ecx, dword ptr [DAT_00856b8c]
        mov     edx, dword ptr [ecx + 0xd8]
        pop     edi
        mov     dword ptr [eax], edx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14

    /* case 4 */
        mov     ecx, dword ptr [ebp + 8]
        cmp     ecx, -1
        jnz     l_cd8
        pop     edi
        mov     dword ptr [eax], 0
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14
    l_cd8:
        mov     ecx, dword ptr [ecx*4 + DAT_00856a8c]
        mov     edx, dword ptr [ecx + 0x60]
        pop     edi
        mov     dword ptr [eax], edx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14

    /* case 8 */
        mov     ecx, dword ptr [ebp + 8]
        cmp     ecx, -1
        jnz     l_d02
        pop     edi
        mov     dword ptr [eax], 0x3f800000
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14
    l_d02:
        mov     ecx, dword ptr [ecx*4 + DAT_00856a8c]
        mov     edx, dword ptr [ecx + 0x64]
        pop     edi
        mov     dword ptr [eax], edx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14

    /* case 0x20 */
        mov     edx, dword ptr [ebp + 8]
        cmp     edx, -1
        jnz     l_d44
        mov     edx, dword ptr [DAT_00856b8c]
        mov     edi, dword ptr [edx + 0x88]
        mov     dword ptr [eax], edi
        mov     eax, dword ptr [edx + 0x8c]
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [edx + 0x90]
        pop     edi
        mov     dword ptr [esi], ecx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14
    l_d44:
        mov     edx, dword ptr [edx*4 + DAT_00856a8c]
        mov     edi, dword ptr [edx + 0x20]
        mov     dword ptr [eax], edi
        mov     eax, dword ptr [edx + 0x24]
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [edx + 0x28]
        pop     edi
        mov     dword ptr [esi], ecx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14

    /* case 0x40 */
        mov     edx, dword ptr [ebp + 8]
        cmp     edx, -1
        jnz     l_d90
        mov     edx, dword ptr [DAT_00856b8c]
        mov     edi, dword ptr [edx + 0x94]
        mov     dword ptr [eax], edi
        mov     eax, dword ptr [edx + 0x98]
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [edx + 0x9c]
        pop     edi
        mov     dword ptr [esi], ecx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14
    l_d90:
        mov     edx, dword ptr [edx*4 + DAT_00856a8c]
        mov     edi, dword ptr [edx + 0x2c]
        mov     dword ptr [eax], edi
        mov     eax, dword ptr [edx + 0x30]
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [edx + 0x34]
        pop     edi
        mov     dword ptr [esi], ecx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14

    /* case 0x80 */
        mov     edx, dword ptr [DAT_00856b8c]
        mov     edi, dword ptr [edx + 0xa0]
        mov     dword ptr [eax], edi
        mov     eax, dword ptr [edx + 0xa4]
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [edx + 0xa8]
        pop     edi
        mov     dword ptr [esi], ecx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14

    /* case 0x100 */
        mov     edx, dword ptr [DAT_00856b8c]
        mov     edi, dword ptr [edx + 0xac]
        mov     dword ptr [eax], edi
        mov     eax, dword ptr [edx + 0xb0]
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [edx + 0xb4]
        pop     edi
        mov     dword ptr [esi], ecx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14

    /* default (case 3) */
    l_dfa:
        mov     edx, dword ptr [ebp + 8]
        mov     edx, dword ptr [edx*4 + DAT_00856a8c]
        mov     esi, dword ptr [edx + 0x50]
        mov     dword ptr [eax], esi
        mov     eax, dword ptr [edx + 0x54]
        pop     edi
        mov     dword ptr [ecx], eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14

    /* case 0x1000 */
    l_e16:
        cmp     edx, 0x2000
        jg      l_e90
        jz      l_e7a
        cmp     edx, 0x400
        jz      l_e64
        cmp     edx, 0x800
        jz      l_e4e
        cmp     edx, 0x1000
        jnz     l_eac
        mov     ecx, dword ptr [DAT_00856b8c]
        mov     edx, dword ptr [ecx + 0xb8]
        pop     edi
        mov     dword ptr [eax], edx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14

    /* case 0x800 */
    l_e4e:
        mov     ecx, dword ptr [DAT_00856b8c]
        mov     edx, dword ptr [ecx + 0xbc]
        pop     edi
        mov     dword ptr [eax], edx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14

    /* case 0x400 */
    l_e64:
        mov     ecx, dword ptr [DAT_00856b8c]
        mov     edx, dword ptr [ecx + 0xc0]
        pop     edi
        mov     dword ptr [eax], edx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14

    /* case 0x2000 */
    l_e7a:
        mov     ecx, dword ptr [DAT_00856b8c]
        mov     edx, dword ptr [ecx + 0xdc]
        pop     edi
        mov     dword ptr [eax], edx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14

    /* case 0x4000 + error handler */
    l_e90:
        cmp     edx, 0x4000
        /* __emit: MSVC6 encodes jz l_f1d as rel8 (74 79); ref uses rel32 0F 84 81 00 00 00 */
        __emit 0x0F
        __emit 0x84
        __emit 0x81
        __emit 0x00
        __emit 0x00
        __emit 0x00
        cmp     edx, 0x8000
        jz      l_ee7
        cmp     edx, 0x10000
        jz      l_ec6
    l_eac:
        push    0x7a5440
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_2b
        int     3
        /* dead epilogue copy after int 3 (assert-fail return path) */
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14

    /* case 0x10000 */
    l_ec6:
        mov     edx, dword ptr [ebp + 8]
        mov     edx, dword ptr [edx*4 + DAT_00856a8c]
        mov     edi, dword ptr [edx + 0x40]
        mov     dword ptr [eax], edi
        mov     eax, dword ptr [edx + 0x44]
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [edx + 0x48]
        pop     edi
        mov     dword ptr [esi], ecx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14

    /* case 0x8000 (FPU uint->float) */
    l_ee7:
        mov     edx, dword ptr [ebp + 8]
        mov     edx, dword ptr [edx*4 + DAT_00856a8c]
        mov     esi, dword ptr [edx + 0x38]
        mov     dword ptr [ebp - 8], esi
        mov     dword ptr [ebp - 4], 0
        fild    qword ptr [ebp - 8]
        mov     dword ptr [ebp - 4], 0
        pop     edi
        pop     esi
        fstp    dword ptr [eax]
        mov     eax, dword ptr [edx + 0x3c]
        mov     dword ptr [ebp - 8], eax
        fild    qword ptr [ebp - 8]
        fstp    dword ptr [ecx]
        mov     esp, ebp
        pop     ebp
        ret     0x14

    /* case 0x4000 */
    l_f1d:
        mov     ecx, dword ptr [DAT_00856b8c]
        mov     edx, dword ptr [ecx + 0xe0]
        mov     dword ptr [eax], edx
    l_2b:
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}
