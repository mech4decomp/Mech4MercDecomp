/*
 * FUN_0069b800 (194 B) — Allocates a heap structure, builds a linked list
 * while a global flag is set, then returns the structure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void* __cdecl FUN_0064fd60(void);
extern void __cdecl FUN_00562f10(int, const char*);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0064fcd0(void*);
extern void __cdecl FUN_0069ae50(int);
extern void __cdecl FUN_0069ae70(int, int);
extern int g_8058ac;
extern int g_80d988;

__declspec(naked) void* FUN_0069b800(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        xor     ebx, ebx
        push    edi
        mov     dword ptr [esp + 0x10], ebx
        call    FUN_0064fd60
        mov     esi, eax
        cmp     esi, ebx
        jnz     L_824
        push    0x79992c
        push    ebx
        call    FUN_00562f10
        add     esp, 0x8
L_824:
        or      edi, -1
        mov     dword ptr [esi + 0x4], 0x2
        mov     dword ptr [esi + 0x8], 0x4
        mov     dword ptr [esi + 0xc], ebx
        call    FUN_00649150
        mov     eax, dword ptr [g_8058ac]
        mov     ebp, 0x1
        cmp     eax, ebp
        jnz     L_8ab
L_84b:
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_0064fcd0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx + 0x18], ebp
        mov     edx, dword ptr [esp + 0x14]
        add     esp, 0x4
        inc     edi
        test    ebx, ebx
        mov     dword ptr [edx + 0x1c], edi
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [g_80d988]
        mov     dword ptr [eax + 0x3c], esi
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0x40], edx
        jnz     L_888
        mov     ebx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x10], ebx
        jmp     L_893
L_888:
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [ebx + 0xc], eax
        mov     ebx, dword ptr [esp + 0x10]
L_893:
        call    FUN_00649150
        push    0x11
        call    FUN_0069ae50
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_84b
L_8ab:
        push    0xb
        push    0x7
        call    FUN_0069ae70
        add     esp, 0x8
        mov     dword ptr [esi + 0x14], edi
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
