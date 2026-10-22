/*
 * FUN_1001e250 (30 B) — __thiscall ctor.
 * Calls base ctor FUN_1001c720(this, 0xc102, param_1), sets vtable 0x1004a9a8.
 */

extern void __cdecl FUN_1001c720(void);

__declspec(naked) void FUN_1001e250(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0xc102
        mov     esi, ecx
        call    FUN_1001c720
        mov     dword ptr [esi], 0x1004a9a8
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
