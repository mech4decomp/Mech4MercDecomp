/*
 * FUN_0050e0d0 (196 B) — Output component handler.
 *
 * Iterates through output components, resolves names, and stores
 * results via virtual function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00411a80(void);
extern int FUN_00417a40(void);
extern int FUN_00504ce0(void);
extern int __cdecl FUN_006fabf0(const char *, ...);
extern void FUN_00417980(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) char FUN_0050e0d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x08]
        mov     ecx, dword ptr [edi + 0x08]
        mov     eax, dword ptr [edi + 0x0c]
        mov     esi, dword ptr [edi]
        push    0x00777f5c
        mov     dword ptr [ebp - 0x10], ecx
        mov     dword ptr [ebp - 0x14], esi
        mov     byte ptr [ebp + 0x0b], 0x01
        mov     dword ptr [ebp - 0x0c], eax
        call    FUN_00411a80
        mov     ebx, dword ptr [eax]
        mov     ecx, eax
        mov     dword ptr [ebp - 0x18], eax
        call    FUN_00417a40
        mov     dword ptr [ebp - 0x04], eax
        mov     edx, dword ptr [esi]
        push    0x04
        lea     eax, [ebp - 0x04]
        push    eax
        mov     ecx, esi
    l_vtable_call:
        call    dword ptr [edx + 0x24]
    l_loop_top:
        test    ebx, ebx
        jz      l_cleanup
        mov     eax, dword ptr [ebx]
        test    eax, eax
        mov     ebx, dword ptr [ebx + 0x04]
        jz      l_cleanup
        mov     esi, dword ptr [eax + 0x18]
        mov     ecx, dword ptr [edi + 0x04]
        mov     edx, dword ptr [ebp - 0x0c]
        push    esi
        push    ecx
        push    edx
        call    FUN_00504ce0
        add     esp, 0x0c
        cmp     eax, -0x01
        mov     dword ptr [ebp - 0x08], eax
        jnz     l_store_result
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [eax + 0x14]
        mov     edx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [edx]
        push    esi
        push    ecx
        push    eax
        push    0x00777f2c
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        jz      l_skip_int3
        int     3
    l_skip_int3:
        mov     byte ptr [ebp + 0x0b], 0x00
        jmp     l_loop_top

    l_store_result:
        mov     ecx, dword ptr [ebp - 0x14]
        mov     edx, dword ptr [ecx]
        push    0x04
        lea     eax, [ebp - 0x08]
        push    eax
        jmp     l_vtable_call

    l_cleanup:
        mov     esi, dword ptr [ebp - 0x18]
        test    esi, esi
        jz      l_done
        mov     ecx, esi
        call    FUN_00417980
        push    esi
        call    FUN_004084e0
        add     esp, 0x04

    l_done:
        mov     al, byte ptr [ebp + 0x0b]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
