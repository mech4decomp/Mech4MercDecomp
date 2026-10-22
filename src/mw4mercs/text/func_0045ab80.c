/*
 * FUN_0045ab80 (365 B) — MLR color helper: averages a list of RGBA float
 * colors (optionally via virtual transform) and packs the result into a
 * 32-bit ARGB byte value. RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_008bd548;
extern float g_008bd54c;
extern float g_008bd550;
extern float g_008bd554;
extern float g_007b9550;
extern float g_0076ebf4;

__declspec(naked) void FUN_0045ab80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        push    ebx
        push    esi
        jnz     L_abb3
        mov     eax, dword ptr [g_008bd548]
        mov     ecx, dword ptr [g_008bd54c]
        mov     edx, dword ptr [g_008bd550]
        mov     dword ptr [ebp - 0x14], eax
        mov     eax, dword ptr [g_008bd554]
        mov     dword ptr [ebp - 0x10], ecx
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x8], eax
        jmp     L_abfb
L_abb3:
        test    eax, eax
        mov     dword ptr [ebp - 0x14], 0
        mov     dword ptr [ebp - 0x10], 0
        mov     dword ptr [ebp - 0xc], 0
        mov     dword ptr [ebp - 0x8], 0x3f800000
        jle     L_abfb
        mov     esi, dword ptr [ebp + 8]
        push    edi
        mov     edi, eax
L_abd9:
        mov     ecx, dword ptr [esi]
        fld     dword ptr [ecx + 8]
        fcomp   dword ptr [g_007b9550]
        __emit 0xDF   /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B WAIT) */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 rejected by MSVC6 inline asm */
        __emit 0xC4
        __emit 0x01
        jnz     L_abf4
        mov     edx, dword ptr [ecx]
        lea     eax, [ebp - 0x14]
        push    eax
        call    dword ptr [edx + 0x14]
L_abf4:
        add     esi, 4
        dec     edi
        jnz     L_abd9
        pop     edi
L_abfb:
        lea     ecx, [ebp - 0x14]
        mov     dword ptr [ebp + 8], ecx
        fld     dword ptr [g_0076ebf4]
        mov     esi, dword ptr [ebp + 8]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 4]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 4]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp + 0xc], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 4]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 4]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0xc]
        shl     ecx, 8
        or      ecx, ebx
        mov     dword ptr [ebp + 0xc], ecx
        fld     dword ptr [esi + 4]
        mov     ecx, dword ptr [esi + 4]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 4]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 4]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0xc]
        shl     ecx, 8
        or      ecx, ebx
        mov     dword ptr [ebp + 0xc], ecx
        mov     ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 4]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 4]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0xc]
        shl     ecx, 8
        or      ecx, ebx
        mov     dword ptr [ebp + 0xc], ecx
        mov     eax, dword ptr [ebp + 0xc]
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
