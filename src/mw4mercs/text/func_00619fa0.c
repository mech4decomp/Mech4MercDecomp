/*
 * FUN_00619fa0 (186 B) — __thiscall, RET 8. Recursive tree-clone.
 *
 * Allocates 0x18-byte nodes via FUN_004084d0, copies data, and
 * recursively clones children (calls itself).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void* __stdcall FUN_004084d0(int size);
extern void __cdecl FUN_004931c0(void);

__declspec(naked) void __fastcall FUN_00619fa0(void *this, int param_2)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    0x18
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_004084d0
        mov     edi, dword ptr [esp + 0x1c]
        mov     ebp, eax
        lea     ecx, [ebp + 0x10]
        xor     esi, esi
        add     esp, 0x4
        cmp     ecx, esi
        jz      l_skip1
        lea     eax, [edi + 0x10]
        push    eax
        call    FUN_004931c0
    l_skip1:
        mov     eax, dword ptr [edi + 0x0c]
        cmp     eax, esi
        mov     cl, byte ptr [edi]
        mov     edx, dword ptr [esp + 0x1c]
        mov     byte ptr [ebp], cl
        mov     dword ptr [ebp + 0x08], esi
        mov     dword ptr [ebp + 0x0c], esi
        mov     dword ptr [ebp + 0x04], edx
        jz      l_skip2
        push    ebp
        push    eax
        mov     ecx, ebx
        call    FUN_00619fa0
        mov     dword ptr [ebp + 0x0c], eax
    l_skip2:
        mov     edi, dword ptr [edi + 0x08]
        cmp     edi, esi
        mov     ebx, ebp
        jz      l_done
    l_loop:
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        lea     ecx, [esi + 0x10]
        xor     edx, edx
        add     esp, 0x4
        cmp     ecx, edx
        jz      l_skip3
        mov     eax, dword ptr [edi + 0x10]
        cmp     eax, edx
        mov     dword ptr [ecx], eax
        jz      l_skip4
        inc     byte ptr [eax - 0x1]
    l_skip4:
        mov     eax, dword ptr [edi + 0x14]
        mov     dword ptr [ecx + 0x04], eax
    l_skip3:
        mov     eax, dword ptr [edi + 0x0c]
        cmp     eax, edx
        mov     cl, byte ptr [edi]
        mov     dword ptr [esi + 0x08], edx
        mov     byte ptr [esi], cl
        mov     dword ptr [esi + 0x0c], edx
        mov     dword ptr [ebx + 0x08], esi
        mov     dword ptr [esi + 0x04], ebx
        jz      l_skip5
        mov     ecx, dword ptr [esp + 0x10]
        push    esi
        push    eax
        call    FUN_00619fa0
        mov     dword ptr [esi + 0x0c], eax
    l_skip5:
        mov     edi, dword ptr [edi + 0x08]
        test    edi, edi
        mov     ebx, esi
        jnz     l_loop
    l_done:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
