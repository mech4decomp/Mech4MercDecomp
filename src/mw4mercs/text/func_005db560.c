/*
 * FUN_005db560 (14 B) — __cdecl wrapper around FUN_004084d0 (allocation).
 *
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);

__declspec(naked) void __cdecl FUN_005db560(unsigned int size)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        ret
    }
}
