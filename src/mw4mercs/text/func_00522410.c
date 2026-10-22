/*
 * FUN_00522410 (203 B) — String buffer copy with refcount.
 *
 * Allocates a 0x80-byte buffer, copies a string from an obfuscated
 * global pointer chain, and manages a reference count on the source.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_006f4230(void *ptr);
extern void *__cdecl FUN_006f3c80(int size, int flags);
extern void __cdecl FUN_004084e0(void *ptr);

/* extern data symbols for absolute-memory operands */
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void FUN_00522410(void)
{
    
__asm {
mov     eax, [esp + 0x04]
        push    ebx
        push    ebp
        push    esi
        mov     esi, [eax + 0x04]
        mov     eax, [esi]
        test    eax, eax
        push    edi
        jz      skip_free

        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0

    skip_free:
        push    0x00
        push    0x80
        call    FUN_006f3c80
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        mov     ebp, eax
        mov     [esi], ebp
        xor     edx, dword ptr [DAT_007dab40]
        mov     eax, [edx + 0x44]
        lea     esi, [edx + 0x44]
        xor     eax, 0x85739531
        mov     ecx, [eax + 0x34]
        mov     edx, [ecx + 0x34]
        test    edx, edx
        jz      ret_fail

        mov     al, [edx - 1]
        lea     ebx, [edx - 1]
        inc     al
        mov     [ebx], al
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        mov     [esp + 0x14], ecx
        jz      dec_ref_fail

        mov     eax, [esi]
        xor     eax, 0x85739531
        mov     ecx, [eax + 0x34]
        mov     eax, [ecx + 0x38]
        test    eax, eax
        jnz     dec_ref_fail

        ; strlen + memcpy
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb

    dec_ref:
        dec     byte ptr [ebx]
        jnz     ret_ok

        push    ebx
        call    FUN_004084e0
        add     esp, 4

    ret_ok:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x01
        pop     ebx
        ret     0x08

    dec_ref_fail:
        dec     byte ptr [ebx]
        jnz     ret_fail

        push    ebx
        call    FUN_004084e0
        add     esp, 4

    ret_fail:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x08
    }


}
