/*
 * FUN_006F3160 (86 B) — Constructor: initializes an object with two
 * sub-objects at +0x10 and +0x24.
 *
 * __fastcall (ECX = this). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void *);
extern void FUN_00416990(int, int);

__declspec(naked) void __fastcall FUN_006f3160(void)
{
    __asm {
        _emit   0xA1
        _emit   0x10
        _emit   0x8C
        _emit   0x7B
        _emit   0x00
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        push    1
        lea     edi, [esi + 0x10]
        push    0
        mov     ecx, edi
        mov     dword ptr [esi + 8], 0
        mov     dword ptr [esi + 0xC], 0
        mov     dword ptr [esi], 0x76CD9C
        call    FUN_00416990
        mov     dword ptr [edi], 0x79F68C
        push    1
        lea     edi, [esi + 0x24]
        push    0
        mov     ecx, edi
        call    FUN_00416990
        mov     dword ptr [edi], 0x79F6C4
        pop     edi
        mov     dword ptr [esi], 0x79F6B8
        mov     eax, esi
        pop     esi
        ret
    }
}
