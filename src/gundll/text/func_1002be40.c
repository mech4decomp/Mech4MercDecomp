/*
 * FUN_1002be40 (194 B) — __stdcall, RET 0xc.
 * Allocates an array of param_3 8-byte entries, copies string pointers,
 * returns 0 on success or 0x8007000e on failure.
 */

extern void __cdecl FUN_10001d50(void);   /* malloc */
extern void __cdecl FUN_1002bf10(void);
extern void __cdecl FUN_10001dd0(void);

__declspec(naked) void __stdcall FUN_1002be40(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        xor     ebx, ebx
        xor     eax, eax
        test    esi, esi
        push    edi
        jnz     L_be5d
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        mov     dword ptr [ecx], esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    L_be5d:
        lea     edi, [esi*8 + 0]
        push    edi
        call    FUN_10001d50
        mov     ebp, eax
        add     esp, 0x4
        test    ebp, ebp
        jnz     L_be8e
        mov     edi, 0x8007000e
    L_be78:
        test    ebp, ebp
        jz      L_be85
        push    esi
        push    ebp
        push    0
        call    FUN_1002bf10
    L_be85:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    L_be8e:
        mov     ecx, edi
        mov     edx, ecx
        shr     ecx, 2
        xor     eax, eax
        mov     edi, ebp
        rep     stosd
        mov     ecx, edx
        and     ecx, 3
        rep     stosb
        xor     edi, edi
        test    esi, esi
        jbe     L_bee5
    L_bea8:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, ebp
        sub     ecx, eax
        lea     esi, [eax + 0x4]
        mov     dword ptr [esp + 0x18], ecx
    L_beb7:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_becd
        push    eax
        call    FUN_10001dd0
        mov     ebx, eax
        test    ebx, ebx
        jz      L_bef4
        mov     ecx, dword ptr [esp + 0x18]
    L_becd:
        mov     eax, dword ptr [esi - 0x4]
        mov     dword ptr [ecx + esi], ebx
        mov     dword ptr [ebp + edi*8], eax
        mov     eax, dword ptr [esp + 0x1c]
        xor     ebx, ebx
        inc     edi
        add     esi, 0x8
        cmp     edi, eax
        jc      L_beb7
    L_bee5:
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        mov     dword ptr [ecx], ebp
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0xc
    L_bef4:
        mov     esi, dword ptr [esp + 0x1c]
        mov     edi, 0x8007000e
        jmp     L_be78
    }
}
