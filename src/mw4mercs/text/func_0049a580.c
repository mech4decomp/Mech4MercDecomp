/*
 * FUN_0049A580 (286 B) — __thiscall, RET 0x8 (2 args).
 * MLR particle/flare subsystem. Constructor: initializes sub-objects, sets
 * vtable, configures curve sizes, and calls virtual methods on the parent.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_00493660(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004ae5a0(void);
extern void __cdecl FUN_004adf70(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_004adfb0(void);

__declspec(naked) void FUN_0049a580(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        push    ebx
        mov     esi, ecx
        push    0x52e
        call    FUN_00493660
        lea     ebp, [esi + 0x60]
        mov     ecx, ebp
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x6c]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x78]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x84]
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x90], 0x2
        mov     dword ptr [esi + 0xa4], 0x2
        push    edi
        mov     dword ptr [esi + 0xbc], 0x0
        push    ebx
        mov     ecx, ebp
        mov     dword ptr [esi], 0x7701f8
        call    FUN_004ae5a0
        push    edi
        push    ebx
        lea     ecx, [esi + 0x6c]
        call    FUN_004ae5a0
        push    edi
        push    ebx
        lea     ecx, [esi + 0x78]
        call    FUN_004ae5a0
        push    edi
        push    ebx
        lea     ecx, [esi + 0x84]
        call    FUN_004ae5a0
        cmp     edi, 0xf
        jle     l_small
        push    edi
        push    ebx
        lea     ecx, [esi + 0x90]
        call    FUN_004adf70
        push    edi
        push    ebx
        lea     ecx, [esi + 0xa4]
        call    FUN_004adf70
        cmp     edi, 0x10
        jle     l_after
        lea     eax, [esi + 0xbc]
        push    eax
        push    ebx
        call    FUN_00412a00
        add     esp, 0x8
        jmp     l_after
    l_small:
        push    0x0
        lea     ecx, [esi + 0x90]
        call    FUN_004adfb0
        push    0x41c80000
        lea     ecx, [esi + 0xa4]
        call    FUN_004adfb0
    l_after:
        mov     eax, dword ptr [ebx]
        push    0x1
        lea     ecx, [esi + 0xb8]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x20]
        cmp     edi, 0x17
        jl      l_ret2
        mov     edx, dword ptr [ebx]
        push    0x1
        lea     eax, [esi + 0xb9]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x20]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    l_ret2:
        pop     edi
        mov     byte ptr [esi + 0xb9], 0x1
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
