/*
 * FUN_006F7860 (159 B) — String comparison + array update.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 * Compares a string at [this+0x24] with the first param using
 * a custom strcmp (byte-by-byte, 2-byte stride). If they match,
 * calls FUN_006F8560 to find an index, then compares the string
 * at that index with the first param. If they match, zeroes the
 * pointer at that array position.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006f8560(void);

__declspec(naked) void __fastcall FUN_006f7860(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        mov     edi, dword ptr [ebp + 0x24]
        test    edi, edi
        je      l_done
        mov     esi, dword ptr [esp + 0x18]
    l_strcmp_outer:
        mov     eax, esi
    l_strcmp_loop:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [edi]
        mov     cl, dl
        cmp     dl, bl
        jne     l_strcmp_diff
        test    cl, cl
        je      l_strcmp_eq
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [edi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     l_strcmp_diff
        add     eax, 2
        add     edi, 2
        test    cl, cl
        jne     l_strcmp_loop
    l_strcmp_eq:
        xor     eax, eax
        jmp     l_strcmp_done
    l_strcmp_diff:
        sbb     eax, eax
        sbb     eax, -1
    l_strcmp_done:
        test    eax, eax
        jne     l_done
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        mov     ecx, ebp
        call    FUN_006f8560
        test    eax, eax
        jl      l_done
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ecx + eax*8 + 4]
        lea     edi, [ecx + eax*8 + 4]
        mov     eax, dword ptr [edx]
    l_strcmp2_loop:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     l_strcmp2_diff
        test    cl, cl
        je      l_strcmp2_eq
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     l_strcmp2_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     l_strcmp2_loop
    l_strcmp2_eq:
        xor     eax, eax
        jmp     l_strcmp2_done
    l_strcmp2_diff:
        sbb     eax, eax
        sbb     eax, -1
    l_strcmp2_done:
        test    eax, eax
        jne     l_done
        mov     dword ptr [edi], eax
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
