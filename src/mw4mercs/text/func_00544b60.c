/*
 * FUN_00544B60 (716 B) — __fastcall, no return value.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(int ptr);
extern void __fastcall FUN_0040dca0(const char *str, int a, int b);
extern int __fastcall FUN_0040ecc0(const char *str);
extern int __stdcall FUN_004084d0(int size);
extern int __fastcall FUN_00417a40(void);
extern void __fastcall FUN_0040de20(void);

extern int DAT_007afaf0;
extern int DAT_007afaf4;
extern int DAT_007afaf8;
extern int DAT_007afafc;
extern int *DAT_0076b2dc;

__declspec(naked) void __fastcall FUN_00544b60(int param_1)
{
    __asm {
        sub     esp, 0x54
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x239d60]
        push    esi
        push    edi
        xor     edi, edi
        cmp     eax, edi
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [ebp + 0x239d54], edi
        mov     dword ptr [ebp + 0x239d58], edi
        mov     dword ptr [ebp + 0x239d5c], edi
        jz      l_free2
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp + 0x239d60], edi
    l_free2:
        mov     eax, dword ptr [ebp + 0x239d64]
        cmp     eax, edi
        jz      l_free3
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp + 0x239d64], edi
    l_free3:
        mov     eax, dword ptr [ebp + 0x239d68]
        cmp     eax, edi
        jz      l_ban
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp + 0x239d68], edi
    l_ban:
        push    edi
        push    edi
        push    0x77b7c0
        lea     ecx, [esp + 0x20]
        call    FUN_0040dca0
        push    0x77b7b8
        lea     ecx, [esp + 0x18]
        call    FUN_0040ecc0
        mov     esi, eax
        cmp     esi, edi
        jz      l_ngban2
        push    0xc
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      l_ngban_alloc_fail
        lea     ecx, [esi + 0x18]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax], 0x76cc9c
        mov     ebx, eax
        jmp     l_ngban_alloc_ok
    l_ngban_alloc_fail:
        xor     ebx, ebx
    l_ngban_alloc_ok:
        mov     ecx, dword ptr [ebx + 4]
        call    FUN_00417a40
        cmp     eax, edi
        /* __emit: branch-width quirk — ref uses near jz (0F 84 81); MSVC6 greedily picks short (74 7F) */
        __emit 0x0f
        __emit 0x84
        __emit 0x81
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [ebp + 0x239d54], eax
        shl     eax, 4
        push    eax
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        mov     dword ptr [ebp + 0x239d60], edi
        xor     esi, esi
    l_ngban_loop:
        mov     eax, dword ptr [ebx + 8]
        test    eax, eax
        jz      l_ngban_done
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ebx + 8], edx
        jz      l_ngban_done
        mov     ebp, dword ptr [DAT_007afaf0]
        lea     eax, [esi + edi]
        mov     edx, eax
        mov     dword ptr [edx], ebp
        mov     ebp, dword ptr [DAT_007afaf4]
        mov     dword ptr [edx + 4], ebp
        mov     ebp, dword ptr [DAT_007afaf8]
        mov     dword ptr [edx + 8], ebp
        mov     ebp, dword ptr [DAT_007afafc]
        mov     dword ptr [edx + 0xc], ebp
        lea     edx, [eax + 0xc]
        push    edx
        lea     edx, [eax + 8]
        push    edx
        lea     edx, [eax + 4]
        push    edx
        push    eax
        mov     eax, dword ptr [ecx + 0x18]
        push    0x77b744
        push    eax
        call    dword ptr [DAT_0076b2dc]
        mov     ebp, dword ptr [esp + 0x28]
        add     esp, 0x18
        add     esi, 0x10
        jmp     l_ngban_loop
    l_ngban_done:
        xor     edi, edi
    l_ngban2:
        push    0x77b7b4
        lea     ecx, [esp + 0x18]
        call    FUN_0040ecc0
        mov     esi, eax
        cmp     esi, edi
        jz      l_ispban
        push    0xc
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      l_ngban2_alloc_fail
        lea     ecx, [esi + 0x18]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax], 0x76cc9c
        mov     ebx, eax
        jmp     l_ngban2_alloc_ok
    l_ngban2_alloc_fail:
        xor     ebx, ebx
    l_ngban2_alloc_ok:
        mov     ecx, dword ptr [ebx + 4]
        call    FUN_00417a40
        cmp     eax, edi
        jz      l_ispban
        mov     dword ptr [ebp + 0x239d58], eax
        shl     eax, 4
        push    eax
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        mov     dword ptr [ebp + 0x239d64], edi
        xor     esi, esi
    l_ngban2_loop:
        mov     eax, dword ptr [ebx + 8]
        test    eax, eax
        jz      l_ngban2_done
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ebx + 8], edx
        jz      l_ngban2_done
        mov     ebp, dword ptr [DAT_007afaf0]
        lea     eax, [esi + edi]
        mov     edx, eax
        mov     dword ptr [edx], ebp
        mov     ebp, dword ptr [DAT_007afaf4]
        mov     dword ptr [edx + 4], ebp
        mov     ebp, dword ptr [DAT_007afaf8]
        mov     dword ptr [edx + 8], ebp
        mov     ebp, dword ptr [DAT_007afafc]
        mov     dword ptr [edx + 0xc], ebp
        lea     edx, [eax + 0xc]
        push    edx
        lea     edx, [eax + 8]
        push    edx
        lea     edx, [eax + 4]
        push    edx
        push    eax
        mov     eax, dword ptr [ecx + 0x18]
        push    0x77b744
        push    eax
        call    dword ptr [DAT_0076b2dc]
        mov     ebp, dword ptr [esp + 0x28]
        add     esp, 0x18
        add     esi, 0x10
        jmp     l_ngban2_loop
    l_ngban2_done:
        xor     edi, edi
    l_ispban:
        push    0x77b7c8
        lea     ecx, [esp + 0x18]
        call    FUN_0040ecc0
        mov     esi, eax
        cmp     esi, edi
        jz      l_ispban_done
        push    0xc
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      l_ispban_alloc_fail
        lea     ecx, [esi + 0x18]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax], 0x76cc9c
        mov     ebx, eax
        jmp     l_ispban_alloc_ok
    l_ispban_alloc_fail:
        xor     ebx, ebx
    l_ispban_alloc_ok:
        mov     ecx, dword ptr [ebx + 4]
        call    FUN_00417a40
        cmp     eax, edi
        jz      l_ispban_done
        lea     edx, [eax*4]
        push    edx
        mov     dword ptr [ebp + 0x239d5c], eax
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        mov     dword ptr [ebp + 0x239d68], edi
        xor     esi, esi
    l_ispban_loop:
        mov     eax, dword ptr [ebx + 8]
        test    eax, eax
        jz      l_ispban_done
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [ebx + 8], eax
        jz      l_ispban_done
        lea     eax, [esi + edi]
        lea     edx, [eax + 3]
        push    edx
        lea     edx, [eax + 2]
        push    edx
        lea     edx, [eax + 1]
        push    edx
        push    eax
        mov     eax, dword ptr [ecx + 0x18]
        push    0x77b744
        push    eax
        call    dword ptr [DAT_0076b2dc]
        add     esp, 0x18
        add     esi, 4
        jmp     l_ispban_loop
    l_ispban_done:
        lea     ecx, [esp + 0x14]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x54
        ret
    }
}
