/*
 * FUN_10028bc0 (196 B) - __stdcall, RET 0x24. Validates object state, calls
 * FUN_1001c8b0, converts three short* params via FUN_10001dd0, stores results,
 * and on failure frees via FUN_10001d60.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8b0(void); /* __stdcall(3) rel32 call */
extern void __cdecl FUN_10001dd0(void); /* __stdcall(1) rel32 call */
extern void __cdecl FUN_10001d60(void); /* __cdecl(1) rel32 call */

__declspec(naked) void __stdcall FUN_10028bc0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0xc]
        push    edi
        xor     edi, edi
        test    eax, eax
        jz      L_bdd
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc112000d
        pop     ebx
        ret     0x24
L_bdd:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      L_c7d
        mov     ebp, dword ptr [esp + 0x20]
        push    ebp
        call    FUN_10001dd0
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_c09
        test    ebp, ebp
        jnz     L_c5c
L_c09:
        mov     ebp, dword ptr [esp + 0x24]
        push    ebp
        call    FUN_10001dd0
        mov     edi, eax
        test    edi, edi
        jnz     L_c1d
        test    ebp, ebp
        jnz     L_c5c
L_c1d:
        mov     ebp, dword ptr [esp + 0x28]
        push    ebp
        call    FUN_10001dd0
        mov     ecx, eax
        test    ecx, ecx
        jnz     L_c31
        test    ebp, ebp
        jnz     L_c5c
L_c31:
        mov     edx, dword ptr [esp + 0x2c]
        mov     dword ptr [esi + 0x2c], ecx
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [esi + 0x30], edx
        mov     edx, dword ptr [esp + 0x34]
        mov     dword ptr [esi + 0x28], edi
        pop     edi
        mov     dword ptr [esi + 0x24], ebx
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x34], ecx
        mov     dword ptr [esi + 0x38], edx
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x24
L_c5c:
        test    ebx, ebx
        mov     esi, 0x8007000e
        jz      L_c6e
        push    ebx
        call    FUN_10001d60
        add     esp, 4
L_c6e:
        test    edi, edi
        jz      L_c7b
        push    edi
        call    FUN_10001d60
        add     esp, 4
L_c7b:
        mov     eax, esi
L_c7d:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x24
    }
}
