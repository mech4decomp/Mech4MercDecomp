/*
 * FUN_005bf760 (30 B) - __thiscall destructor.
 *
 * Saves this (ECX) in ESI, sets vtable pointer at [this] to 0x78721c,
 * calls FUN_004084e0(this->field_0x14), then FUN_00415380() with
 * ECX=this. RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *param);
extern void __stdcall FUN_00415380(void);

__declspec(naked) void __stdcall FUN_005bf760(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14]
        push    eax
        mov     dword ptr [esi], 0x78721c
        call    FUN_004084e0
        add     esp, 0x4
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
