/*
 * FUN_004C3D50 (34 B) — Sub-object dtor with conditional free.
 *
 * __thiscall (ECX = this), RET 4.
 * Calls FUN_0041FCB0 on this+0x27C, then conditionally calls
 * FUN_0041FCD0 on the same sub-object if param is non-zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fcb0(void);
extern void __stdcall FUN_0041fcd0(void *ptr);

__declspec(naked) void __stdcall FUN_004c3d50(void)
{
    __asm {
        push    esi
        lea     esi, [ecx + 0x27c]
        mov     ecx, esi
        call    FUN_0041fcb0
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      l_skip_free
        push    eax
        mov     ecx, esi
        call    FUN_0041fcd0
    l_skip_free:
        pop     esi
        ret     4
    }
}
