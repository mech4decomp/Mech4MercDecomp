/*
 * FUN_00518b40 (175 B) — String array initializer.
 *
 * __stdcall (RET 0x8). Iterates over an array of string pointers,
 * freeing old strings, allocating new 0x80-byte buffers, copying
 * a template string, then adjusting refcounts.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_006f4230(int ptr);
extern void * __stdcall FUN_006f3c80(int size, int flags);
extern void __stdcall FUN_00412570(const char *str);
extern void __stdcall FUN_004084e0(int ptr);

__declspec(naked) void FUN_00518b40(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0xc]
        push    ebp
        mov     ebp, dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 8]
        test    eax, eax
        jle     l_done_early

        push    ebx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], eax

    l_loop:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      l_alloc

        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], 0

    l_alloc:
        push    0
        push    0x80
        call    FUN_006f3c80
        mov     ebx, eax

        push    0x779f7c
        lea     ecx, [esp + 0x20]
        mov     dword ptr [ebp], ebx
        call    FUN_00412570

        ; strlen of param2 string
        mov     edi, dword ptr [esp + 0x1c]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb

        ; refcount decrement
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      l_next

        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_next

        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_next:
        mov     eax, dword ptr [esp + 0x10]
        add     ebp, 4
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     l_loop

        pop     edi
        pop     esi
        pop     ebx
        mov     eax, 1
        pop     ebp
        pop     ecx
        ret     8

    l_done_early:
        mov     eax, 1
        pop     ebp
        pop     ecx
        ret     8
    }
}
