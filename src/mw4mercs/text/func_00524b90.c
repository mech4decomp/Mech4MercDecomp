/*
 * FUN_00524b90 (187 B) — Bot AI initialization helper.
 *
 * __thiscall (ECX = this). Initializes bot data structures.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_004084d0(int size);
extern int __fastcall FUN_00416990(int a, int b);
extern void __stdcall FUN_006f4230(int ptr);

__declspec(naked) void __stdcall FUN_00524b90(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x5c
        mov     eax, dword ptr [esp + 0x60]
        push    ebx
        mov     ebx, dword ptr [eax + 4]
        push    ebp
        mov     ebp, dword ptr [eax + 8]
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        push    esi
        mov     esi, ecx
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x4c]
        push    edi
        xor     edi, edi
        xor     ecx, 0x85739531
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x68], edi
        mov     dword ptr [esp + 0x38], ebx
        mov     dword ptr [esp + 0x3c], ebp
        mov     byte ptr [esp + 0x70], 0
        mov     byte ptr [esp + 0x13], 0
        jz      l_skip_flag1
        mov     byte ptr [esp + 0x70], 1
    l_skip_flag1:
        mov     edx, dword ptr [eax + 0x58]
        xor     edx, 0x85739531
        jz      l_skip_flag2
        mov     byte ptr [esp + 0x13], 1
    l_skip_flag2:
        push    1
        push    edi
        lea     ecx, [esp + 0x48]
        call    FUN_00416990
        mov     esi, dword ptr [esi + 0x409a0]
        lea     eax, [esi * 4 + 4]
        push    eax
        mov     dword ptr [esp + 0x44], 0x76d654
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      l_null_ptr
        mov     dword ptr [eax], esi
        dec     esi
        cmp     esi, edi
        lea     edx, [eax + 4]
        jl      l_store_ptr
        lea     ecx, [esi + 1]
        xor     eax, eax
        mov     edi, edx
        rep     stosd
    l_store_ptr:
        mov     dword ptr [esp + 0x18], edx
        jmp     l_check_free
    l_null_ptr:
        mov     dword ptr [esp + 0x18], edi
    l_check_free:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      l_done
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0
    l_done:
        push    0
    }


}
