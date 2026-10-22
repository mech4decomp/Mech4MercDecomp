/*
 * FUN_5e031a97 (88 B) - binary search over an array of 8-byte records.
 * Searches [param_1 + i*8] for the key *param_3 using FUN_5e033510 as the
 * comparator; on exact match stores the record+4 into *param_3.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_5e033510(int, int);

__declspec(naked) void FUN_5e031a97(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        push    edi
        xor     ebx, ebx
        cmp     dword ptr [ebp+0xc], ebx
        push    1
        pop     eax
        jl      L1aea
    L1aa7:
        test    eax, eax
        jz      L1aea
        mov     eax, dword ptr [ebp+0xc]
        add     eax, ebx
        cdq
        sub     eax, edx
        mov     esi, eax
        mov     eax, dword ptr [ebp+0x8]
        sar     esi, 1
        push    dword ptr [eax+esi*8]
        lea     edi, [eax+esi*8]
        mov     eax, dword ptr [ebp+0x10]
        push    dword ptr [eax]
        call    FUN_5e033510
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L1ada
        mov     ecx, dword ptr [ebp+0x10]
        add     edi, 4
        mov     dword ptr [ecx], edi
        jmp     L1ae5
    L1ada:
        jge     L1ae2
        dec     esi
        mov     dword ptr [ebp+0xc], esi
        jmp     L1ae5
    L1ae2:
        lea     ebx, [esi+1]
    L1ae5:
        cmp     ebx, dword ptr [ebp+0xc]
        jle     L1aa7
    L1aea:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
