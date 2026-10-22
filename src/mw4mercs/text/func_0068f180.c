/*
 * FUN_0068f180 (178 B) — __thiscall constructor, RET 0x1c.
 *
 * Initializes an object (this in ECX): sets vtable pointers, zeroes
 * fields, converts 4 floats to ints via _ftol (0x0075DB4A), and copies
 * an array of 8-byte elements.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_0075db4a(void);    /* _ftol */
extern int DAT_00798fb8;                    /* 0x00798FB8 - vtable pointer */
extern int DAT_00798fb0;                    /* 0x00798FB0 - vtable pointer */

__declspec(naked) void __fastcall FUN_0068f180(void *this)
{
    __asm {
        mov     al, byte ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x0c]
        push    ebx
        xor     ebx, ebx
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [esp + 0x24]
        mov     dword ptr [esi + 0x08], ebx
        mov     byte ptr [esi + 0x10], al
        mov     dword ptr [esi + 0x10], ebx
        mov     dword ptr [esi + 0x0c], ebx
        mov     dword ptr [esi + 0x34], offset DAT_00798fb8
        mov     dword ptr [esi + 0x38], ebx
        mov     dword ptr [esi + 0x3c], ebx
        mov     dword ptr [esi], offset DAT_00798fb0
        mov     byte ptr [esi + 0x25], bl
        mov     dword ptr [esi + 0x28], ebx
        mov     byte ptr [esi + 0x27], cl
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x14], eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x18], eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x20]
        mov     dword ptr [esi + 0x1c], eax
        call    FUN_0075db4a
        mov     ecx, dword ptr [esi + 0x08]
        mov     dword ptr [esi + 0x20], eax
        mov     eax, dword ptr [esi + 0x0c]
        mov     edx, eax
        sub     edx, eax
        sar     edx, 0x3
        cmp     edx, ebx
        mov     byte ptr [esi + 0x24], bl
        jle     l_skip_copy
        push    edi
    l_copy_loop:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx], edi
        mov     edi, dword ptr [eax + 0x04]
        mov     dword ptr [ecx + 0x04], edi
        add     eax, 0x8
        add     ecx, 0x8
        dec     edx
        jnz     l_copy_loop
        pop     edi
    l_skip_copy:
        mov     eax, dword ptr [esp + 0x0c]
        mov     edx, dword ptr [esi + 0x08]
        mov     dword ptr [esi + 0x0c], ecx
        mov     cx, word ptr [esp + 0x10]
        mov     dword ptr [esi + 0x30], eax
        mov     byte ptr [esi + 0x26], bl
        mov     dword ptr [esi + 0x04], edx
        mov     word ptr [esi + 0x2c], cx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x1c
    }
}
