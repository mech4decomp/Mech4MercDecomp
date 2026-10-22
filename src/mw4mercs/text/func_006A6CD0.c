/*
 * FUN_006A6CD0 (771 B, 0x6A6CD0-0x6A6FD3) — anim data block containing two
 * __thiscall functions:
 *   - 0x6A6CD0: destructor (test [esp+4],1; set vtable 0x795450; delete).
 *   - 0x6A6CF0: main function (ret 0xc) that resolves a target object via
 *     vtable calls, copies a 0xc-dword matrix, and computes a dot-product /
 *     angle result with FPU (returns 0.0 or clamped value).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_795450[];   /* 0x795450 - vtable */
extern unsigned char g_82db28;   /* 0x82db28 - byte data */
extern unsigned int g_799e2c;   /* 0x799e2c - dword data */
extern float g_76c5b0;   /* 0x76c5b0 - float const */
extern float g_76d064;   /* 0x76d064 - float const (0.0) */
extern float g_76d070;   /* 0x76d070 - float const (scale) */

extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040D030(void);
extern void __cdecl FUN_0040CA10(void);
extern void __cdecl FUN_0040D560(void);

__declspec(naked) void FUN_006A6CD0(void)
{
    __asm {
        test    byte ptr [esp + 4], 1
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], offset g_795450
        je      L_6A6CE9
        push    esi
        call    FUN_004084E0
        add     esp, 4
L_6A6CE9:
        mov     eax, esi
        pop     esi
        ret     4
        nop
        sub     esp, 0x84
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 4]
        test    eax, eax
        push    esi
        push    edi
        jne     L_6A6DF8
        mov     cl, byte ptr [g_82db28]
        mov     al, 1
        cmp     cl, al
        jne     L_6A6D35
        mov     ecx, dword ptr [esp + 0x94]
        mov     eax, dword ptr [ecx]
        lea     edx, [esp + 0x60]
        push    edx
        call    dword ptr [eax + 0xb0]
        push    eax
        lea     ecx, [esp + 0x34]
        call    FUN_00419460
        jmp     L_6A6EE3
L_6A6D35:
        cmp     byte ptr [ebp + 9], al
        mov     esi, dword ptr [esp + 0x94]
        jne     L_6A6DD5
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x410]
        mov     edi, dword ptr [eax + 0x40c]
        sub     ecx, edi
        sar     ecx, 2
        je      L_6A6DD5
        mov     edx, edi
        cmp     dword ptr [edx], 0
        je      L_6A6DD5
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x410]
        mov     edi, dword ptr [eax + 0x40c]
        sub     ecx, edi
        sar     ecx, 2
        je      L_6A6D86
        mov     edx, edi
        mov     eax, dword ptr [edx]
        jmp     L_6A6D88
L_6A6D86:
        xor     eax, eax
L_6A6D88:
        mov     ecx, dword ptr [eax + 0x17c]
        test    ecx, ecx
        je      L_6A6DD5
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        je      L_6A6DB2
        mov     edx, esi
        mov     eax, dword ptr [edx]
        jmp     L_6A6DB4
L_6A6DB2:
        xor     eax, eax
L_6A6DB4:
        mov     eax, dword ptr [eax + 0x17c]
        mov     ecx, dword ptr [eax + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [esp + 0x34]
        call    FUN_00419460
        jmp     L_6A6EE3
L_6A6DD5:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     esi, dword ptr [eax + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [esp + 0x30]
        rep movsd
        jmp     L_6A6EE3
L_6A6DF8:
        cmp     byte ptr [ebp + 9], 1
        push    ebx
        mov     ebx, dword ptr [esp + 0x98]
        jne     L_6A6E97
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        je      L_6A6E97
        mov     edx, esi
        cmp     dword ptr [edx], 0
        je      L_6A6E97
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        je      L_6A6E4B
        mov     edx, esi
        mov     eax, dword ptr [edx]
        jmp     L_6A6E4D
L_6A6E4B:
        xor     eax, eax
L_6A6E4D:
        mov     ecx, dword ptr [eax + 0x17c]
        test    ecx, ecx
        je      L_6A6E97
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [eax + 0x410]
        mov     esi, dword ptr [eax + 0x40c]
        sub     ecx, esi
        sar     ecx, 2
        je      L_6A6E77
        mov     edx, esi
        mov     eax, dword ptr [edx]
        jmp     L_6A6E79
L_6A6E77:
        xor     eax, eax
L_6A6E79:
        mov     eax, dword ptr [eax + 0x17c]
        mov     ecx, dword ptr [eax + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_00419460
        jmp     L_6A6EB5
L_6A6E97:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x3c]
        mov     esi, dword ptr [eax + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [esp + 0x34]
        rep movsd
L_6A6EB5:
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [g_799e2c]
        mov     edx, dword ptr [eax]
        push    0
        push    ecx
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xf8]
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_0040D030
        pop     ebx
L_6A6EE3:
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00419480
        mov     edx, dword ptr [esp + 0x9c]
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_0040CA10
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0xc]
        faddp   st(1), st(0)
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6   /* test ah, imm8 not supported in MSVC6 inline asm */
        __emit 0xC4
        __emit 0x40
        je      L_6A6F42
        fld     dword ptr [g_76d064]
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x84
        ret     0xc
L_6A6F42:
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_0040D560
        fld     dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x48]
        mov     al, byte ptr [ebp + 8]
        test    al, al
        fld     dword ptr [esp + 0x58]
        fld     dword ptr [esp + 0x2c]
        fmul    st(0), st(1)
        fld     dword ptr [esp + 0x28]
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x24]
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fadd    dword ptr [g_76d064]
        fmul    dword ptr [g_76d070]
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        jne     L_6A6F91
        fsubr   dword ptr [g_76d064]
L_6A6F91:
        fcom    dword ptr [g_76d064]
        fnstsw  ax
        __emit 0xF6   /* test ah, imm8 not supported in MSVC6 inline asm */
        __emit 0xC4
        __emit 0x41
        jne     L_6A6FB2
        pop     edi
        fstp    st(0)
        fld     dword ptr [g_76d064]
        pop     esi
        pop     ebp
        add     esp, 0x84
        ret     0xc
L_6A6FB2:
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6   /* test ah, imm8 not supported in MSVC6 inline asm */
        __emit 0xC4
        __emit 0x01
        je      L_6A6FC7
        fstp    st(0)
        fld     dword ptr [g_76c5b0]
L_6A6FC7:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x84
        ret     0xc
    }
}
