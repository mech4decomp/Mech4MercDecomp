/*
 * FUN_00439e40 (39 B) — MLR __thiscall constructor. Calls base ctor,
 * sets vtable 0x76e51c, zeroes +0x94/+0x98.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0043e480(int);

__declspec(naked) void FUN_00439e40(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_0043e480
        xor     eax, eax
        mov     dword ptr [esi+0x94], eax
        mov     dword ptr [esi+0x98], eax
        mov     dword ptr [esi], 0x76e51c
        mov     eax, esi
        pop     esi
        ret     4
    }
}
