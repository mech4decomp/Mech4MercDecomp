/*
 * FUN_00480470 (111 B) — Object cleanup/destructor helper.
 *
 * __fastcall (ECX = this). Frees three pairs of (ptr, flag) fields,
 * then calls FUN_004811A0 and FUN_00429930 twice.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(int ptr);
extern void __fastcall FUN_004811a0(int param1);
extern void __fastcall FUN_00429930(int param1);

__declspec(naked) void __fastcall FUN_00480470(void *param1)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 4]
        xor     ebx, ebx
        cmp     eax, ebx
        push    edi
        jz      l_check2
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 4], ebx
    l_check2:
        cmp     dword ptr [esi + 0x0c], ebx
        jz      l_check3
        mov     ecx, dword ptr [esi + 8]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 8], ebx
        mov     dword ptr [esi + 0x0c], ebx
    l_check3:
        cmp     dword ptr [esi + 0x14], ebx
        jz      l_call_sub
        mov     edx, dword ptr [esi + 0x10]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x10], ebx
        mov     dword ptr [esi + 0x14], ebx
    l_call_sub:
        push    ebx
        lea     ecx, [esi + 0x18]
        call    FUN_004811a0
        add     esi, 0x20
        mov     edi, 2
    l_loop:
        push    ebx
        mov     ecx, esi
        call    FUN_00429930
        add     esi, 8
        dec     edi
        jnz     l_loop
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
