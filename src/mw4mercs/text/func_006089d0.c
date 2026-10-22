/*
 * FUN_006089D0 (526 B) — __stdcall (5 stack params), RET 0x14. Switch on
 * *param_5 (jump table at 0x608be0) to set filter bounds, then iterates a
 * collection (FUN_00416cc0) copying matching entries into output arrays.
 * Uses FUN_00416bc0/00416cc0/00416c60 (collection iteration).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void __stdcall FUN_006089d0(void)
{
    __asm {
        sub     esp, 0x34
        mov     eax, dword ptr [esp + 0x48]
        mov     eax, dword ptr [eax]
        xor     ecx, ecx
        dec     eax
        cmp     eax, 0xa
        __emit 0x89   /* __emit: MSVC6 drops 00 disp on mov [esp],ecx (89 0C 24); ref needs 89 4C 24 00 */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 0x4], ecx
        mov     dword ptr [esp + 0x8], ecx
        ja      L_8aa2
        __emit 0xFF   /* __emit: MSVC6 re-bases jmp [eax*4+imm32] via EBX; ref needs FF 24 85 */
        __emit 0x24
        __emit 0x85
        __emit 0xE0
        __emit 0x8B
        __emit 0x60
        __emit 0x00
        mov     dword ptr [esp + 0x8], 0x4
        __emit 0x89   /* __emit: MSVC6 drops 00 disp on mov [esp],ecx */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 0x4], 0x186a0
        jmp     L_8aa2
        __emit 0x89   /* __emit: MSVC6 drops 00 disp on mov [esp],ecx */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 0x4], 0x7b
        jmp     L_8aa2
        __emit 0x89   /* __emit: MSVC6 drops 00 disp on mov [esp],ecx */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 0x4], 0x12
        jmp     L_8aa2
        __emit 0xC7   /* __emit: MSVC6 drops 00 disp on mov [esp],imm */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x64
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [esp + 0x4], 0x7b
        jmp     L_8aa2
        __emit 0xC7   /* __emit: MSVC6 drops 00 disp on mov [esp],imm */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x33
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [esp + 0x4], 0x4e
        jmp     L_8aa2
        mov     dword ptr [esp + 0x8], 0x4
        jmp     L_8a80
        mov     dword ptr [esp + 0x8], ecx
        jmp     L_8a80
        mov     dword ptr [esp + 0x8], 0x1
        jmp     L_8a80
        mov     dword ptr [esp + 0x8], 0x2
        jmp     L_8a80
        mov     dword ptr [esp + 0x8], 0x3
L_8a80:
        __emit 0xC7   /* __emit: MSVC6 drops 00 disp on mov [esp],imm */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x96
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [esp + 0x4], 0xc7
        jmp     L_8aa2
        __emit 0xC7   /* __emit: MSVC6 drops 00 disp on mov [esp],imm */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0xC8
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [esp + 0x4], 0xf4240
L_8aa2:
        mov     eax, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax + 0x14]
        push    ebx
        mov     ebx, dword ptr [eax + 0x1c]
        push    ebp
        mov     ebp, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [eax + 0x18]
        push    esi
        mov     esi, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x44]
        push    edi
        mov     edi, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [eax + 0x20]
        mov     eax, dword ptr [eax + 0x24]
        push    ecx
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x2c], edx
        mov     dword ptr [esp + 0x30], eax
        call    FUN_00416bc0
        xor     eax, eax
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x30], 0x78bf24
        mov     dword ptr [esp + 0x58], eax
        mov     dword ptr [esp + 0x50], eax
        call    FUN_00416cc0
        test    eax, eax
        jz      L_8bbc
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, esi
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [esp + 0x20]
        sub     ecx, esi
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x24]
        sub     edi, esi
        sub     ebx, esi
        sub     ebp, esi
        sub     ecx, esi
        mov     dword ptr [esp + 0x24], ecx
L_8b2e:
        mov     ecx, dword ptr [eax + 0x10]
        cmp     ecx, dword ptr [esp + 0x10]
        jl      L_8bab
        cmp     ecx, dword ptr [esp + 0x14]
        jg      L_8bab
        cmp     ecx, 0x96
        jl      L_8b6d
        cmp     ecx, 0xc8
        jge     L_8b6d
        mov     edx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [edx + ecx*0x4 + 0xfffffda8]
        mov     dword ptr [esp + 0x50], edx
        jge     L_8b6d
        mov     edx, dword ptr [esp + 0x18]
        cmp     dword ptr [esp + 0x50], edx
        jz      L_8b6d
        cmp     edx, 0x4
        jnz     L_8bab
L_8b6d:
        fld     dword ptr [eax + 0x18]
        mov     edx, dword ptr [esp + 0x48]
        fstp    dword ptr [esi]
        fld     dword ptr [eax + 0x20]
        mov     dword ptr [edi + esi*0x1], ecx
        mov     ecx, dword ptr [eax + 0x30]
        fstp    dword ptr [esi + ebp*0x1]
        fld     dword ptr [eax + 0x1c]
        mov     dword ptr [ebx + esi*0x1], ecx
        mov     ecx, dword ptr [esp + 0x20]
        fstp    dword ptr [edx + esi*0x1]
        fld     dword ptr [eax + 0x24]
        mov     edx, dword ptr [esp + 0x24]
        fstp    dword ptr [ecx + esi*0x1]
        mov     ecx, dword ptr [esp + 0x58]
        fld     dword ptr [eax + 0x28]
        inc     ecx
        fstp    dword ptr [edx + esi*0x1]
        mov     dword ptr [esp + 0x58], ecx
        add     esi, 0x4
L_8bab:
        lea     ecx, [esp + 0x30]
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_8b2e
L_8bbc:
        mov     eax, dword ptr [esp + 0x58]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [ecx], eax
        lea     ecx, [esp + 0x30]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x34
        ret     0x14
    }
}
