/*
 * FUN_006F7570 (68 B) — String copy with length check (max 255 chars).
 *
 * __fastcall (ECX = this, EDX = param). Takes a string param, checks if
 * its length is <= 255. If too long, returns 0. Otherwise copies the
 * string to this+0x3C (destination buffer) and returns the length.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006f7570(void)
{
    __asm {
        mov     edx, ecx
        push    esi
        mov     esi, dword ptr [esp + 8]
        or      ecx, -1
        push    edi
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0xFF
        jb      l_copy
        pop     edi
        xor     al, al
        pop     esi
        ret     4
    l_copy:
        or      ecx, -1
        mov     edi, esi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, dword ptr [edx + 0x3C]
        shr     ecx, 2
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        pop     edi
        mov     al, 1
        pop     esi
        ret     4
    }
}
