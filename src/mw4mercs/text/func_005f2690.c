/*
 * FUN_005f2690 (229 B) — __thiscall. Appends a value to a growable int array
 *   (fields 0x1b8/0x1bc/0x1c0). Grows the buffer via FUN_004084d0 /
 *   FUN_0059db70 when full, frees the old buffer via FUN_004084e0.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void *FUN_004084d0(int);
extern void *FUN_0059db70(int, void *, void *, int, int);
extern void  FUN_004084e0(void *);

__declspec(naked) void FUN_005f2690(void)
{
    __asm {
        sub     esp, 8
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x1c0]
        push    edi
        mov     edi, dword ptr [ebp + 0x1bc]
        cmp     edi, eax
        jz      L26C2
        test    edi, edi
        jz      L26B1
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [edi], eax
    L26B1:
        add     edi, 4
        mov     dword ptr [ebp + 0x1bc], edi
        pop     edi
        pop     ebp
        add     esp, 8
        ret     4
    L26C2:
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x1b8]
        mov     eax, edi
        sub     eax, esi
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      L26EA
        lea     ecx, [esp + 0x14]
    L26EA:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      L2704
        shl     ecx, 2
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        mov     ebx, eax
        jmp     L2706
    L2704:
        xor     ebx, ebx
    L2706:
        mov     edx, dword ptr [esp + 0x1c]
        push    0
        push    edx
        push    ebx
        push    edi
        push    esi
        call    FUN_0059db70
        add     esp, 0x14
        test    eax, eax
        jz      L2722
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], ecx
    L2722:
        mov     ecx, edi
        sub     ecx, edi
        add     eax, 4
        sar     ecx, 2
        test    ecx, ecx
        mov     esi, eax
        jle     L273F
        sub     edi, eax
    L2734:
        mov     edx, dword ptr [edi + esi]
        mov     dword ptr [esi], edx
        add     esi, 4
        dec     ecx
        jnz     L2734
    L273F:
        mov     eax, dword ptr [ebp + 0x1b8]
        test    eax, eax
        jz      L2752
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L2752:
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [ebp + 0x1bc], esi
        pop     esi
        mov     dword ptr [ebp + 0x1b8], ebx
        lea     ecx, [ebx + eax*4]
        pop     ebx
        pop     edi
        mov     dword ptr [ebp + 0x1c0], ecx
        pop     ebp
        add     esp, 8
        ret     4
    }
}
