/*
 * FUN_006C0230 — hash table lookup for a string.
 *
 * __cdecl, RET 4. Returns 1 if found, 0 if not.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) int __stdcall func_006c0230(const char *str)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        xor     eax, eax
        mov     al, byte ptr [ebx]
        push    ebp
        push    esi
        push    edi
        mov     ecx, eax
        and     ecx, 0xff
        mov     dl, byte ptr [ecx + 0x82ecf8]
        test    dl, dl
        jz      L_ret0
        xor     edx, edx
        mov     dl, byte ptr [ebx + 1]
        lea     ecx, [ebx + 1]
        movsx   eax, al
        cmp     byte ptr [edx + 0x82ebf8], 0
        jz      L_hash_done
    L_hash_loop:
        lea     eax, [edx + eax * 8]
        inc     ecx
        xor     edx, edx
        mov     dl, byte ptr [ecx]
        cmp     byte ptr [edx + 0x82ebf8], 0
        jnz     L_hash_loop
    L_hash_done:
        sub     cl, bl
        _emit 0x88
        _emit 0x0D
        _emit 0x00
        _emit 0xA1
        _emit 0x83
        _emit 0x00
        _emit 0x8B
        _emit 0x0D
        _emit 0x00
        _emit 0xA1
        _emit 0x83
        _emit 0x00
        mov     ebp, eax
        and     ecx, 0xff
        shl     ebp, 0x10
        add     ebp, ecx
        and     eax, 0xf
        and     ecx, 7
        lea     edx, [ecx + eax * 8]
        mov     esi, dword ptr [edx * 4 + 0x839ef0]
        test    esi, esi
        jz      L_ret0
    L_bucket_loop:
        mov     eax, dword ptr [esi + 4]
        and     eax, 0xfffff8ff
        cmp     eax, ebp
        jnz     L_next
        mov     eax, dword ptr [esi + 8]
        mov     cl, byte ptr [eax]
        test    cl, cl
        jz      L_found
        mov     edi, ebx
        sub     edi, eax
    L_cmp_loop:
        mov     dl, byte ptr [edi + eax]
        inc     eax
        cmp     dl, cl
        jnz     L_next
        mov     cl, byte ptr [eax]
        test    cl, cl
        jz      L_found
        jmp     L_cmp_loop
    L_next:
        mov     esi, dword ptr [esi]
        test    esi, esi
        jz      L_ret0
        jmp     L_bucket_loop
    L_found:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     4
    L_ret0:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     4
    }
}
