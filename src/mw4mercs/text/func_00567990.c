/*
 * FUN_00567990 (72 B) — __cdecl, no args. Advances a byte-stream cursor,
 * updates globals, calls FUN_0064db40, and pops a stack value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_007b5a28;
extern void __cdecl FUN_0064db40(void);

__declspec(naked) void FUN_00567990(void)
{
    __asm {
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        inc     eax
        mov     dword ptr [DAT_00805908], ecx
        mov     dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [DAT_0080592c]
        mov     edx, dword ptr [eax]
        sub     eax, 4
        mov     dword ptr [DAT_0080592c], eax
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     edx
        inc     eax
        mov     dword ptr [DAT_00805918], eax
        mov     dword ptr [DAT_007b5a28], edx
        mov     dword ptr [DAT_00805908], ecx
        xor     eax, eax
        ret
    }
}
