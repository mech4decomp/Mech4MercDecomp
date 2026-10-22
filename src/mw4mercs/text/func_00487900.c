/*
 * FUN_00487900 (72 B) — MLR shape node constructor.
 *
 * Calls FUN_006F4950 with DAT_007B9590, allocates 0x20 bytes,
 * calls FUN_004871C0 to construct, then calls FUN_006F49A0.
 * Returns the new object or 0 on alloc failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_006f4950(void *param);
extern void __cdecl FUN_006f49a0(void);
extern void *__stdcall FUN_004084d0(int size);
extern int __fastcall FUN_004871c0(void *shape, int param1, int param2);

extern int DAT_007b9590;
extern int DAT_007da724;

__declspec(naked) int __cdecl FUN_00487900(int param1, int param2)
{
    __asm {
        mov     eax, dword ptr [DAT_007b9590]   ; mov eax, [0x007b9590]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_fail
        mov     ecx, [esp + 0x0c]           ; param2
        mov     edx, [esp + 0x08]           ; param1
        push    ecx
        mov     ecx, dword ptr [DAT_007da724]   ; mov ecx, [0x007da724]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_004871c0
        mov     esi, eax
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    l_fail:
        xor     esi, esi
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    }
}
