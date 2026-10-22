/*
 * FUN_005391a0 (37 B) — XOR-based hash/decrypt helper.
 *
 * XORs two global pointers, dereferences, XORs with constant 0x85739531,
 * calls FUN_005BDF90 with arg and result.
 * Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_005bdf90(int arg, int val);

/* extern data symbols for absolute-memory operands */
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void FUN_005391a0(void)
{
    __asm {
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     eax, [esp + 4]
        xor     edx, ecx
        mov     ecx, [edx]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_005bdf90
        ret     8
    }
}
