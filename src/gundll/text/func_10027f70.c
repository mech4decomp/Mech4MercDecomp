/*
 * FUN_10027f70 (37 B) - __fastcall ctor. Calls FUN_1001c6e0(this, 0x515a),
 * zeroes fields +0x20..+0x2c, stores vtable 0x1004ac60 at this+0, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10027f70(void)
{
    __asm {
        push    esi
        push    0x515a
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi], 0x1004ac60
        mov     eax, esi
        pop     esi
        ret
    }
}
