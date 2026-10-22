/*
 * FUN_1001de20 (20 B) - calls FUN_1001bf20(param_1+0x18, param_2).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_1001bf20(void);

__declspec(naked) void __cdecl FUN_1001de20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x4]
        push    eax
        add     ecx, 0x18
        call    FUN_1001bf20
        ret     0x8
    }
}
