/*
 * FUN_0060afb0 (185 B) — __thiscall, RET 8.
 *
 * Copies transform data between objects and calls virtual methods.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern float DAT_0078bf70;                  /* 0x0078BF70 */

__declspec(naked) void __fastcall FUN_0060afb0(void *this, int param_1)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [ecx + 0x04]
        test    ebx, ebx
        jz      l_ret1
        mov     edx, dword ptr [ebx + 0x78]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esi + 0x18]
        mov     eax, dword ptr [esi + 0x14]
        mov     ebp, dword ptr [esi + 0x10]
        mov     dword ptr [esp + 0x0c], ecx
        lea     ecx, [ebx + 0x78]
        push    edi
        mov     dword ptr [esp + 0x18], eax
        call    dword ptr [edx + 0x04]
        mov     edx, dword ptr [esi + 0x08]
        mov     edi, eax
        mov     eax, dword ptr [esi + 0x04]
        fld     dword ptr [edi + 0x2b0]
        mov     ecx, dword ptr [edi + 0x2d4]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esi + 0x0c]
        mov     eax, dword ptr [edi + 0x2d8]
        mov     dword ptr [edx], eax
        mov     edx, dword ptr [ebx + 0x410]
        fstp    dword ptr [ecx]
        mov     ecx, dword ptr [ebx + 0x40c]
        sub     edx, ecx
        sar     edx, 0x2
        jz      l_zero
        mov     eax, ecx
        mov     eax, dword ptr [eax]
        jmp     l_cont
    l_zero:
        xor     eax, eax
    l_cont:
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x04]
        fld     dword ptr [DAT_0078bf70]
        fmul    dword ptr [eax + 0x63c]
        mov     ecx, dword ptr [edi + 0x638]
        mov     edx, dword ptr [esp + 0x10]
        pop     edi
        fstp    dword ptr [ebp]
        pop     esi
        fld     dword ptr [DAT_0078bf70]
        pop     ebp
        fmul    dword ptr [eax + 0x634]
        mov     eax, dword ptr [esp + 0x0c]
        mov     dword ptr [edx], ecx
        pop     ebx
        fstp    dword ptr [eax]
        mov     eax, 0x1
        pop     ecx
        ret     0x8
    l_ret1:
        mov     eax, 0x1
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
