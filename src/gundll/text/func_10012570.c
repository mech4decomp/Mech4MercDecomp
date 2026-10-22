/*
 * FUN_10012570 (41 B) - __thiscall, RET 0x4. Calls shared root ctor
 * FUN_1001c870(this,0x4209,param_1), zeroes this+0x24..0x2c, sets vtable
 * 0x10049824, returns this.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c870(void);   /* rel32 call */

__declspec(naked) void FUN_10012570(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    eax
        push    0x4209
        mov     esi, ecx
        call    FUN_1001c870
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi], 0x10049824
        mov     eax, esi
        pop     esi
        ret     4
    }
}
