/*
 * FUN_00660110 (26 B) — __thiscall ctor. Calls base ctor FUN_00661da0,
 * sub-object ctor FUN_006a4650 on [this+0x24], installs vtable
 * 0x00795230, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00661da0(void);
extern void __cdecl FUN_006a4650(void);

__declspec(naked) void FUN_00660110(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_006a4650
        mov     dword ptr [esi], 0x795230
        mov     eax, esi
        pop     esi
        ret
    }
}
