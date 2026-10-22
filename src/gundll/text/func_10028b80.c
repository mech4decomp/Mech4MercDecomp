/*
 * FUN_10028b80 (50 B) — __thiscall (RET 0x4).
 * Constructor: FUN_1001c870(param_1, 0x5256); zero this+0x24..0x38; set vtable 0x1004acb4; return this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void);

__declspec(naked) void FUN_10028b80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5256
        mov     esi, ecx
        call    FUN_1001c870
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi + 0x34], eax
        mov     dword ptr [esi + 0x38], eax
        mov     dword ptr [esi], 0x1004acb4
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
