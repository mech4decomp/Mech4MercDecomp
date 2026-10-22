/*
 * FUN_00532740 (157 B) — Decal name lookup function
 * Called with __thiscall (ECX = this pointer).
 * Searches through a linked list of decal entries for one matching
 * the given name string. Returns the matching entry or NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00532740(void)
{
    

extern void __cdecl FUN_100416bb3(void);
extern void __cdecl FUN_100416ca2(void);
extern void __cdecl FUN_100416c59(void);
extern void __cdecl FUN_100416bea(void);
extern void __cdecl FUN_100416bd9(void);
__asm {
sub     esp, 0x14
        push    ebx
        push    ebp
        push    esi
        add     ecx, 0xD8
        push    edi
        push    ecx
        lea     ecx, [esp + 0x14]
        call FUN_100416bb3
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], 0x0077B17C
        call FUN_100416ca2
        mov     edi, eax
        test    edi, edi
        jz      not_found

search_loop:
        mov     ebp, dword ptr [esp + 0x28]
search_loop_entry:
        mov     eax, dword ptr [edi + 0x18]
        mov     esi, ebp

strcmp_loop:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     strcmp_diff
        test    cl, cl
        jz      strcmp_eq
        mov     dl, byte ptr [eax + 0x01]
        mov     bl, byte ptr [esi + 0x01]
        mov     cl, dl
        cmp     dl, bl
        jnz     strcmp_diff
        add     eax, 0x02
        add     esi, 0x02
        test    cl, cl
        jnz     strcmp_loop

strcmp_eq:
        xor     eax, eax
        jmp     strcmp_done

strcmp_diff:
        sbb     eax, eax
        sbb     eax, -0x01

strcmp_done:
        test    eax, eax
        lea     ecx, [esp + 0x10]
        jz      found_match

        call FUN_100416c59
        mov     edi, eax
        test    edi, edi
        jnz     search_loop_entry

not_found:
        lea     ecx, [esp + 0x10]
        call FUN_100416bea
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x14
        ret     0x04

found_match:
        call FUN_100416bd9
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x04
    }


}
