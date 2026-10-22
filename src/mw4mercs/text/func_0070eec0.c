/*
 * FUN_0070eec0 (424 B) — Debugger/rasterizer/library driver lookup. Strips
 * a known prefix from the path, walks a driver linked list matching names
 * (_strnicmp/_stricmp), then dispatches on the operation code via a
 * jump table to call the driver's handler.
 *
 * __cdecl, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aae28;
extern int g_8aae18;
extern int g_8aae1c;
extern int g_8aae20;
extern int *g_76b2b0;   /* IAT: _strnicmp */
extern int *g_76b2ac;   /* IAT: _stricmp */

__declspec(naked) void __stdcall FUN_0070eec0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_8aae28]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        mov     ebp, dword ptr [eax]
        push    esi
        mov     esi, dword ptr [g_76b2b0]
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a1cec
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    0x7a1cec
        push    ebx
        mov     byte ptr [esp + 0x1f], 0x0
        call    esi
        add     esp, 0xc
        test    eax, eax
        jnz     L70EF11
        mov     ebp, dword ptr [g_8aae18]
        or      ecx, 0xffffffff
        mov     edi, 0x7a1cec
        repne   scasb
        not     ecx
        dec     ecx
        add     ebx, ecx
        jmp     L70EF7B
    L70EF11:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a1ce0
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    0x7a1ce0
        push    ebx
        call    esi
        add     esp, 0xc
        test    eax, eax
        jnz     L70EF47
        mov     ebp, dword ptr [g_8aae1c]
        or      ecx, 0xffffffff
        mov     edi, 0x7a1ce0
        repne   scasb
        not     ecx
        dec     ecx
        add     ebx, ecx
        jmp     L70EF7B
    L70EF47:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a1cd4
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    0x7a1cd4
        push    ebx
        call    esi
        add     esp, 0xc
        test    eax, eax
        jnz     L70EF7B
        mov     ebp, dword ptr [g_8aae20]
        or      ecx, 0xffffffff
        mov     edi, 0x7a1cd4
        repne   scasb
        not     ecx
        dec     ecx
        add     ebx, ecx
    L70EF7B:
        test    ebp, ebp
        jz      L70F047
        mov     edi, dword ptr [g_76b2ac]
    L70EF89:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L70EFD4
        mov     esi, dword ptr [ebp + 0x4]
        test    esi, esi
        jz      L70F011
    L70EF98:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L70EFC8
        mov     ecx, dword ptr [esi + 0x18]
        push    ecx
        push    ebx
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L70EFB7
        mov     ebp, esi
        mov     byte ptr [esp + 0x13], 0x1
        jmp     L70EFB9
    L70EFB7:
        mov     esi, dword ptr [esi]
    L70EFB9:
        test    esi, esi
        jnz     L70EF98
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L70EFC8
    L70EFC5:
        mov     ebp, dword ptr [ebp]
    L70EFC8:
        test    ebp, ebp
        jnz     L70EF89
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      L70F047
    L70EFD4:
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, 0x3
        ja      L70F047
        __emit 0xFF   /* jmp dword ptr [eax*4+0x70f068]: MSVC6 re-bases jump-table dispatch via EBX */
        __emit 0x24
        __emit 0x85
        __emit 0x68
        __emit 0xF0
        __emit 0x70
        __emit 0x00
    L70EFE4:
        mov     eax, dword ptr [ebp + 0x8]
        test    eax, eax
        jz      L70EFF7
        mov     ecx, dword ptr [ebp + 0x18]
        push    0x1
        push    ecx
        call    eax
        test    eax, eax
        jnz     L70F004
    L70EFF7:
        mov     ebp, dword ptr [ebp + 0x14]
        test    ebp, ebp
        jz      L70F047
    L70EFFA:
        call    ebp
        test    al, al
        jz      L70F047
    L70F004:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        pop     ecx
        ret     0x8
    L70F011:
        mov     edx, dword ptr [ebp + 0x18]
        push    edx
        push    ebx
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L70EFC5
        mov     byte ptr [esp + 0x13], 0x1
        jmp     L70EFC8
    L70F026:
        mov     eax, dword ptr [ebp + 0x8]
        test    eax, eax
        jz      L70F039
        mov     edx, dword ptr [ebp + 0x18]
        push    0x2
        push    edx
        call    eax
        test    eax, eax
        jnz     L70F004
    L70F039:
        mov     ebp, dword ptr [ebp + 0x10]
        __emit 0xEB   /* jmp L70EFFA: MSVC6 miscomputes backward rel-offset by 4 (call-reloc between branch and target) */
        __emit 0xBC
    L70F03E:
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jz      L70F051
        call    eax
    L70F047:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x8
    L70F051:
        mov     eax, dword ptr [ebp + 0x8]
        test    eax, eax
        jz      L70F047
        mov     ecx, dword ptr [ebp + 0x18]
        push    0x3
        push    ecx
        call    eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
