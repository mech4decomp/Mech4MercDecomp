/*
 * FUN_005272d0 (44 B) — XOR-based hash/decrypt helper.
 *
 * XORs two global pointers, dereferences field_2C, XORs with constant 0x85739531,
 * calls FUN_0050B2C0.
 * Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_0050b2c0(int val);

/* Absolute data symbols (dword) referenced by the function */
extern int DAT_007dab40;
extern int DAT_007dab44;
extern int DAT_007d2d30;

__declspec(naked) void FUN_005272d0(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007dab44]   ; mov eax, [0x007DAB44]
        mov     edx, dword ptr [DAT_007dab40]   ; mov edx, [0x007DAB40]
        mov     ecx, [eax]
        xor     ecx, edx
        mov     edx, [ecx + 0x2C]
        mov     ecx, dword ptr [DAT_007d2d30]   ; mov ecx, [0x007D2D30]
        xor     edx, 0x85739531
        push    edx
        call    FUN_0050b2c0
        mov     eax, 1
        ret     8
    }
}
