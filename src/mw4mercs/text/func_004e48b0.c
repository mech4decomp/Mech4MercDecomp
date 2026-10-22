/*
 * FUN_004E48B0 (59 B) - Singleton factory for Adept::SlidingShapeComponent.
 *
 * Allocates 0x20 bytes; on success constructs the component via
 * FUN_004D5C10 and stores the result in the global at 0x007DC738,
 * else stores NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void *__cdecl FUN_004d5c10(void);
extern int DAT_007dc82c;
extern void *DAT_007dc738;

__declspec(naked) void FUN_004E48B0(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_fail
        mov     ecx, dword ptr [DAT_007dc82c]
        push    0
        push    0
        push    ecx
        push    0x773f30
        push    0x225
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [DAT_007dc738], eax
        ret
    l_fail:
        mov     dword ptr [DAT_007dc738], 0
        ret
    }
}
