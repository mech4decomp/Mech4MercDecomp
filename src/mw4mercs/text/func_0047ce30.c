/*
 * FUN_0047ce30 (365 B) — MLR color/vertex packing (RET 0xc). Accumulates
 * transformed vertices into a local color, then packs 4 floats into a
 * 32-bit ARGB via float->int saturation. Virtual call at vtable+0x14.
 *
 * CFLAGS: /O1
 */

extern int g_008bd548;
extern int g_008bd54c;
extern int g_008bd550;
extern int g_008bd554;
extern float g_007b9550;
extern float g_0076f46c;

__declspec(naked) void FUN_0047ce30(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        push    ebx
        push    esi
        jnz     L_47ce63
        mov     eax, dword ptr [g_008bd548]
        mov     ecx, dword ptr [g_008bd54c]
        mov     edx, dword ptr [g_008bd550]
        mov     dword ptr [ebp - 0x14], eax
        mov     eax, dword ptr [g_008bd554]
        mov     dword ptr [ebp - 0x10], ecx
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x8], eax
        jmp     L_47ceab
L_47ce63:
        test    eax, eax
        mov     dword ptr [ebp - 0x14], 0x0
        mov     dword ptr [ebp - 0x10], 0x0
        mov     dword ptr [ebp - 0xc], 0x0
        mov     dword ptr [ebp - 0x8], 0x3f800000
        jle     L_47ceab
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, eax
L_47ce89:
        mov     ecx, dword ptr [esi]
        fld     dword ptr [ecx + 0x8]
        fcomp   dword ptr [g_007b9550]
        __emit 0xDF   /* fnstsw ax - MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_47cea4
        mov     edx, dword ptr [ecx]
        lea     eax, [ebp - 0x14]
        push    eax
        call    dword ptr [edx + 0x14]
L_47cea4:
        add     esi, 0x4
        dec     edi
        jnz     L_47ce89
        pop     edi
L_47ceab:
        lea     ecx, [ebp - 0x14]
        mov     dword ptr [ebp + 0x8], ecx
        fld     dword ptr [g_0076f46c]
        mov     esi, dword ptr [ebp + 0x8]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x4]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x4]
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
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x4]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x4]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0xc], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x4]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x4]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0xc], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x4]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x4]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0xc]
        shl     ecx, 0x8
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
