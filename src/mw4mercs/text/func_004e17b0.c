/*
 * FUN_004e17b0 (71 B) — MLR/Adept sub-object list helper (__thiscall).
 * Builds a temporary list wrapper and inserts an item.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_004e17b0(void)
{
    __asm {
        sub     esp, 0x18
        push    esi
        lea     esi, [ecx+0x50]
        push    esi
        lea     ecx, [esp+0xc]
        call    FUN_00416bc0
        lea     ecx, [esp+0x8]
        mov     dword ptr [esp+0x8], 0x773c58
        call    FUN_00415cc0
        mov     ecx, dword ptr [esp+0x20]
        mov     dword ptr [esp+0x4], eax
        lea     eax, [esp+0x4]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00416a90
        lea     ecx, [esp+0x8]
        call    FUN_00416c60
        pop     esi
        add     esp, 0x18
        ret     4
    }
}
