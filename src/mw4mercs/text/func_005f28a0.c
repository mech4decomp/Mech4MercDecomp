/*
 * FUN_005f28a0 (221 B) — __thiscall. Appends a value to a growable int array
 *   (fields 0x0/0x4/0x8). Grows via FUN_004084d0 when full, frees old buffer
 *   via FUN_004084e0.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void *FUN_004084d0(int);
extern void  FUN_004084e0(void *);

__declspec(naked) void FUN_005f28a0(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [ecx + 8]
        push    edi
        mov     edi, dword ptr [ecx + 4]
        cmp     edi, eax
        mov     dword ptr [esp + 0xc], ecx
        jz      L28CB
        test    edi, edi
        jz      L28BE
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [eax]
        mov     dword ptr [edi], edx
    L28BE:
        add     edi, 4
        mov     dword ptr [ecx + 4], edi
        pop     edi
        add     esp, 0xc
        ret     4
    L28CB:
        push    ebx
        push    ebp
        mov     ebp, dword ptr [ecx]
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 2
        cmp     eax, 1
        push    esi
        mov     dword ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      L28F0
        lea     ecx, [esp + 0x14]
    L28F0:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      L290E
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 4
        mov     ebx, eax
        jmp     L2910
    L290E:
        xor     ebx, ebx
    L2910:
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 2
        test    eax, eax
        mov     ecx, ebx
        jle     L292C
        mov     edx, ebp
        sub     edx, ebx
    L2921:
        mov     esi, dword ptr [edx + ecx]
        mov     dword ptr [ecx], esi
        add     ecx, 4
        dec     eax
        jnz     L2921
    L292C:
        test    ecx, ecx
        jz      L2938
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ecx], eax
    L2938:
        mov     eax, edi
        sub     eax, edi
        sar     eax, 2
        test    eax, eax
        lea     esi, [ecx + 4]
        jle     L2953
        sub     edi, esi
    L2948:
        mov     ecx, dword ptr [edi + esi]
        mov     dword ptr [esi], ecx
        add     esi, 4
        dec     eax
        jnz     L2948
    L2953:
        test    ebp, ebp
        jz      L2960
        push    ebp
        call    FUN_004084e0
        add     esp, 4
    L2960:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 4], esi
        pop     esi
        pop     ebp
        lea     ecx, [ebx + edx*4]
        mov     dword ptr [eax], ebx
        pop     ebx
        mov     dword ptr [eax + 8], ecx
        pop     edi
        add     esp, 0xc
        ret     4
    }
}
