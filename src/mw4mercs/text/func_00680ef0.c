/*
 * FUN_00680ef0 (69 B) - Constructor.
 *
 * __thiscall (ECX = this), RET 0x14 (5 stack params). Calls
 * FUN_00415180(DAT_007b8c10), zeroes fields at +8/+0xc, stores the 5
 * params into +0x10..+0x20, sets vtable to 0x798a34, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007b8c10;
extern void FUN_00415180(int);

__declspec(naked) void *__fastcall FUN_00680ef0(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007b8c10]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        xor     eax, eax
        mov     dword ptr [esi + 8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [esi + 0x1c], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x20], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi], 0x798a34
        mov     dword ptr [esi + 0x14], ecx
        mov     dword ptr [esi + 0x18], edx
        mov     eax, esi
        pop     esi
        ret     0x14
    }
}
