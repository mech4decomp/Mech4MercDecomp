/*
 * FUN_10041f09 (119 B) — __cdecl.
 * Shared dispatcher: builds a zero-padded string from a source buffer,
 * performs rounding carry, and either bumps a counter or calls FUN_1003ec80.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003c5f0(void);
extern void __cdecl FUN_1003ec80(void);

__declspec(naked) void __cdecl FUN_10041f09(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x10]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [edx + 0xc]
        push    edi
        lea     edi, [esi + 0x1]
        mov     byte ptr [esi], 0x30
        test    ebx, ebx
        mov     eax, edi
        jle     L_46
        mov     dword ptr [ebp + 0x8], ebx
        xor     ebx, ebx
    L_2c:
        mov     dl, byte ptr [ecx]
        test    dl, dl
        jz      L_38
        movsx   edx, dl
        inc     ecx
        jmp     L_3b
    L_38:
        push    0x30
        pop     edx
    L_3b:
        mov     byte ptr [eax], dl
        inc     eax
        dec     dword ptr [ebp + 0x8]
        jnz     L_2c
        mov     edx, dword ptr [ebp + 0x10]
    L_46:
        and     byte ptr [eax], 0
        test    ebx, ebx
        jl      L_5f
        cmp     byte ptr [ecx], 0x35
        jl      L_5f
    L_52:
        dec     eax
        cmp     byte ptr [eax], 0x39
        jnz     L_5d
        mov     byte ptr [eax], 0x30
        jmp     L_52
    L_5d:
        inc     byte ptr [eax]
    L_5f:
        cmp     byte ptr [esi], 0x31
        jnz     L_69
        inc     dword ptr [edx + 0x4]
        jmp     L_7b
    L_69:
        push    edi
        call    FUN_1003c5f0
        inc     eax
        push    eax
        push    edi
        push    esi
        call    FUN_1003ec80
        add     esp, 0x10
    L_7b:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
