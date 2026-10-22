/*
 * FUN_005bf9d0 (41 B) - __thiscall constructor.
 *
 * Calls FUN_00415180(DAT_007b8c10), zeroes fields 0x14/0x08/0x0c/0x18/0x1c,
 * sets vtable ptr at [this] to 0x787258, returns this in EAX. RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00415180(void *param);

__declspec(naked) void __stdcall FUN_005bf9d0(void)
{
    

extern int DAT_007b8c10;
__asm {
        mov eax, dword ptr [DAT_007b8c10]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x18], eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi], 0x787258
        mov     eax, esi
        pop     esi
        ret
    }


}
