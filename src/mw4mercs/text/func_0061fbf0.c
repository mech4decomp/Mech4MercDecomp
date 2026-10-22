/*
 * FUN_0061fbf0 (62 B) — __fastcall (ECX = this).
 *
 * Zeroes a 0x1c-byte structure, then lazily creates a semaphore via the
 * CreateSemaphoreA IAT slot, storing the handle in g_007f2ba4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int g_007f2ba4;
extern void *g_0076b0f8;   /* IAT: CreateSemaphoreA */

__declspec(naked) void __fastcall FUN_0061fbf0(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 0x04], eax
        mov     dword ptr [ecx + 0x08], eax
        mov     dword ptr [ecx + 0x0c], eax
        mov     byte ptr [ecx + 0x10], al
        mov     byte ptr [ecx + 0x11], al
        mov     byte ptr [ecx + 0x12], al
        mov     byte ptr [ecx + 0x13], al
        mov     byte ptr [ecx + 0x14], al
        mov     byte ptr [ecx + 0x15], al
        mov     byte ptr [ecx + 0x16], al
        mov     dword ptr [ecx + 0x18], eax
        cmp     dword ptr [g_007f2ba4], eax
        jnz     L_ret
        push    eax
        push    1
        push    eax
        push    eax
        call    dword ptr [g_0076b0f8]        ; CreateSemaphoreA
        mov     dword ptr [g_007f2ba4], eax
    L_ret:
        ret
    }
}
