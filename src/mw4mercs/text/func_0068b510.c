/*
 * FUN_0068b510 (195 B) — __thiscall (RET 8). Initializes a structure, calls
 * FUN_006b0710, and copies array data via two loops.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_006b0710(void);
extern void __cdecl FUN_0040ccd0(void);

__declspec(naked) void __fastcall FUN_0068b510(void* this, int a, int b)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_006b0710
        mov     dl, byte ptr [esp + 0x18]
        mov     al, byte ptr [esp + 0x18]
        xor     ebx, ebx
        mov     dword ptr [esi + 0x34], ebx
        mov     byte ptr [esi + 0x3c], dl
        mov     dword ptr [esi + 0x38], ebx
        mov     dword ptr [esi + 0x3c], ebx
        mov     dword ptr [esi + 0x40], ebx
        mov     dword ptr [esi + 0x44], ebx
        mov     edi, dword ptr [esi + 0x38]
        mov     byte ptr [esi + 0x48], al
        mov     ecx, edi
        sub     ecx, edi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 1
        mov     ecx, edx
        shr     ecx, 0x1f
        mov     dword ptr [esi + 0x48], ebx
        add     edx, ecx
        cmp     edx, ebx
        mov     dword ptr [esi], 0x798e1c
        mov     ebp, dword ptr [esi + 0x34]
        mov     dword ptr [esi + 0x20], ebx
        jle     L_58d
        mov     dword ptr [esp + 0x18], edx
L_574:
        push    edi
        mov     ecx, ebp
        call    FUN_0040ccd0
        mov     eax, dword ptr [esp + 0x18]
        add     edi, 0xc
        add     ebp, 0xc
        dec     eax
        mov     dword ptr [esp + 0x18], eax
        jnz     L_574
L_58d:
        mov     edx, dword ptr [esi + 0x40]
        mov     dword ptr [esi + 0x38], ebp
        mov     eax, dword ptr [esi + 0x44]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 2
        cmp     ecx, ebx
        jle     L_5ae
L_5a1:
        mov     edi, dword ptr [eax]
        mov     dword ptr [edx], edi
        add     eax, 0x4
        add     edx, 0x4
        dec     ecx
        jnz     L_5a1
L_5ae:
        or      eax, -1
        pop     edi
        mov     dword ptr [esi + 0x4c], eax
        mov     dword ptr [esi + 0x28], eax
        mov     byte ptr [esi + 0x24], bl
        mov     dword ptr [esi + 0x2c], ebx
        mov     byte ptr [esi + 0x30], bl
        mov     dword ptr [esi + 0x44], edx
        mov     dword ptr [esi + 0x8], 0x2
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
