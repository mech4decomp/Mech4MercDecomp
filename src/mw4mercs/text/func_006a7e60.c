/*
 * FUN_006a7e60 (193 B) — __thiscall (RET 8). Inserts a node into a sorted
 * tree/list structure, allocating via FUN_004084d0 and linking via helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_006a8250(void);
extern void* __cdecl FUN_004084d0(int);
extern void __cdecl FUN_006a8280(void);
extern void __cdecl FUN_00411670(int, int);

__declspec(naked) void __fastcall FUN_006a7e60(void* this, int a, int b)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        mov     edi, dword ptr [ebp]
        mov     ecx, dword ptr [edi + 0x4]
        test    ecx, ecx
        mov     ebx, edi
        jz      L_92
L_72:
        mov     edx, dword ptr [esp + 0x18]
        fld     dword ptr [edx]
        mov     ebx, ecx
        fcomp   dword ptr [ecx + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jz      L_89
        mov     ecx, dword ptr [ecx + 0x8]
        jmp     L_8c
L_89:
        mov     ecx, dword ptr [ecx + 0xc]
L_8c:
        test    ecx, ecx
        jnz     L_72
        jmp     L_96
L_92:
        mov     edx, dword ptr [esp + 0x18]
L_96:
        cmp     ebx, edi
        jz      L_c4
        test    ecx, ecx
        jnz     L_c4
        fld     dword ptr [edx]
        fcomp   dword ptr [ebx + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_c4
        push    edx
        mov     ecx, ebp
        call    FUN_006a8250
        mov     edi, dword ptr [ebp]
        mov     esi, eax
        mov     dword ptr [ebx + 0xc], esi
        cmp     ebx, dword ptr [edi + 0xc]
        jnz     L_f5
        mov     dword ptr [edi + 0xc], esi
        jmp     L_f5
L_c4:
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        lea     ecx, [esi + 0x10]
        push    ecx
        call    FUN_006a8280
        add     esp, 0xc
        cmp     ebx, edi
        mov     dword ptr [ebx + 0x8], esi
        jnz     L_eed
        mov     dword ptr [edi + 0x4], esi
        mov     dword ptr [edi + 0xc], esi
        jmp     L_f5
L_eed:
        cmp     ebx, dword ptr [edi + 0x8]
        jnz     L_f5
        mov     dword ptr [edi + 0x8], esi
L_f5:
        add     edi, 0x4
        xor     eax, eax
        push    edi
        push    esi
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        call    FUN_00411670
        mov     eax, dword ptr [ebp + 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [ebp + 0x4], eax
        mov     eax, dword ptr [esp + 0x14]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
