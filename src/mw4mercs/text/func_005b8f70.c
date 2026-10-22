/*
 * FUN_005b8f70 (39 B) — Sensor::ExecutionStateEngine teardown.
 *
 * If global 0x007f213c is non-null, calls FUN_004dd340 (thiscall) then
 * frees it via FUN_004084e0. Clears the global to 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004dd340(void *param);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005b8f70(void)
{
    

extern int DAT_007f213c;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f213c]
        test    esi, esi
        jz      L_clear
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_clear:
        mov dword ptr [DAT_007f213c], 0x0
        pop     esi
        ret
    }


}
