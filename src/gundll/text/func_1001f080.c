/*
 * FUN_1001f080 (30 B) — __thiscall ctor.
 * Calls base ctor FUN_1001c870(this, 0xc200, param_1), sets vtable 0x1004a9e4.
 */

extern void __cdecl FUN_1001c870(void);

__declspec(naked) void FUN_1001f080(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0xc200
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x1004a9e4
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
