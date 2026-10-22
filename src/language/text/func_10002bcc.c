/*
 * FUN_10002bcc (517 B, __thiscall) — strtol-style string-to-integer parser.
 * this (ECX) is passed through to the __thiscall helper FUN_100046c4.
 * Args: param_1 (EBP+8), param_2 (EBP+0xc), param_3 (EBP+0x10),
 * param_4 (EBP+0x14). Uses the 0x100084e8 char-class table and the
 * 0x100086f4 "table vs helper" switch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100046c4(void);
extern void __cdecl FUN_10004589(void);
extern void __cdecl FUN_10004580(void);

extern int  g_100086f4;
extern char *g_100084e8;

__declspec(naked) int FUN_10002bcc(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        and     dword ptr [ebp - 8], 0
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        mov     bl, byte ptr [edi]
        lea     esi, [edi + 1]
        mov     dword ptr [ebp - 4], esi
L_2be4:
        cmp     dword ptr [g_100086f4], 1
        jle     L_2bfc
        movzx   eax, bl
        push    8
        push    eax
        call    FUN_100046c4
        pop     ecx
        pop     ecx
        jmp     L_2c0b
L_2bfc:
        mov     ecx, dword ptr [g_100084e8]
        movzx   eax, bl
        mov     al, byte ptr [ecx + eax*2]
        and     eax, 8
L_2c0b:
        test    eax, eax
        jz      L_2c14
        mov     bl, byte ptr [esi]
        inc     esi
        jmp     L_2be4
L_2c14:
        cmp     bl, 0x2d
        mov     dword ptr [ebp - 4], esi
        jnz     L_2c22
        or      dword ptr [ebp + 0x14], 2
        jmp     L_2c27
L_2c22:
        cmp     bl, 0x2b
        jnz     L_2c2d
L_2c27:
        mov     bl, byte ptr [esi]
        inc     esi
        mov     dword ptr [ebp - 4], esi
L_2c2d:
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jl      L_2dc1
        cmp     eax, 1
        jz      L_2dc1
        cmp     eax, 0x24
        jg      L_2dc1
        push    0x10
        test    eax, eax
        pop     ecx
        jnz     L_2c75
        cmp     bl, 0x30
        jz      L_2c5f
        mov     dword ptr [ebp + 0x10], 0xa
        jmp     L_2c91
L_2c5f:
        mov     al, byte ptr [esi]
        cmp     al, 0x78
        jz      L_2c72
        cmp     al, 0x58
        jz      L_2c72
        mov     dword ptr [ebp + 0x10], 8
        jmp     L_2c91
L_2c72:
        mov     dword ptr [ebp + 0x10], ecx
L_2c75:
        cmp     dword ptr [ebp + 0x10], ecx
        jnz     L_2c91
        cmp     bl, 0x30
        jnz     L_2c91
        mov     al, byte ptr [esi]
        cmp     al, 0x78
        jz      L_2c89
        cmp     al, 0x58
        jnz     L_2c91
L_2c89:
        mov     bl, byte ptr [esi + 1]
        inc     esi
        inc     esi
        mov     dword ptr [ebp - 4], esi
L_2c91:
        or      eax, 0xffffffff
        xor     edx, edx
        div     dword ptr [ebp + 0x10]
        mov     edi, 0x103
        mov     dword ptr [ebp - 0xc], eax
L_2ca1:
        cmp     dword ptr [g_100086f4], 1
        movzx   esi, bl
        jle     L_2cb9
        push    4
        push    esi
        call    FUN_100046c4
        pop     ecx
        pop     ecx
        jmp     L_2cc4
L_2cb9:
        mov     eax, dword ptr [g_100084e8]
        mov     al, byte ptr [eax + esi*2]
        and     eax, 4
L_2cc4:
        test    eax, eax
        jz      L_2cd0
        movsx   ecx, bl
        sub     ecx, 0x30
        jmp     L_2d02
L_2cd0:
        cmp     dword ptr [g_100086f4], 1
        jle     L_2ce4
        push    edi
        push    esi
        call    FUN_100046c4
        pop     ecx
        pop     ecx
        jmp     L_2cef
L_2ce4:
        mov     eax, dword ptr [g_100084e8]
        mov     ax, word ptr [eax + esi*2]
        and     eax, edi
L_2cef:
        test    eax, eax
        jz      L_2d3d
        movsx   eax, bl
        push    eax
        call    FUN_10004589
        pop     ecx
        mov     ecx, eax
        sub     ecx, 0x37
L_2d02:
        cmp     ecx, dword ptr [ebp + 0x10]
        jnc     L_2d3d
        mov     esi, dword ptr [ebp - 8]
        or      dword ptr [ebp + 0x14], 8
        cmp     esi, dword ptr [ebp - 0xc]
        jc      L_2d27
        jnz     L_2d21
        or      eax, 0xffffffff
        xor     edx, edx
        div     dword ptr [ebp + 0x10]
        cmp     ecx, edx
        jbe     L_2d27
L_2d21:
        or      dword ptr [ebp + 0x14], 4
        jmp     L_2d30
L_2d27:
        imul    esi, dword ptr [ebp + 0x10]
        add     esi, ecx
        mov     dword ptr [ebp - 8], esi
L_2d30:
        mov     eax, dword ptr [ebp - 4]
        inc     dword ptr [ebp - 4]
        mov     bl, byte ptr [eax]
        jmp     L_2ca1
L_2d3d:
        mov     eax, dword ptr [ebp + 0x14]
        dec     dword ptr [ebp - 4]
        mov     ebx, dword ptr [ebp + 0xc]
        test    al, 8
        jnz     L_2d5a
        test    ebx, ebx
        jz      L_2d54
        mov     eax, dword ptr [ebp + 8]
        mov     dword ptr [ebp - 4], eax
L_2d54:
        and     dword ptr [ebp - 8], 0
        jmp     L_2da5
L_2d5a:
        test    al, 4
        mov     esi, 0x7fffffff
        jnz     L_2d7e
        test    al, 1
        jnz     L_2da5
        and     eax, 2
        jz      L_2d75
        cmp     dword ptr [ebp - 8], 0x80000000
        ja      L_2d7e
L_2d75:
        test    eax, eax
        jnz     L_2da5
        cmp     dword ptr [ebp - 8], esi
        jbe     L_2da5
L_2d7e:
        call    FUN_10004580
        test    byte ptr [ebp + 0x14], 1
        mov     dword ptr [eax], 0x22
        jz      L_2d95
        or      dword ptr [ebp - 8], 0xffffffff
        jmp     L_2da5
L_2d95:
        mov     eax, dword ptr [ebp + 0x14]
        and     al, 2
        neg     al
        sbb     eax, eax
        neg     eax
        add     eax, esi
        mov     dword ptr [ebp - 8], eax
L_2da5:
        test    ebx, ebx
        jz      L_2dae
        mov     eax, dword ptr [ebp - 4]
        mov     dword ptr [ebx], eax
L_2dae:
        test    byte ptr [ebp + 0x14], 2
        jz      L_2dbc
        mov     eax, dword ptr [ebp - 8]
        neg     eax
        mov     dword ptr [ebp - 8], eax
L_2dbc:
        mov     eax, dword ptr [ebp - 8]
        jmp     L_2dcc
L_2dc1:
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jz      L_2dca
        mov     dword ptr [eax], edi
L_2dca:
        xor     eax, eax
L_2dcc:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
