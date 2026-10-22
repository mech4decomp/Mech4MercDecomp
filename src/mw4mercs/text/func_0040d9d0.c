/*
 * FUN_0040d9d0 (29 B) — __thiscall ctor helper: zeroes [this], calls
 *   FUN_00412740(arg), zeroes [this+4], returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412740(void);

__declspec(naked) void FUN_0040d9d0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        mov     esi, ecx
        push    eax
        mov     dword ptr [esi], 0x0
        call    FUN_00412740
        mov     byte ptr [esi+0x4], 0x0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
