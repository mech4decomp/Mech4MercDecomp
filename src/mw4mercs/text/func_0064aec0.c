/*
 * FUN_0064aec0 (183 B) — __cdecl, RET.
 *
 * Cleans up a list of objects: frees each entry via FUN_0064c620 /
 * FUN_004084e0, removes an entry from a vector, and calls FUN_006f4230.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_008058b8;                    /* 0x008058B8 */
extern int DAT_007f2998;                    /* 0x007F2998 */
extern int DAT_0080d98c;                    /* 0x0080D98C */
extern void __cdecl FUN_0064c620(void);
extern void __stdcall FUN_004084e0(int ptr);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void __cdecl FUN_0064aec0(void)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [DAT_008058b8]
        test    ebp, ebp
        jz      l_done
        mov     eax, dword ptr [DAT_007f2998]
        push    ebx
        mov     ebx, dword ptr [DAT_0080d98c]
        push    esi
        push    edi
        xor     edi, edi
        test    eax, eax
        jle     l_after_loop
    l_loop:
        mov     esi, dword ptr [ebx + edi*0x4]
        test    esi, esi
        jz      l_skip_free
        mov     ecx, esi
        call    FUN_0064c620
        push    esi
        call    FUN_004084e0
        mov     ebp, dword ptr [DAT_008058b8]
        mov     ebx, dword ptr [DAT_0080d98c]
        add     esp, 0x4
    l_skip_free:
        mov     eax, dword ptr [DAT_007f2998]
        mov     dword ptr [ebx + edi*0x4], 0x0
        inc     edi
        cmp     edi, eax
        jl      l_loop
    l_after_loop:
        test    ebx, ebx
        jz      l_clear
        mov     esi, dword ptr [ebp + 0x10]
        cmp     esi, dword ptr [ebp + 0x14]
        jz      l_free
        lea     edi, [esi + 0x04]
    l_find:
        cmp     dword ptr [esi], ebx
        jnz     l_next
        mov     edx, dword ptr [ebp + 0x14]
        cmp     edi, edx
        jz      l_update
        mov     eax, edx
        sub     eax, edi
        sar     eax, 0x2
        test    eax, eax
        mov     ecx, esi
        jle     l_update
    l_shift:
        mov     ebp, dword ptr [ecx + 0x04]
        mov     dword ptr [ecx], ebp
        add     ecx, 0x4
        dec     eax
        jnz     l_shift
        mov     ebp, dword ptr [DAT_008058b8]
    l_update:
        add     edx, -0x4
        mov     dword ptr [ebp + 0x14], edx
        jmp     l_cond
    l_next:
        add     esi, 0x4
        add     edi, 0x4
    l_cond:
        cmp     esi, dword ptr [ebp + 0x14]
        jnz     l_find
    l_free:
        push    ebx
        call    FUN_006f4230
    l_clear:
        pop     edi
        pop     esi
        mov     dword ptr [DAT_0080d98c], 0x0
        pop     ebx
    l_done:
        pop     ebp
        ret
    }
}
