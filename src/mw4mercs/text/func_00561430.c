/*
 * FUN_00561430 (145 B) — __thiscall constructor-like init function.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern int __cdecl FUN_004084d0(int size);
extern int __cdecl FUN_0041fc80(void);
extern int __cdecl FUN_00561a90(void);

__declspec(naked) void FUN_00561430(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0xc]
        xor     ebx, ebx
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        lea     eax, [esp + 0x10]
        mov     dword ptr [edi], 0x0077dfdc
        push    eax
        lea     ecx, [esp + 0x13]
        lea     edi, [esi + 0x38]
        push    ecx
        mov     ecx, edi
        mov     [esp + 0x18], ebx
        call    FUN_00561a90
        push    0x18
        call    FUN_004084d0
        mov     dl, [esp + 0x13]
        mov     byte ptr [eax], bl
        mov     [eax + 4], ebx
        mov     [edi], eax
        mov     [eax + 8], eax
        mov     [eax + 0xc], eax
        mov     al, [esp + 0x13]
        mov     [esi + 0x44], al
        push    0x18
        mov     [edi + 4], ebx
        mov     [edi + 8], dl
        mov     [esi + 0x44], ebx
        call    FUN_004084d0
        mov     cl, [esp + 0x17]
        mov     byte ptr [eax], bl
        mov     [eax + 4], ebx
        add     esp, 8
        mov     [esi + 0x44], eax
        mov     [esi + 0x48], ebx
        mov     [eax + 8], eax
        pop     edi
        mov     [eax + 0xc], eax
        mov     byte ptr [esi + 4], bl
        mov     [esi + 0x4c], cl
        mov     dword ptr [esi], 0x0077dfc4
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     4
    }
}
