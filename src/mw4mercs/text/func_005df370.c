/*
 * FUN_005df370 (29 B) — __thiscall (ECX = this), RET 0.
 *
 * Sets vtable [this] = 0x788784, calls FUN_0041fc90(this+0x42C),
 * then FUN_005e1e50(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fc90(void *this);
extern void __stdcall FUN_005e1e50(void *this);

__declspec(naked) void __stdcall FUN_005df370(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x42C]
        mov     dword ptr [esi], 0x788784
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_005e1e50
        pop     esi
        ret
    }
}
