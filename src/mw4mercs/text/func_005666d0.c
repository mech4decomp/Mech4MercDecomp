/*
 * FUN_005666D0 (122 B) — String concatenation helper.
 *
 * Prepends a space character to the input string in a global buffer
 * and returns the result.
 *
 * __cdecl (params on stack), returns char* (pointer to global buffer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char * __cdecl FUN_005666D0(void)
{
    

extern int DAT_007f176c;
extern void __cdecl FUN_100563192(void);
__asm {
push    esi
        push    edi
        push    0x800
        push    0x7f176c
        mov byte ptr [DAT_007f176c], 0x0
        call FUN_100563192
        or      ecx, 0xffffffff
        add     esp, 8
        xor     eax, eax
        mov     edi, 0x76cb8c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x7f176c
        repne scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     edi, dword ptr [esp + 0x0c]
        or      ecx, 0xffffffff
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x7f176c
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        pop     edi
        mov     eax, 0x7f176c
        pop     esi
        ret
    }


}
