/*
 * FUN_004E4920 (393 B) - __thiscall Adept component construction.
 *
 * Sets up a component (vtable 0x773F68), asserts the shape has one
 * mesh, builds a mesh-list object, and resizes a per-mesh array
 * (with a memmove-style copy loop) before wiring it into the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004f0740(void);
extern void __cdecl FUN_004da840(void);
extern int __cdecl FUN_006fab90(void);
extern void *__cdecl FUN_00487e30(void);
extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_004E4920(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     eax, dword ptr [ebp+0x10]
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp+0xc]
        push    edi
        push    eax
        mov     edi, ecx
        mov     ecx, dword ptr [ebp+0x8]
        push    esi
        push    ecx
        mov     ecx, edi
        call    FUN_004f0740
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebp+0x8]
        push    eax
        mov     ecx, esi
        mov     dword ptr [edi], 0x773f68
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [ebp+0x8]
        mov     ecx, dword ptr [ebp+0x14]
        push    edx
        mov     dword ptr [edi+0x2c], ecx
        call    FUN_004da840
        mov     ecx, dword ptr [edi+0x24]
        mov     dword ptr [edi+0x30], eax
        mov     eax, dword ptr [ecx]
        push    0
        call    dword ptr [eax+0x38]
        mov     esi, eax
        cmp     byte ptr [esi+0x1c], 1
        jz      l_after_assert
        push    0x773f50
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_after_assert
        int     3
    l_after_assert:
        push    0
        mov     ecx, esi
        call    FUN_00487e30
        mov     ebx, eax
        mov     edx, dword ptr [ebx]
        lea     eax, [ebp+0xc]
        push    eax
        lea     ecx, [edi+0x34]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp-4], ebx
        call    dword ptr [edx+0x30]
        mov     eax, dword ptr [ebx+0xc]
        xor     esi, esi
        cmp     eax, esi
        jnz     l_skip_alloc
        push    0x30
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, esi
        jz      l_alloc_fail
        mov     dword ptr [eax], esi
        mov     dword ptr [eax+4], esi
        mov     dword ptr [eax+8], esi
        mov     dword ptr [eax+0xc], esi
        mov     dword ptr [eax+0x10], esi
        mov     dword ptr [eax+0x14], esi
        mov     dword ptr [eax+0x18], esi
        mov     dword ptr [eax+0x1c], esi
        mov     dword ptr [eax+0x20], esi
        mov     dword ptr [eax+0x24], esi
        mov     dword ptr [eax+0x28], esi
        mov     dword ptr [eax+0x2c], esi
        jmp     l_alloc_done
    l_alloc_fail:
        xor     eax, eax
    l_alloc_done:
        mov     dword ptr [ebx+0xc], eax
    l_skip_alloc:
        mov     esi, dword ptr [ebx+0xc]
        mov     eax, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [esi+0x1c]
        add     esi, 0x18
        cmp     eax, ecx
        mov     dword ptr [ebp+0x14], eax
        jz      l_outer
        test    eax, eax
        jbe     l_zero
        __emit 0x8D  /* __emit: lea edx,[eax*8+0] no-base SIB form (8D 14 C5 00000000) */
        __emit 0x14
        __emit 0xC5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    edx
        mov     dword ptr [ebp+0x10], eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_alloc2_fail
        mov     ecx, dword ptr [ebp+0x10]
        dec     ecx
        mov     dword ptr [ebp+0x10], ecx
        mov     dword ptr [ebp+0x10], eax
        jmp     l_alloc2
    l_alloc2_fail:
        mov     dword ptr [ebp+0x10], 0
    l_alloc2:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      l_free_old
        mov     eax, dword ptr [esi+4]
        mov     edx, dword ptr [ebp+0x14]
        cmp     edx, eax
        jc      l_copy_setup
        mov     edx, eax
    l_copy_setup:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      l_copy
        mov     eax, dword ptr [ebp+0x10]
        mov     ebx, dword ptr [ebp+0x10]
        lea     eax, [eax+edx*8]
        sub     ecx, ebx
        inc     edx
    l_copy_loop:
        mov     ebx, dword ptr [ecx+eax]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [ecx+eax+4]
        mov     dword ptr [eax+4], ebx
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      l_copy_loop
        mov     ebx, dword ptr [ebp-4]
    l_copy:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_free_old:
        mov     ecx, dword ptr [ebp+0x10]
        mov     dword ptr [esi], ecx
        jmp     l_after
    l_zero:
        mov     edx, dword ptr [esi]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
    l_after:
        mov     eax, dword ptr [ebp+0x14]
        mov     dword ptr [esi+4], eax
        mov     eax, dword ptr [ebp+0xc]
    l_outer:
        mov     edx, dword ptr [ebx]
        push    eax
        mov     eax, dword ptr [esi]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [edi+0x38], esi
        call    dword ptr [edx+0x2c]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
