/*
 * FUN_004ebde0 (97 B) — __thiscall constructor (RET 0x1c). Calls
 * FUN_00415180 with arg0, then fills the object's fields from the remaining
 * args and sets the vtable pointer to 0x774724.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(int);

__declspec(naked) void FUN_004ebde0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x14], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esi + 0x10], edx
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x20], eax
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x1c], edx
        mov     dx, word ptr [eax]
        mov     ax, word ptr [eax + 0x2]
        mov     word ptr [esi + 0x24], dx
        mov     edx, dword ptr [esp + 0xc]
        xor     ecx, ecx
        mov     word ptr [esi + 0x26], ax
        mov     dword ptr [esi + 0x8], ecx
        mov     dword ptr [esi + 0xc], ecx
        mov     dword ptr [esi + 0x28], edx
        mov     dword ptr [esi + 0x2c], ecx
        mov     dword ptr [esi + 0x30], 0x4
        mov     dword ptr [esi], 0x774724
        mov     eax, esi
        pop     esi
        ret     0x1c
    }
}
