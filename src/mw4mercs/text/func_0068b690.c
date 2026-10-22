/*
 * FUN_0068b690 (194 B) — __thiscall (RET 4). Serializes structure fields via
 * virtual calls, then iterates arrays calling virtual methods.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_006b0460(void);

__declspec(naked) void __fastcall FUN_0068b690(void* this, int a)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x1
        lea     ecx, [edi + 0x24]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x4c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [edi + 0x34]
        mov     ecx, dword ptr [edi + 0x38]
        sub     ecx, edx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        push    0x4
        lea     eax, [esp + 0x18]
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ebx, dword ptr [edi + 0x34]
        mov     ebp, dword ptr [edi + 0x38]
        cmp     ebx, ebp
        jz      L_713
L_702:
        mov     edx, dword ptr [esi]
        push    0xc
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     ebx, 0xc
        cmp     ebx, ebp
        jnz     L_702
L_713:
        mov     edx, dword ptr [edi + 0x40]
        mov     eax, dword ptr [edi + 0x44]
        sub     eax, edx
        mov     edx, dword ptr [esi]
        sar     eax, 2
        mov     dword ptr [esp + 0x14], eax
        push    0x4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [edi + 0x40]
        cmp     eax, dword ptr [edi + 0x44]
        jz      L_743
        mov     edi, dword ptr [eax]
L_73a:
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx]
        jmp     L_73a
L_743:
        push    esi
        mov     ecx, edi
        call    FUN_006b0460
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
