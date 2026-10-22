/*
 * FUN_10001b10 (177 B) - __stdcall, RET 0xc. EBP-framed; alloca-style buffer
 * via FUN_10037940, then FUN_10002020 / FUN_10007fb0 / FUN_1000c140.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1003791a(void);   /* rel32 call */
extern void __cdecl FUN_10037940(void);   /* rel32 call */
extern void __cdecl FUN_10002020(void);   /* rel32 call */
extern void __cdecl FUN_10007fb0(void);   /* rel32 call */
extern void __cdecl FUN_1000c140(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10001b10(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x10]
        push    edi
        push    esi
        mov     dword ptr [ebp - 4], 0
        call    FUN_1003791a
        lea     ebx, [eax * 4 + 0xc]
        mov     eax, ebx
        add     eax, 3
        add     esp, 4
        and     eax, 0xfffffffc
        call    FUN_10037940
        mov     edi, esp
        test    edi, edi
        jnz     L_4b
        mov     esi, 0x8007000e
        jmp     L_a7
L_4b:
        lea     eax, [ebp + 0x10]
        push    eax
        push    ebx
        push    edi
        push    esi
        call    FUN_10002020
        mov     esi, eax
        test    esi, esi
        jl      L_a7
        mov     ecx, dword ptr [ebp + 8]
        mov     eax, dword ptr [ecx + 0x6c]
        test    eax, eax
        jnz     L_6e
        mov     esi, 0xc1120405
        jmp     L_a7
L_6e:
        mov     ecx, dword ptr [ebp + 0x10]
        lea     edx, [ebp + 0x10]
        push    edx
        push    ebx
        push    ecx
        push    edi
        push    eax
        call    FUN_10007fb0
        mov     esi, eax
        test    esi, esi
        jl      L_a7
        mov     edx, dword ptr [ebp + 0x10]
        push    edi
        push    edx
        lea     eax, [ebp - 4]
        push    eax
        call    FUN_1000c140
        mov     esi, eax
        test    esi, esi
        jl      L_a7
        mov     ecx, dword ptr [ebp - 4]
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [edx], ecx
        mov     dword ptr [ebp - 4], 0
L_a7:
        mov     eax, dword ptr [ebp - 4]
        push    eax
        call    FUN_10001d60
        add     esp, 4
        mov     eax, esi
        lea     esp, [ebp - 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
