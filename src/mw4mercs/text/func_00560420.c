/*
 * FUN_00560420 (187 B) — __thiscall string setter/copier.
 * Compares input string with current [this+4]; if different,
 * decrements refcount at [this+0x118], copies new string,
 * optionally appends "\n".
 *
 * CFLAGS: /O1
 */

#include <windows.h>

__declspec(naked) void FUN_00560420(void)
{
    __asm {
        mov     al, [esp + 8]
        push    ebx
        push    ebp
        push    esi
        xor     ebx, ebx
        cmp     al, bl
        push    edi
        mov     edi, [esp + 0x14]
        mov     ebp, ecx
        jnz     not_empty
        ; param_2 == 0: compare strings
        mov     esi, edi
        lea     eax, [ebp + 4]
    strcmp_loop:
        mov     dl, [eax]
        mov     cl, dl
        cmp     dl, [esi]
        jnz     strcmp_diff
        cmp     cl, bl
        jz      strcmp_eq
        mov     cl, [eax + 1]
        mov     dl, cl
        cmp     cl, [esi + 1]
        jnz     strcmp_diff
        add     eax, 2
        add     esi, 2
        cmp     dl, bl
        jnz     strcmp_loop
    strcmp_eq:
        xor     eax, eax
        jmp     strcmp_done
    strcmp_diff:
        sbb     eax, eax
        sbb     eax, -1
    strcmp_done:
        cmp     eax, ebx
        jz      done
    not_empty:
        ; decrement refcount
        mov     eax, [ebp + 0x118]
        cmp     eax, ebx
        jz      skip_refcnt
        dec     dword ptr [eax]
        jns     skip_refcnt
        mov     [eax], ebx
    skip_refcnt:
        ; strlen of input string
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [ebp + 4]
        mov     byte ptr [ebp + 0x134], bl
        mov     [ebp + 0x118], ebx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        mov     al, [esp + 0x1c]
        and     ecx, 3
        cmp     al, bl
        rep movsb
        jz      done
        ; param_3 != 0: append "\n"
        or      ecx, -1
        xor     eax, eax
        mov     edi, 0x0077a078
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, -1
        mov     esi, edi
        mov     edi, edx
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
    done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
