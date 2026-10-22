/*
 * FUN_00682980 (16 B true extent; 229 B slice incl. 2 adjacent fns) —
 * in-.text data block function (block 0x682790). Calls FUN_005c8de0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005c8de0(void);

__declspec(naked) void FUN_00682980(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_005c8de0
        ret     4
    }
}
