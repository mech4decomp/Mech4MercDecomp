/*
 * FUN_00743610 (371 B) — __stdcall (RET 0x24, 9 params). Builds a local
 * buffer via FUN_007353f0, then runs a nested loop computing per-pixel
 * deltas into an output buffer, then calls FUN_00735440.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007353f0(void *a, void *b, void *c, int d, void *e);
extern void __cdecl FUN_00735440(void *a, void *b);

__declspec(naked) void __stdcall FUN_00743610(void)
{
    __asm {
        sub     esp, 0xa0
        mov     ecx, dword ptr [esp + 0xa8]
        push    edi
        push    0x0
        push    0x821
        lea     eax, [esp + 0x30]
        push    eax
        push    0x0
        push    ecx
        mov     dword ptr [esp + 0x3c], 0x7c
        call    FUN_007353f0
        mov     eax, dword ptr [esp + 0x38]
        mov     edx, dword ptr [esp + 0xc8]
        mov     edi, dword ptr [esp + 0x4c]
        sar     eax, 0x1
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [esp + 0xb4]
        xor     ecx, ecx
        shr     eax, 0x2
        test    edx, edx
        mov     dword ptr [esp + 0xc], edi
        mov     dword ptr [esp + 0x18], ecx
        jbe     L_4376a
        push    ebx
        mov     ebx, dword ptr [esp + 0xb4]
        push    ebp
        shl     eax, 0x2
        push    esi
        mov     dword ptr [esp + 0x28], eax
        jmp     L_43682
L_4367e:
        mov     eax, dword ptr [esp + 0x28]
L_43682:
        lea     esi, [eax + ebx]
        mov     edx, ebx
        sub     edx, eax
        mov     eax, dword ptr [esp + 0xd4]
        dec     eax
        cmp     ecx, eax
        mov     dword ptr [esp + 0x30], esi
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x14], edx
        jnz     L_436a5
        mov     dword ptr [esp + 0x10], ebx
L_436a5:
        test    ecx, ecx
        jnz     L_436af
        mov     edx, ebx
        mov     dword ptr [esp + 0x14], edx
L_436af:
        mov     ebp, dword ptr [esp + 0xd0]
        xor     eax, eax
        test    ebp, ebp
        mov     dword ptr [esp + 0x20], eax
        jbe     L_43746
        add     ebx, -0x4
        mov     ecx, ebp
L_436c9:
        mov     esi, dword ptr [ebx + 0x4]
        dec     ecx
        cmp     eax, ecx
        mov     ebp, esi
        jz      L_436d6
        mov     ebp, dword ptr [ebx + 0x8]
L_436d6:
        test    eax, eax
        mov     dword ptr [esp + 0x1c], ebp
        mov     ecx, esi
        jz      L_436e2
        mov     ecx, dword ptr [ebx]
L_436e2:
        mov     edx, dword ptr [edx]
        mov     eax, ecx
        sub     eax, ebp
        mov     ebp, dword ptr [esp + 0x10]
        sub     edx, dword ptr [ebp]
        cmp     esi, ecx
        jge     L_43707
        mov     ebp, dword ptr [esp + 0x1c]
        cmp     esi, ebp
        jge     L_43707
        sub     ecx, esi
        mov     eax, ecx
        sub     esi, ebp
        cmp     eax, esi
        jge     L_43707
        mov     eax, esi
L_43707:
        mov     ecx, dword ptr [esp + 0x10]
        mov     byte ptr [edi], al
        mov     eax, dword ptr [esp + 0x20]
        inc     edi
        mov     byte ptr [edi], dl
        mov     edx, dword ptr [esp + 0x14]
        add     ecx, 0x4
        add     edx, 0x4
        inc     edi
        add     ebx, 0x4
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0xd0]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x20], eax
        jc      L_436c9
        mov     edi, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x24]
        mov     esi, dword ptr [esp + 0x30]
L_43746:
        mov     edx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0xd4]
        inc     ecx
        cmp     ecx, eax
        lea     edi, [edi + edx*0x2]
        mov     ebx, esi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x24], ecx
        jc      L_4367e
        pop     esi
        pop     ebp
        pop     ebx
L_4376a:
        mov     eax, dword ptr [esp + 0xac]
        push    0x0
        push    eax
        call    FUN_00735440
        pop     edi
        add     esp, 0xa0
        ret     0x24
    }
}
