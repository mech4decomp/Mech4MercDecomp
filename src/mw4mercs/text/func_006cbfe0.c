/*
 * FUN_006cbfe0 (621 B) — __stdcall script/event dispatcher. Dispatches an
 * event (param_2) to a script object (param_1), setting up global script
 * state (DAT_0082f33c..f344), running the script via FUN_006baf60, and
 * recursing into child 'h'-type panes for events 0x10/0x13.
 * __stdcall, RET 0x8 (2 args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_0082f3d4;
extern char g_0082f391;
extern unsigned int g_0082f3ac;
extern unsigned int g_0082f324;
extern unsigned int g_0082f344;
extern unsigned int g_0082f340;
extern unsigned int g_0082f33c;
extern unsigned int g_0082f338;

extern void __cdecl FUN_0072ce60(void);
extern void __cdecl FUN_0072c090(void);
extern void __cdecl FUN_0072be60(void);
extern void __cdecl FUN_00704a80(void);
extern void __cdecl FUN_006ce300(void);
extern void __cdecl FUN_006baf60(void);
extern void __cdecl FUN_006c02f0(void);
extern void __cdecl FUN_006ce3b0(void);
extern void __cdecl FUN_006cbfe0(void);

__declspec(naked) void FUN_006cbfe0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        test    edi, edi
        jz      L_c0f8
        mov     eax, dword ptr [edi + 0x28]
        test    eax, eax
        jz      L_c0f8
        mov     esi, dword ptr [esp + 0x18]
        cmp     esi, 0x3
        mov     ebp, dword ptr [eax + 0x4]
        mov     byte ptr [esp + 0x14], 0x0
        jz      L_c05f
        cmp     esi, 0x5
        jnz     L_c01b
        cmp     dword ptr [g_0082f3d4], edi
        jz      L_c05f
        jmp     L_c08b
L_c01b:
        cmp     esi, 0x2
        jz      L_c03b
        cmp     esi, 0x4
        jnz     L_c02f
        cmp     dword ptr [g_0082f3d4], edi
        jz      L_c03b
        jmp     L_c08b
L_c02f:
        cmp     esi, 0x8
        jnz     L_c08b
        call    FUN_0072ce60
        jmp     L_c08b
L_c03b:
        mov     ebx, dword ptr [edi + 0x34]
        mov     eax, ebx
        shr     eax, 0x4
        and     eax, 0xffffff01
        push    eax
        call    FUN_0072c090
        shr     ebx, 0x5
        and     ebx, 0xffffff01
        push    ebx
        call    FUN_0072be60
        jmp     L_c08b
L_c05f:
        push    0x0
        push    0x0
        push    0x0
        push    0x2a
        call    FUN_00704a80
        mov     ecx, dword ptr [edi + 0x34]
        and     eax, 0x1
        shl     eax, 0x5
        and     ecx, 0xffffffdf
        or      eax, ecx
        push    0x0
        mov     dword ptr [edi + 0x34], eax
        call    FUN_0072be60
        push    0x0
        call    FUN_0072c090
L_c08b:
        test    ebp, ebp
        jz      L_c0a2
L_c08f:
        cmp     esi, dword ptr [ebp + 0x4]
        jz      L_c09d
        mov     ebp, dword ptr [ebp]
        test    ebp, ebp
        jnz     L_c08f
        jmp     L_c0a2
L_c09d:
        mov     byte ptr [esp + 0x14], 0x1
L_c0a2:
        mov     al, byte ptr [esp + 0x14]
        test    al, al
        mov     byte ptr [g_0082f391], 0x1
        jnz     L_c101
        cmp     esi, 0x6
        jz      L_c0c0
        cmp     esi, 0x7
        jle     L_c0d5
        cmp     esi, 0xd
        jg      L_c0d5
L_c0c0:
        mov     eax, dword ptr [g_0082f3ac]
        mov     edx, 0x1
        mov     ecx, esi
        shl     edx, cl
        or      eax, edx
        mov     dword ptr [g_0082f3ac], eax
L_c0d5:
        mov     ecx, esi
        mov     eax, 0x1
        shl     eax, cl
        mov     ecx, dword ptr [edi + 0x38]
        or      ecx, eax
        cmp     esi, 0x10
        mov     dword ptr [edi + 0x38], ecx
        jz      L_c193
        cmp     esi, 0x13
        jz      L_c18e
L_c0f8:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x8
L_c101:
        call    FUN_006ce300
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [edi + 0x8]
        push    0x0
        push    0x0
        push    0x1
        mov     dword ptr [g_0082f324], ecx
        mov     dword ptr [g_0082f344], 0x0
        mov     dword ptr [g_0082f340], esi
        mov     dword ptr [g_0082f33c], edi
        mov     dword ptr [g_0082f338], edx
        call    FUN_006baf60
        mov     eax, dword ptr [g_0082f344]
        test    eax, eax
        jz      L_c159
L_c142:
        mov     ecx, dword ptr [eax]
        push    eax
        mov     dword ptr [g_0082f344], ecx
        call    FUN_006c02f0
        mov     eax, dword ptr [g_0082f344]
        test    eax, eax
        jnz     L_c142
L_c159:
        call    FUN_006ce3b0
        cmp     esi, 0x6
        jz      L_c16d
        cmp     esi, 0x7
        jle     L_c18e
        cmp     esi, 0xd
        jg      L_c18e
L_c16d:
        mov     edx, dword ptr [g_0082f3ac]
        xor     eax, eax
        mov     al, byte ptr [g_0082f391]
        mov     ecx, esi
        shl     eax, cl
        mov     ecx, dword ptr [edi + 0x38]
        or      edx, eax
        or      ecx, eax
        mov     dword ptr [g_0082f3ac], edx
        mov     dword ptr [edi + 0x38], ecx
L_c18e:
        cmp     esi, 0x10
        jnz     L_c1ea
L_c193:
        mov     edi, dword ptr [edi + 0x4]
        test    edi, edi
        jz      L_c241
        mov     bl, 0x68
L_c1a0:
        cmp     byte ptr [edi + 0xa], bl
        jnz     L_c1d8
        xor     ebp, ebp
        mov     bp, word ptr [edi + 0x8]
        test    bp, bp
        jnz     L_c1bd
        mov     edx, dword ptr [edi + 0x4]
        push    0x10
        push    edx
        call    FUN_006cbfe0
        jmp     L_c1d8
L_c1bd:
        and     ebp, 0xffff
        jle     L_c1d8
        mov     esi, dword ptr [edi + 0x4]
L_c1c8:
        mov     eax, dword ptr [esi]
        push    0x10
        push    eax
        call    FUN_006cbfe0
        add     esi, 0x4
        dec     ebp
        jnz     L_c1c8
L_c1d8:
        mov     edi, dword ptr [edi]
        test    edi, edi
        jnz     L_c1a0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        ret     0x8
L_c1ea:
        cmp     esi, 0x13
        jnz     L_c241
        mov     edi, dword ptr [edi + 0x4]
        test    edi, edi
        jz      L_c241
        mov     bl, 0x68
L_c1f8:
        cmp     byte ptr [edi + 0xa], bl
        jnz     L_c23b
        mov     ax, word ptr [edi + 0x8]
        test    ax, ax
        jnz     L_c219
        mov     eax, dword ptr [edi + 0x4]
        test    byte ptr [eax + 0x34], 0x2
        jz      L_c23b
        push    0x7
        push    eax
        call    FUN_006cbfe0
        jmp     L_c23b
L_c219:
        and     eax, 0xffff
        jle     L_c23b
        mov     esi, dword ptr [edi + 0x4]
        mov     ebp, eax
L_c225:
        mov     eax, dword ptr [esi]
        test    byte ptr [eax + 0x34], 0x2
        jz      L_c235
        push    0x7
        push    eax
        call    FUN_006cbfe0
L_c235:
        add     esi, 0x4
        dec     ebp
        jnz     L_c225
L_c23b:
        mov     edi, dword ptr [edi]
        test    edi, edi
        jnz     L_c1f8
L_c241:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        ret     0x8
    }
}
