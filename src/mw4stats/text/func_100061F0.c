/*
 * FUN_100061f0 (19 B) - __thiscall ctor wrapper: calls FUN_10001a30(this,
 * param_1) and returns this. RET 0x4.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001a30(void);

__declspec(naked) void * __cdecl FUN_100061f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_10001a30
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
