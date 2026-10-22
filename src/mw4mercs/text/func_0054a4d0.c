/*
 * FUN_0054a4d0 (678 B) — Force-feedback / controller settings init (__thiscall).
 *
 * ECX = this (large struct). Stack param: some byte flag.
 * Initializes force feedback effect slots, loads .ffe files.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_0054a7c0(int a);
extern int __stdcall FUN_0072f090(void *p);
extern int __stdcall FUN_0072ef90(void *dst, int src, const char *name);
extern int __stdcall FUN_0072ef50(int a, int b, int c);

__declspec(naked) void __fastcall FUN_0054a4d0(void *this)
{
    

extern int DAT_007dc6b4;
__asm {
push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        xor     edi, edi
l_loop:
        push    edi
        mov     ecx, esi
        call    FUN_0054a7c0
        inc     edi
        cmp     edi, 0xa
        jl      l_loop

        /* Check and free 0x4b8 */
        mov     ecx, dword ptr [esi + 0x4b8]
        test    ecx, ecx
        lea     eax, [esi + 0x4b8]
        jz      l_free_4bc
        push    eax
        call    FUN_0072f090
l_free_4bc:
        mov     ecx, dword ptr [esi + 0x4bc]
        test    ecx, ecx
        lea     eax, [esi + 0x4bc]
        jz      l_free_4c0
        push    eax
        call    FUN_0072f090
l_free_4c0:
        mov     ecx, dword ptr [esi + 0x4c0]
        test    ecx, ecx
        lea     eax, [esi + 0x4c0]
        jz      l_free_4c4
        push    eax
        call    FUN_0072f090
l_free_4c4:
        mov     ecx, dword ptr [esi + 0x4c4]
        test    ecx, ecx
        lea     eax, [esi + 0x4c4]
        jz      l_free_4c8
        push    eax
        call    FUN_0072f090
l_free_4c8:
        mov     ecx, dword ptr [esi + 0x4c8]
        test    ecx, ecx
        lea     eax, [esi + 0x4c8]
        jz      l_free_4cc
        push    eax
        call    FUN_0072f090
l_free_4cc:
        mov     ecx, dword ptr [esi + 0x4cc]
        test    ecx, ecx
        lea     eax, [esi + 0x4cc]
        jz      l_free_4d0
        push    eax
        call    FUN_0072f090
l_free_4d0:
        mov     ecx, dword ptr [esi + 0x4d0]
        test    ecx, ecx
        lea     eax, [esi + 0x4d0]
        jz      l_free_4d4
        push    eax
        call    FUN_0072f090
l_free_4d4:
        mov     ecx, dword ptr [esi + 0x4d4]
        test    ecx, ecx
        lea     eax, [esi + 0x4d4]
        jz      l_free_4d8
        push    eax
        call    FUN_0072f090
l_free_4d8:
        mov     eax, dword ptr [esi + 0x4d8]
        test    eax, eax
        lea     edi, [esi + 0x4d8]
        jz      l_free_4dc
        push    edi
        call    FUN_0072f090
l_free_4dc:
        mov     eax, dword ptr [esi + 0x4dc]
        test    eax, eax
        lea     ebx, [esi + 0x4dc]
        jz      l_free_4e0
        push    ebx
        call    FUN_0072f090
l_free_4e0:
        mov     eax, dword ptr [esi + 0x4e0]
        test    eax, eax
        lea     ebp, [esi + 0x4e0]
        jz      l_zero_fields
        push    ebp
        call    FUN_0072f090
l_zero_fields:
        /* 0x0054A5D8: mov eax, [0x007dc6b4] */
        mov eax, dword ptr [DAT_007dc6b4]

        mov     eax, dword ptr [eax + 0x34]
        xor     ecx, ecx
        cmp     eax, ecx
        mov     dword ptr [esi + 0x4b8], ecx
        mov     dword ptr [esi + 0x4bc], ecx
        mov     dword ptr [esi + 0x4c0], ecx
        mov     dword ptr [esi + 0x4c4], ecx
        mov     dword ptr [esi + 0x4c8], ecx
        mov     dword ptr [esi + 0x4cc], ecx
        mov     dword ptr [esi + 0x4d0], ecx
        mov     dword ptr [esi + 0x4d4], ecx
        mov     dword ptr [edi], ecx
        mov     dword ptr [ebx], ecx
        mov     dword ptr [ebp], ecx
        jz      l_no_ff
        mov     cl, byte ptr [eax + 0x50]
        test    cl, cl
        mov     edi, dword ptr [eax + 0x38]
        jz      l_skip_ff_load
        push    0x77cff4
        push    edi
        lea     eax, [esi + 0x4b8]
        push    eax
        call    FUN_0072ef90
        push    0x77cfd8
        push    edi
        lea     eax, [esi + 0x4bc]
        push    eax
        call    FUN_0072ef90
        push    0x77cfb8
        push    edi
        lea     eax, [esi + 0x4c0]
        push    eax
        call    FUN_0072ef90
        push    0x77cf94
        push    edi
        lea     eax, [esi + 0x4c4]
        push    eax
        call    FUN_0072ef90
        push    0x77cf78
        push    edi
        lea     eax, [esi + 0x4c8]
        push    eax
        call    FUN_0072ef90
        push    0x77cf5c
        push    edi
        lea     eax, [esi + 0x4cc]
        push    eax
        call    FUN_0072ef90
        push    0x77cf40
        push    edi
        lea     eax, [esi + 0x4d0]
        push    eax
        call    FUN_0072ef90
        push    0x77cf24
        push    edi
        lea     eax, [esi + 0x4d4]
        push    eax
        call    FUN_0072ef90
        push    0x77cf08
        push    edi
        lea     eax, [esi + 0x4d8]
        push    eax
        call    FUN_0072ef90
        push    0x77ceec
        push    edi
        push    ebx
        call    FUN_0072ef90
        mov     ecx, 0x3f800000
        mov     dword ptr [esi + 0x4fc], ecx
        mov     dword ptr [esi + 0x500], ecx
        lea     ecx, [esi + 0x4e8]
        lea     eax, [esi + 0x4e4]
        xor     edx, edx
        mov     dword ptr [eax], 0x0
        mov     ebx, ecx
        mov     dword ptr [ebx], edx
        mov     dword ptr [ebx + 4], edx
        mov     dword ptr [ebx + 8], edx
        push    eax
        mov     byte ptr [ecx], 0x1
        xor     ecx, ecx
        mov     edx, 0x3f800000
        push    edi
        push    ebp
        mov     byte ptr [esi + 0x4e9], 0x1
        mov     dword ptr [esi + 0x4f4], ecx
        mov     dword ptr [esi + 0x4f8], edx
        mov     dword ptr [esi + 0x504], edx
        mov     dword ptr [esi + 0x514], ecx
        mov     dword ptr [esi + 0x508], ecx
        call    FUN_0072ef50
        mov     al, byte ptr [esp + 0x14]
        pop     edi
        mov     byte ptr [esi + 0x175], al
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4

l_skip_ff_load:
        mov     cl, byte ptr [esp + 0x14]
        pop     edi
        mov     byte ptr [esi + 0x175], cl
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4

l_no_ff:
        mov     dl, byte ptr [esp + 0x14]
        pop     edi
        mov     byte ptr [esi + 0x175], dl
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }


}
