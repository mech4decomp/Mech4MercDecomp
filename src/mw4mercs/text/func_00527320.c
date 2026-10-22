/*
 * FUN_00527320 (44 B) — __stdcall method on object at ecx.
 * Pushes esi, lea esi, [ecx+0x40eb8], calls FUN_0050A5C0,
 * then calls vtable+0xC(this, 0), sets [esi+8]=-20, returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_0050A5C0(void *);

__declspec(naked) int __stdcall FUN_00527320(void)
{
    __asm {
        push    esi
        lea     esi, [ecx + 0x40EB8]
        _emit   0x8B
        _emit   0x0D
        _emit   0x30
        _emit   0xD2
        _emit   0x7D
        _emit   0x00
        push    esi
        call    FUN_0050A5C0
        mov     eax, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [eax + 0xC]
        mov     dword ptr [esi + 8], 0xFFFFFFEC
        mov     eax, 1
        pop     esi
        ret     8
    }
}
