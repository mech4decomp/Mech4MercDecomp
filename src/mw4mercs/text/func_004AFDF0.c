/*
 * FUN_004AFDF0 (418 B) — __thiscall, 1 arg (ret 4), ecx=this. Resizes two
 * parallel arrays (0x184/0x188 dword array and 0x14c/0x150 0x10-byte-element
 * array), copying old contents and zero-filling the new tail.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004AFDF0(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x188]
        and     esi, 0xffff
        mov     ebx, eax
        cmp     esi, ebx
        mov     dword ptr [esp + 0x10], eax
        je      l_4afe90
        test    esi, esi
        jbe     l_4afe6d
        lea     eax, [esi*4]
        push    eax
        call    FUN_004084d0
        mov     edx, dword ptr [edi + 0x184]
        add     esp, 4
        test    edx, edx
        mov     ebp, eax
        je      l_4afe65
        cmp     esi, ebx
        mov     ecx, esi
        jb      l_4afe3b
        mov     ecx, ebx
    l_4afe3b:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        je      l_4afe56
        lea     eax, [ebp + ecx*4]
        sub     edx, ebp
        inc     ecx
    l_4afe49:
        mov     ebx, dword ptr [edx + eax]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      l_4afe49
    l_4afe56:
        mov     eax, dword ptr [edi + 0x184]
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_4afe65:
        mov     dword ptr [edi + 0x184], ebp
        jmp     l_4afe86
    l_4afe6d:
        mov     ecx, dword ptr [edi + 0x184]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 0x184], 0
    l_4afe86:
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x188], esi
    l_4afe90:
        mov     ebp, dword ptr [edi + 0x150]
        cmp     esi, ebp
        je      l_4aff53
        xor     ebx, ebx
        cmp     esi, ebx
        jbe     l_4aff32
        mov     edx, esi
        shl     edx, 4
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [edi + 0x14c]
        add     esp, 4
        test    edx, edx
        mov     ebx, eax
        mov     dword ptr [esp + 0x14], ebx
        je      l_4aff1e
        cmp     esi, ebp
        mov     ecx, esi
        jb      l_4afece
        mov     ecx, ebp
    l_4afece:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        je      l_4aff0f
        mov     eax, ecx
        shl     eax, 4
        sub     edx, ebx
        add     eax, ebx
        mov     dword ptr [esp + 0x1c], edx
        inc     ecx
        jmp     l_4afee9
    l_4afee5:
        mov     edx, dword ptr [esp + 0x1c]
    l_4afee9:
        add     edx, eax
        mov     ebp, dword ptr [edx]
        mov     ebx, eax
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [edx + 4]
        mov     dword ptr [ebx + 4], ebp
        mov     ebp, dword ptr [edx + 8]
        mov     dword ptr [ebx + 8], ebp
        mov     edx, dword ptr [edx + 0xc]
        dec     ecx
        sub     eax, 0x10
        test    ecx, ecx
        mov     dword ptr [ebx + 0xc], edx
        ja      l_4afee5
        mov     ebx, dword ptr [esp + 0x14]
    l_4aff0f:
        mov     eax, dword ptr [edi + 0x14c]
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_4aff1e:
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x14c], ebx
        xor     ebx, ebx
        mov     dword ptr [edi + 0x150], esi
        jmp     l_4aff55
    l_4aff32:
        mov     eax, dword ptr [edi + 0x14c]
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 4
        mov     dword ptr [edi + 0x14c], ebx
        mov     dword ptr [edi + 0x150], esi
        jmp     l_4aff55
    l_4aff53:
        xor     ebx, ebx
    l_4aff55:
        cmp     eax, esi
        jae     l_4aff88
        mov     ebp, dword ptr [edi + 0x14c]
        mov     ecx, dword ptr [edi + 0x184]
        mov     edx, eax
        shl     edx, 4
        lea     edi, [ecx + eax*4]
        sub     esi, eax
        add     edx, ebp
        mov     ecx, esi
        xor     eax, eax
        rep     stosd
    l_4aff77:
        mov     dword ptr [edx], ebx
        mov     dword ptr [edx + 4], ebx
        mov     dword ptr [edx + 8], ebx
        mov     dword ptr [edx + 0xc], ebx
        add     edx, 0x10
        dec     esi
        jne     l_4aff77
    l_4aff88:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     4
    }
}
