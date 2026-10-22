/*
 * FUN_005f8dc0 (243 B) -- __thiscall (ECX = this), RET 4 (1 stack param).
 * Recursively registers a linked list of entries, then merges a set of
 * reference-counted objects into this+0x28C and copies fields into the
 * target object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007f26a4;
extern void *PTR_FUN_00774218;
extern char __stdcall FUN_00415230(int param);
extern void __fastcall FUN_005f8dc0(void *this, void *param);
extern void __fastcall FUN_00416bc0(void *this, void *param);
extern void *__fastcall FUN_00416cc0(void *this);
extern void __fastcall FUN_00416a90(void *this, void *param);
extern void __fastcall FUN_00416c60(void *this);
extern void __fastcall FUN_004179b0(void *this, void *param);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_005f8dc0(void *param)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        push    esi
        mov     esi, dword ptr [ebp + 0xbc]
        push    edi
        mov     ebx, ecx
    l_loop:
        test    esi, esi
        jz      l_after_loop
        mov     edi, dword ptr [esi]
        test    edi, edi
        mov     esi, dword ptr [esi + 4]
        jz      l_after_loop
        mov     eax, dword ptr [DAT_007f26a4]
        mov     ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      l_loop
        push    edi
        mov     ecx, ebx
        call    FUN_005f8dc0
        jmp     l_loop
    l_after_loop:
        lea     eax, [ebp + 0x28c]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], offset PTR_FUN_00774218
        call    FUN_00416cc0
        test    eax, eax
        jz      l_after_loop2
        lea     esi, [ebx + 0x28c]
    l_loop2:
        mov     ecx, dword ptr [eax + 0x44]
        test    ecx, ecx
        mov     dword ptr [esp + 0x28], ecx
        jz      l_skip_inc
        inc     byte ptr [ecx - 1]
    l_skip_inc:
        lea     ecx, [esp + 0x28]
        push    ecx
        push    eax
        mov     ecx, esi
        call    FUN_00416a90
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        jz      l_skip_dec
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_dec
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_dec:
        lea     ecx, [esp + 0x10]
        call    FUN_00416cc0
        test    eax, eax
        jnz     l_loop2
    l_after_loop2:
        push    ebp
        lea     ecx, [ebx + 0x398]
        call    FUN_004179b0
        mov     ecx, dword ptr [ebx + 0x278]
        mov     dl, byte ptr [ebx + 0x274]
        mov     eax, dword ptr [ebx + 0x27c]
        mov     dword ptr [ebp + 0x278], ecx
        lea     ecx, [esp + 0x10]
        mov     dword ptr [ebp + 0x280], ebx
        mov     byte ptr [ebp + 0x274], dl
        mov     dword ptr [ebp + 0x27c], eax
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     4
    }
}
