/*
 * FUN_004DD7C0 (33 B) — Constructor.
 *
 * __thiscall (ECX = this), no stack params.
 * Sets vtable, calls sub-functions.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004dd870(int this, int param);
extern void __fastcall FUN_00417980(int this);
extern void __fastcall FUN_00415380(int this);

__declspec(naked) void __fastcall FUN_004DD7C0(int this)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0
        mov     dword ptr [esi], 0x007738ac
        call    FUN_004dd870
        lea     ecx, [esi + 0x10]
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
