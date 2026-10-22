/*
 * FUN_004d9fa0 (374 B) — __thiscall: dispatch based on combined flag bits
 * (0x180-masked fields). Handles several modes, asserting on unexpected
 * combinations, and forwards to sub-objects via vtable dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(int);
extern void __cdecl FUN_004154d0(int);
extern void __cdecl FUN_004179b0(int);
extern void __cdecl FUN_00415510(int);

__declspec(naked) void FUN_004d9fa0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xd8]
        push    edi
        mov     edi, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [edi + 0x4]
        cmp     dword ptr [ecx], 0x234
        jnz     L_9fbf
        mov     edx, dword ptr [edi + 0x10]
        mov     edi, dword ptr [edx + 0x10]
L_9fbf:
        mov     eax, dword ptr [edi + 0x14c]
        mov     ecx, dword ptr [esi + 0x10]
        and     eax, 0x180
        shl     eax, 0x2
        and     ecx, 0x180
        or      eax, ecx
        cmp     eax, 0x280
        jg      L_a07c
        jz      L_a12e
        cmp     eax, 0x100
        jg      L_a055
        jz      L_a039
        test    eax, eax
        jz      L_a01d
        cmp     eax, 0x80
        jnz     L_a0f0
        push    0x7733d8
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_a12e
        int     3
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
L_a01d:
        push    0x7733b8
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_a12e
        int     3
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
L_a039:
        push    0x773398
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_a12e
        int     3
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
L_a055:
        cmp     eax, 0x200
        jnz     L_a0f0
        push    0x773378
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_a12e
        int     3
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
L_a07c:
        cmp     eax, 0x480
        jg      L_a0e9
        jz      L_a0c0
        cmp     eax, 0x300
        jz      L_a12e
        cmp     eax, 0x400
        jnz     L_a0f0
        lea     edx, [edi + 0x15c]
        push    edx
        mov     ecx, esi
        call    FUN_004154d0
        push    esi
        lea     ecx, [edi + 0x16c]
        call    FUN_004179b0
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
L_a0c0:
        lea     ecx, [edi + 0x164]
        push    ecx
        mov     ecx, esi
        call    FUN_004154d0
        push    esi
        lea     ecx, [edi + 0x16c]
        call    FUN_004179b0
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
L_a0e9:
        cmp     eax, 0x500
        jz      L_a108
L_a0f0:
        push    0x773358
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_a12e
        int     3
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
L_a108:
        lea     ebx, [edi + 0x164]
        push    ebx
        mov     ecx, esi
        call    FUN_00415510
        test    al, al
        jz      L_a12e
        push    ebx
        mov     ecx, esi
        call    FUN_004154d0
        push    esi
        lea     ecx, [edi + 0x16c]
        call    FUN_004179b0
L_a12e:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
