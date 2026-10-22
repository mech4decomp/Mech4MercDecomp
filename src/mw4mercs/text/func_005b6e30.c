/*
 * FUN_005b6e30 (17 B) — __cdecl, 1 param.
 *
 * Calls FUN_006f3c80(param_1, DAT_007dc770).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f3c80(void *a, void *b);

__declspec(naked) void __cdecl FUN_005b6e30(void *param_1)
{
    

extern int DAT_007dc770;
__asm {
        mov eax, dword ptr [DAT_007dc770]
        mov     ecx, dword ptr [esp + 0x4]
        push    eax
        push    ecx
        call    FUN_006f3c80
        ret
    }


}
