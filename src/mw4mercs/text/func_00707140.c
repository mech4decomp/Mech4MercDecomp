/*
 * FUN_00707140 (26 B) — gosScript teardown helper: unlinks the object from
 * a doubly-linked list (FUN_006f8e80) and frees it (FUN_004084e0).
 * __stdcall, 1 arg, returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f8e80(void *ptr);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00707140(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        push    esi
        call    FUN_006f8e80
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
        mov     al, 0x1
        pop     esi
        ret     0x4
    }
}
