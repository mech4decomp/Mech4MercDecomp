/*
 * FUN_0041a250 (41 B) — __thiscall wrapper. Saves `this` (ECX) in ESI,
 * calls FUN_0041b140 with a stack arg, then calls FUN_00419f30 with
 * `this` restored, returning `this` in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041b140(void);
extern void __cdecl FUN_00419f30(void);

__declspec(naked) void FUN_0041a250(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        sub     esp, 0x10
        push    esi
        mov     esi, ecx
        push    eax
        lea     ecx, [esp+0x8]
        call    FUN_0041b140
        lea     ecx, [esp+0x4]
        push    ecx
        mov     ecx, esi
        call    FUN_00419f30
        mov     eax, esi
        pop     esi
        add     esp, 0x10
        ret     0x4
    }
}
