/*
 * FUN_00416bf0 (36 B) — __thiscall constructor (RET 0x4). Sets vtable
 * 0x76d510, calls FUN_00415c10(*(this+4)), copies [arg+0x10] into
 * [this+0x10], returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415c10(int);

__declspec(naked) void FUN_00416bf0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [edi + 0x4]
        mov     esi, ecx
        push    eax
        call    FUN_00415c10
        mov     ecx, dword ptr [edi + 0x10]
        pop     edi
        mov     dword ptr [esi], 0x76d510
        mov     dword ptr [esi + 0x10], ecx
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
