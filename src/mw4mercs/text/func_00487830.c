/*
 * FUN_00487830 (111 B) — MLR array container constructor (__thiscall, RET 8).
 *
 * Initializes an array container with a given capacity. Calls FUN_00415180
 * for base init, sets vtable to 0x76cd9c, allocates capacity*4 bytes for
 * the item array, sets vtable to 0x76fcc8, and sets count to 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00415180(void *param);
extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void *__fastcall FUN_00487830(void *this, int capacity, void *param)
{
    __asm {
        mov     eax, [esp + 8]              ; param (3rd arg on stack)
        push    ebx
        push    esi
        mov     esi, ecx                    ; this
        push    eax
        call    FUN_00415180                ; base init
        mov     eax, [esp + 0x0c]           ; capacity
        xor     ebx, ebx
        cmp     eax, ebx
        mov     [esi + 0x08], ebx           ; field_08 = 0
        mov     [esi + 0x0c], ebx           ; field_0c = 0
        mov     dword ptr [esi], 0x76cd9c    ; mov dword ptr [esi], 0x76cd9c
        jnz     l_check_cap
        mov     eax, 4                      ; default capacity = 4
    l_check_cap:
        cmp     eax, ebx
        mov     [esi + 0x14], ebx           ; field_14 = 0
        mov     [esi + 0x18], ebx           ; field_18 = 0
        jz      l_set_count
        jbe     l_alloc_zero                ; if capacity < 0 (unsigned), alloc 0
        lea     ecx, [eax * 4]
        push    ecx
        mov     [esi + 0x18], eax           ; field_18 = capacity
        call    FUN_004084d0                ; alloc(capacity * 4)
        add     esp, 4
        mov     [esi + 0x14], eax           ; field_14 = allocated array
        jmp     l_set_count
    l_alloc_zero:
        push    ebx
        call    FUN_004084e0                ; free(0) — no-op
        add     esp, 4
        mov     [esi + 0x14], ebx           ; field_14 = 0
    l_set_count:
        mov     byte ptr [esi + 0x1c], bl   ; field_1c = 0
        mov     dword ptr [esi], 0x76fcc8    ; mov dword ptr [esi], 0x76fcc8
        mov     word ptr [esi + 0x10], 1    ; field_10 = 1
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     8
    }
}
