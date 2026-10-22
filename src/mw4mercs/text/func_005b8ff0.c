/*
 * FUN_005b8ff0 (30 B) — __thiscall scalar-deleting destructor.
 *
 * Calls FUN_004dd1c0 (thiscall) on this; if flag param & 1, frees this
 * via FUN_004084e0. Returns this. RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004dd1c0(void *param);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005b8ff0(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_done
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
