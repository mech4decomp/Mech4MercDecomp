/*
 * FUN_00647b40 (642 B) -- __thiscall interval-tree insertion (RET 0xc).
 * Inserts a node keyed by [param_2+0x10] into an ordered tree rooted at
 * *this, maintaining parent/child links at offsets 0x4/0x8/0xc, and returns
 * the inserted/found node via *param_1. Sibling-heavy with several
 * near-identical insertion paths.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00648560(void);
extern void __cdecl FUN_00648590(void);
extern void __cdecl FUN_00648100(void);
extern void __cdecl FUN_00648260(void);
extern void __cdecl FUN_006485a0(void);
extern void __cdecl FUN_006485c0(void);
extern void __cdecl FUN_00411670(void);
extern void __cdecl FUN_004114b0(void);

extern int g_0000000c;   /* _DAT_0000000c */

__declspec(naked) void FUN_00647b40(void)
{
    __asm {
        sub     esp, 0x34
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x44]
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        cmp     ebp, dword ptr [eax + 0x8]
        push    edi
        jnz     L_cbd
        mov     ecx, dword ptr [esi + 0x4]
        test    ecx, ecx
        mov     ebx, dword ptr [esp + 0x50]
        jbe     L_bee
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [ebp + 0x10]
        cmp     ecx, edx
        jnc     L_bee
        cmp     ebp, eax
        jz      L_b9c
        test    ebp, ebp
        jnz     L_b9c
        mov     eax, edx
        cmp     ecx, eax
        jc      L_b9c
        push    ebx
        mov     ecx, esi
        call    FUN_00648560
        mov     edi, eax
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        /* __emit: mov dword ptr [0x0000000C], edi — MSVC6 rejects literal [imm32] mem-dest as C2415 */
        __emit 0x89
        __emit 0x3D
        __emit 0x0C
        __emit 0x00
        __emit 0x00
        __emit 0x00
        jnz     L_bbf
        mov     dword ptr [eax + 0xc], edi
        jmp     L_bbf
L_b9c:
        push    ebx
        mov     ecx, esi
        call    FUN_00648560
        mov     edi, eax
        mov     eax, dword ptr [esi]
        cmp     ebp, eax
        mov     dword ptr [ebp + 0x8], edi
        jnz     L_bb7
        mov     dword ptr [eax + 0x4], edi
        mov     dword ptr [eax + 0xc], edi
        jmp     L_bbf
L_bb7:
        cmp     ebp, dword ptr [eax + 0x8]
        jnz     L_bbf
        mov     dword ptr [eax + 0x8], edi
L_bbf:
        mov     dword ptr [edi + 0x4], ebp
L_bc2:
        add     eax, 0x4
        xor     ecx, ecx
        push    eax
        push    edi
        mov     dword ptr [edi + 0x8], ecx
        mov     dword ptr [edi + 0xc], ecx
        call    FUN_00411670
        mov     eax, dword ptr [esi + 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [esi + 0x4], eax
        mov     eax, dword ptr [esp + 0x48]
        mov     dword ptr [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0xc
L_bee:
        mov     edi, dword ptr [eax + 0x4]
        test    edi, edi
        mov     ebp, eax
        mov     al, 0x1
        jz      L_c13
L_bfb:
        mov     ecx, dword ptr [ebx]
        cmp     ecx, dword ptr [edi + 0x10]
        setc    al
        test    al, al
        mov     ebp, edi
        jz      L_c0c
        mov     edi, dword ptr [edi + 0x8]
        jmp     L_c0f
L_c0c:
        mov     edi, dword ptr [edi + 0xc]
L_c0f:
        test    edi, edi
        __emit 0x75   /* jnz L_bfb: MSVC6 miscomputes backward-branch disp (0xE6 vs ref 0xE8) due to call-reloc between branch and target */
        __emit 0xE8
L_c13:
        test    al, al
        mov     dword ptr [esp + 0x14], ebp
        jz      L_c5c
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    FUN_00648590
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, dword ptr [eax]
        jnz     L_c4f
        lea     edx, [esp + 0x50]
        push    edx
        push    ebx
        push    ebp
        push    edi
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x64], 0x1
        call    FUN_00648100
        push    eax
        lea     ecx, [esp + 0x34]
        jmp     L_c9a
L_c4f:
        lea     ecx, [esp + 0x14]
        push    ecx
        call    FUN_004114b0
        add     esp, 0x4
L_c5c:
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edx + 0x10]
        cmp     eax, dword ptr [ebx]
        jnc     L_c87
        lea     ecx, [esp + 0x4c]
        push    ecx
        push    ebx
        push    ebp
        push    edi
        lea     edx, [esp + 0x30]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x60], 0x1
        call    FUN_00648100
        push    eax
        lea     ecx, [esp + 0x3c]
        jmp     L_c9a
L_c87:
        lea     eax, [esp + 0x13]
        lea     ecx, [esp + 0x14]
        push    eax
        push    ecx
        mov     byte ptr [esp + 0x1b], 0x0
        lea     ecx, [esp + 0x44]
L_c9a:
        call    FUN_006485a0
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_006485c0
        mov     eax, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], edx
        pop     ebx
        add     esp, 0x34
        ret     0xc
L_cbd:
        cmp     ebp, eax
        jnz     L_d33
        mov     ebx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [esp + 0x50]
        mov     edx, dword ptr [ecx]
        mov     edi, dword ptr [ebx + 0x10]
        cmp     edi, edx
        jnc     L_d2b
        cmp     ebx, eax
        jz      L_cfa
        mov     eax, edi
        cmp     edx, eax
        jc      L_cfa
        push    ecx
        mov     ecx, esi
        call    FUN_00648560
        mov     edi, eax
        mov     eax, dword ptr [esi]
        cmp     ebx, dword ptr [eax + 0xc]
        mov     dword ptr [ebx + 0xc], edi
        jnz     L_d23
        mov     dword ptr [eax + 0xc], edi
        mov     dword ptr [edi + 0x4], ebx
        jmp     L_bc2
L_cfa:
        push    ecx
        mov     ecx, esi
        call    FUN_00648560
        mov     edi, eax
        mov     eax, dword ptr [esi]
        cmp     ebx, eax
        mov     dword ptr [ebx + 0x8], edi
        jnz     L_d1b
        mov     dword ptr [eax + 0x4], edi
        mov     dword ptr [eax + 0xc], edi
        mov     dword ptr [edi + 0x4], ebx
        jmp     L_bc2
L_d1b:
        cmp     ebx, dword ptr [eax + 0x8]
        jnz     L_d23
        mov     dword ptr [eax + 0x8], edi
L_d23:
        mov     dword ptr [edi + 0x4], ebx
        jmp     L_bc2
L_d2b:
        push    ecx
        lea     eax, [esp + 0x40]
        push    eax
        jmp     L_da9
L_d33:
        lea     edx, [esp + 0x4c]
        push    edx
        mov     dword ptr [esp + 0x50], ebp
        call    FUN_004114b0
        mov     eax, dword ptr [esp + 0x54]
        mov     edx, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [eax]
        mov     edi, dword ptr [edx + 0x10]
        add     esp, 0x4
        cmp     edi, ecx
        jnc     L_da3
        cmp     ecx, dword ptr [ebp + 0x10]
        jnc     L_da3
        mov     ecx, dword ptr [edx + 0xc]
        test    ecx, ecx
        push    eax
        jnz     L_d83
        push    edx
        push    0x0
        lea     eax, [esp + 0x5c]
        push    eax
        mov     ecx, esi
        call    FUN_00648100
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
L_d83:
        push    ebp
        push    ebp
        lea     edx, [esp + 0x5c]
        push    edx
        mov     ecx, esi
        call    FUN_00648100
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
L_da3:
        push    eax
        lea     edx, [esp + 0x40]
        push    edx
L_da9:
        mov     ecx, esi
        call    FUN_00648260
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
    }
}
