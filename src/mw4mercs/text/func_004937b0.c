/*
 * FUN_004937B0 (55 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 * Constructor: initializes fields, calls FUN_00491280 on this+0x48,
 * sets vtable to 0x770108.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00491280(void *param_1);

__declspec(naked) void __fastcall FUN_004937b0(void)
{
    __asm {
        xor     eax, eax
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi + 4], eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x18], eax
        mov     dword ptr [esi + 0x14], eax
        mov     eax, 2
        mov     dword ptr [esi + 0x20], eax
        lea     ecx, [esi + 0x48]
        mov     dword ptr [esi + 0x34], eax
        call    FUN_00491280
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [esi + 0xc], eax
        _emit 0xC7  /* mov dword ptr [esi], 0x770108 */
        _emit 0x06
        _emit 0x08
        _emit 0x01
        _emit 0x77
        _emit 0x00
        mov     eax, esi
        pop     esi
        ret     4
    }
}
