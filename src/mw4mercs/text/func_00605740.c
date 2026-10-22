/*
 * FUN_00605740 (24 B) — __thiscall. Calls FUN_0041fd80 on (this+0x20), then
 * FUN_004179b0 on (retval+0x24) with the incoming arg. RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_00605740(void)
{
    __asm {
        add     ecx, 0x20
        call    FUN_0041fd80
        mov     ecx, dword ptr [esp + 4]
        push    ecx
        lea     ecx, [eax + 0x24]
        call    FUN_004179b0
        ret     4
    }
}
