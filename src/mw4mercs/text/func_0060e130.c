/*
 * FUN_0060e130 (324 B) — Per-element flag update loop.
 *
 * Iterates over a count (from param_1[0x1c]), calls FUN_0060e280 for
 * each index, and sets/clears bits 0..5 of the returned object's
 * 0x1a0 field based on six per-element signed values.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0060e280(void);

__declspec(naked) void FUN_0060e130(void)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [eax + 0x4]
        push    ebx
        mov     ebx, dword ptr [eax + 0x14]
        push    ebp
        mov     ebp, dword ptr [eax + 0x18]
        push    esi
        mov     esi, dword ptr [eax + 0xc]
        push    edi
        mov     edi, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x28], eax
        mov     eax, dword ptr [eax]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x20], eax
        jle     L_60E265
        sub     edx, ecx
        sub     edi, ecx
        sub     esi, ecx
        sub     ebx, ecx
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0x1c], edi
        sub     ebp, ecx
L_60E184:
        mov     edi, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        push    edi
        call    FUN_0060e280
        test    eax, eax
        jz      L_60E249
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x28]
        cmp     dword ptr [edx + ecx], 0x0
        mov     edx, dword ptr [eax + 0x1a0]
        jle     L_60E1B3
        or      edx, 0x1
        jmp     L_60E1B6
L_60E1B3:
        and     edx, 0xfffffffe
L_60E1B6:
        mov     dword ptr [eax + 0x1a0], edx
        cmp     dword ptr [ecx], 0x0
        mov     edx, dword ptr [eax + 0x1a0]
        jle     L_60E1CC
        or      edx, 0x2
        jmp     L_60E1CF
L_60E1CC:
        and     edx, 0xfffffffd
L_60E1CF:
        mov     dword ptr [eax + 0x1a0], edx
        cmp     dword ptr [esi + ecx], 0x0
        mov     edx, dword ptr [eax + 0x1a0]
        jle     L_60E1E6
        or      edx, 0x4
        jmp     L_60E1E9
L_60E1E6:
        and     edx, 0xfffffffb
L_60E1E9:
        mov     dword ptr [eax + 0x1a0], edx
        mov     edx, dword ptr [esp + 0x1c]
        cmp     dword ptr [edx + ecx], 0x0
        mov     edx, dword ptr [eax + 0x1a0]
        jle     L_60E204
        or      edx, 0x8
        jmp     L_60E207
L_60E204:
        and     edx, 0xfffffff7
L_60E207:
        mov     dword ptr [eax + 0x1a0], edx
        cmp     dword ptr [ebx + ecx], 0x0
        mov     edx, dword ptr [eax + 0x1a0]
        jle     L_60E21E
        or      edx, 0x10
        jmp     L_60E221
L_60E21E:
        and     edx, 0xffffffef
L_60E221:
        mov     dword ptr [eax + 0x1a0], edx
        cmp     dword ptr [ecx + ebp], 0x0
        mov     edx, dword ptr [eax + 0x1a0]
        jle     L_60E23E
        or      edx, 0x20
        mov     dword ptr [eax + 0x1a0], edx
        jmp     L_60E24D
L_60E23E:
        and     edx, 0xffffffdf
        mov     dword ptr [eax + 0x1a0], edx
        jmp     L_60E24D
L_60E249:
        mov     ecx, dword ptr [esp + 0x28]
L_60E24D:
        mov     eax, dword ptr [esp + 0x20]
        inc     edi
        add     ecx, 0x4
        cmp     edi, eax
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x28], ecx
        jl      L_60E184
L_60E265:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x14
        ret     8
    }
}
