/*
 * FUN_006977c0 (145 B) — __fastcall (ECX = this), plain RET.
 *
 * Iterates two pointer arrays, invoking a virtual method (offset 0)
 * with arg 1 on each non-null element, then zeroes the entries and
 * resets the end pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006977c0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x68]
        mov     ebx, dword ptr [edi + 0x6c]
        cmp     esi, ebx
        jz      L_977e8
    L_977cf:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      L_977db
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    L_977db:
        mov     dword ptr [esi], 0
        add     esi, 4
        cmp     esi, ebx
        jnz     L_977cf
    L_977e8:
        mov     esi, dword ptr [edi + 0x5c]
        mov     ebx, dword ptr [edi + 0x60]
        cmp     esi, ebx
        jz      L_9780b
    L_977f2:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      L_977fe
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    L_977fe:
        mov     dword ptr [esi], 0
        add     esi, 4
        cmp     esi, ebx
        jnz     L_977f2
    L_9780b:
        mov     eax, dword ptr [edi + 0x6c]
        mov     edx, dword ptr [edi + 0x68]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 2
        test    ecx, ecx
        jle     L_97829
    L_9781c:
        mov     esi, dword ptr [eax]
        mov     dword ptr [edx], esi
        add     eax, 4
        add     edx, 4
        dec     ecx
        jnz     L_9781c
    L_97829:
        mov     dword ptr [edi + 0x6c], edx
        mov     eax, dword ptr [edi + 0x60]
        mov     edx, dword ptr [edi + 0x5c]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 2
        test    ecx, ecx
        jle     L_9784a
    L_9783d:
        mov     esi, dword ptr [eax]
        mov     dword ptr [edx], esi
        add     eax, 4
        add     edx, 4
        dec     ecx
        jnz     L_9783d
    L_9784a:
        mov     dword ptr [edi + 0x60], edx
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
