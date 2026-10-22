/*
 * FUN_5e011bf0 (448 B) — __thiscall mutex/registry helper. Releases the
 * objects at this+0x18 and this+0x1c, copies a 0x6c/0x7c-byte surface
 * descriptor from the input, patches flags, and calls a vtable method.
 *
 * __thiscall (this in ECX), RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e00fff0(void);

__declspec(naked) int __stdcall FUN_5e011bf0(void)
{
    __asm {
        sub     esp, 0x6c
        push    ebx
        mov     ebx, ecx
        push    ebp
        push    esi
        mov     eax, dword ptr [ebx + 0x18]
        lea     ebp, [ebx + 0x18]
        test    eax, eax
        push    edi
        jz      L_10
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [ebp], 0x0
    L_10:
        mov     eax, dword ptr [ebx + 0x1c]
        test    eax, eax
        jz      L_24
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [ebx + 0x1c], 0x0
    L_24:
        mov     ecx, 0x1a
        xor     eax, eax
        lea     edi, [esp + 0x14]
        mov     dword ptr [esp + 0x10], 0x6c
        rep     stosd
        mov     eax, dword ptr [esp + 0x84]
        mov     ecx, dword ptr [eax]
        cmp     ecx, 0x7c
        jnz     L_cd5
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [eax + 0x18]
        mov     dword ptr [esp + 0x2c], ecx
        mov     ecx, dword ptr [eax + 0x24]
        mov     dword ptr [esp + 0x28], edx
        mov     edx, dword ptr [eax + 0x20]
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [eax + 0x28]
        mov     dword ptr [esp + 0x3c], ecx
        mov     ecx, dword ptr [eax + 0x34]
        mov     dword ptr [esp + 0x38], edx
        mov     edx, dword ptr [eax + 0x30]
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, dword ptr [eax + 0x3c]
        mov     dword ptr [esp + 0x40], edx
        mov     edx, dword ptr [eax + 0x38]
        mov     dword ptr [esp + 0x4c], ecx
        mov     ecx, dword ptr [eax + 0x44]
        mov     dword ptr [esp + 0x48], edx
        mov     edx, dword ptr [eax + 0x40]
        mov     dword ptr [esp + 0x54], ecx
        lea     esi, [eax + 0x48]
        mov     eax, dword ptr [eax + 0x68]
        mov     ecx, 0x8
        lea     edi, [esp + 0x58]
        mov     dword ptr [esp + 0x50], edx
        rep     movsd
        jmp     L_cef
    L_cd5:
        cmp     ecx, 0x6c
        jnz     L_da1
        mov     ecx, 0x1b
        mov     esi, eax
        lea     edi, [esp + 0x10]
        rep     movsd
        mov     eax, dword ptr [esp + 0x78]
    L_cef:
        test    eax, 0x20000
        jz      L_d3f
        mov     edx, dword ptr [esp + 0x5c]
        mov     cl, byte ptr [ebx + 0x28]
        and     eax, 0xfffdbfff
        and     dh, 0xfb
        or      eax, 0x840
        or      edx, 0x40
        or      cl, 0x1
        mov     dword ptr [esp + 0x58], 0x20
        mov     dword ptr [esp + 0x5c], edx
        mov     dword ptr [esp + 0x64], 0x10
        mov     dword ptr [esp + 0x68], 0x7c00
        mov     dword ptr [esp + 0x6c], 0x3e0
        mov     dword ptr [esp + 0x70], 0x1f
        mov     byte ptr [ebx + 0x28], cl
    L_d3f:
        /* __emit: MSVC6 rejects test ah, imm8 */
        test ah, 0x10
        jz      L_d55
        /* __emit: MSVC6 rejects test ah, imm8 */
        test ah, 0x40
        jz      L_d55
        and     eax, 0xcfffbfff
        or      eax, 0x4000800
        jmp     L_d5d
    L_d55:
        and     eax, 0xcfffbfff
        or      ah, 0x8
    L_d5d:
        mov     dword ptr [esp + 0x78], eax
        mov     eax, dword ptr [esp + 0x80]
        mov     dword ptr [ebx + 0x1c], eax
        push    0x0
        mov     eax, dword ptr [eax + 0x20]
        lea     edx, [esp + 0x14]
        push    ebp
        push    edx
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x18]
        mov     esi, eax
        test    esi, esi
        jge     L_d8c
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x6c
        ret     0x8
    L_d8c:
        mov     ecx, dword ptr [ebx + 0x1c]
        push    ebx
        call    FUN_5e00fff0
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x6c
        ret     0x8
    L_da1:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80070057
        pop     ebx
        add     esp, 0x6c
        ret     0x8
    }
}
