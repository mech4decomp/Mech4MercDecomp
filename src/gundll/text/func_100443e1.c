/*
 * FUN_100443e1 (199 B) - __cdecl. Bit-packing loop: copies 3 dwords via
 * movsd, calls FUN_10044386/FUN_10044328, then normalizes a 96-bit value
 * (shifts) and writes a 16-bit exponent.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10044386(void); /* __cdecl(1) rel32 call */
extern void __cdecl FUN_10044328(void); /* __cdecl(2) rel32 call */

__declspec(naked) void __cdecl FUN_100443e1(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        mov     eax, dword ptr [ebp + 0xc]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        xor     edx, edx
        cmp     eax, edx
        push    esi
        mov     dword ptr [ebp - 4], 0x404e
        mov     dword ptr [ebx], edx
        mov     dword ptr [ebx + 4], edx
        mov     dword ptr [ebx + 8], edx
        jbe     L_4455
        push    edi
        mov     dword ptr [ebp + 0x10], eax
L_4408:
        mov     esi, ebx
        lea     edi, [ebp - 0x10]
        movsd
        movsd
        push    ebx
        movsd
        call    FUN_10044386
        push    ebx
        call    FUN_10044386
        lea     eax, [ebp - 0x10]
        push    eax
        push    ebx
        call    FUN_10044328
        push    ebx
        call    FUN_10044386
        mov     eax, dword ptr [ebp + 8]
        and     dword ptr [ebp - 0xc], 0
        and     dword ptr [ebp - 0x8], 0
        movsx   eax, byte ptr [eax]
        mov     dword ptr [ebp - 0x10], eax
        lea     eax, [ebp - 0x10]
        push    eax
        push    ebx
        call    FUN_10044328
        add     esp, 0x1c
        inc     dword ptr [ebp + 8]
        dec     dword ptr [ebp + 0x10]
        jnz     L_4408
        xor     edx, edx
        pop     edi
L_4455:
        cmp     dword ptr [ebx + 8], edx
        jnz     L_4482
        mov     ecx, dword ptr [ebx + 4]
        mov     eax, ecx
        shr     eax, 0x10
        mov     dword ptr [ebx + 8], eax
        mov     eax, dword ptr [ebx]
        mov     esi, eax
        shr     esi, 0x10
        shl     ecx, 0x10
        or      esi, ecx
        shl     eax, 0x10
        add     dword ptr [ebp - 4], 0xfff0
        mov     dword ptr [ebx + 4], esi
        mov     dword ptr [ebx], eax
        jmp     L_4455
L_4482:
        mov     esi, 0x8000
L_4487:
        test    dword ptr [ebx + 8], esi
        jnz     L_449c
        push    ebx
        call    FUN_10044386
        add     dword ptr [ebp - 4], 0xffff
        pop     ecx
        jmp     L_4487
L_449c:
        mov     ax, word ptr [ebp - 4]
        pop     esi
        mov     word ptr [ebx + 0xa], ax
        pop     ebx
        leave
        ret
    }
}
