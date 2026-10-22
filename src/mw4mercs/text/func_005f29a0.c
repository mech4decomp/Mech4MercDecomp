/*
 * FUN_005f29a0 (225 B) — __thiscall. Grows/rebuilds a growable int array
 *   (fields 0x0/0x4/0x8) to hold a new element count. Allocates via
 *   FUN_004084d0, copies elements (rep movsd / rep stosd), frees the old
 *   buffer via FUN_004084e0.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void *FUN_004084d0(int);
extern void  FUN_004084e0(void *);

__declspec(naked) void FUN_005f29a0(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi + 4]
        mov     ecx, dword ptr [esp + 0x20]
        push    edi
        mov     edi, dword ptr [esi]
        mov     eax, ebx
        sub     eax, edi
        sar     eax, 2
        cmp     eax, ecx
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x24]
        jc      L29CD
        lea     ecx, [esp + 0x10]
    L29CD:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L29EB
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 4
        mov     ebp, eax
        jmp     L29ED
    L29EB:
        xor     ebp, ebp
    L29ED:
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, edi
        sar     eax, 2
        test    eax, eax
        mov     edx, ebp
        jle     L2A0B
        mov     ecx, edi
        sub     ecx, ebp
    L2A00:
        mov     edi, dword ptr [ecx + edx]
        mov     dword ptr [edx], edi
        add     edx, 4
        dec     eax
        jnz     L2A00
    L2A0B:
        mov     ecx, dword ptr [esp + 0x24]
        cmp     ecx, 1
        jnz     L2A25
        test    edx, edx
        jz      L2A20
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [ecx]
        mov     dword ptr [edx], eax
    L2A20:
        add     edx, 4
        jmp     L2A3A
    L2A25:
        test    ecx, ecx
        jbe     L2A3A
        mov     eax, dword ptr [esp + 0x20]
        mov     eax, dword ptr [eax]
        mov     edi, edx
        rep stosd
        mov     ecx, dword ptr [esp + 0x24]
        lea     edx, [edx + ecx*4]
    L2A3A:
        sub     ebx, dword ptr [esp + 0x1c]
        sar     ebx, 2
        mov     eax, ebx
        test    eax, eax
        mov     edi, edx
        jle     L2A58
        mov     esi, dword ptr [esp + 0x1c]
        mov     ecx, eax
        rep movsd
        mov     esi, dword ptr [esp + 0x14]
        lea     edi, [edx + eax*4]
    L2A58:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L2A67
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L2A67:
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 4], edi
        lea     eax, [ebp + edx*4]
        pop     edi
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 8], eax
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0xc
    }
}
