/*
 * FUN_10010e80 (41 B) - __thiscall, RET 0x4. Calls FUN_1001c720(this,0x4108,
 * param_1), zeroes this+0x20..0x28, sets vtable 0x100497a0, returns this.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c720(void);   /* rel32 call */

__declspec(naked) void FUN_10010e80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    eax
        push    0x4108
        mov     esi, ecx
        call    FUN_1001c720
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x100497a0
        mov     eax, esi
        pop     esi
        ret     4
    }
}
