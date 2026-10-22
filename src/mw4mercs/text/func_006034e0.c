/*
 * FUN_006034e0 (39 B) — destroys the AirplaneAnimationStateEngine object
 * stored in the global (calls its dtor then frees it) and nulls the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f26bc;
extern void __cdecl FUN_004dd340(void);
extern void __cdecl FUN_004084e0(int);

__declspec(naked) void FUN_006034e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007f26bc]
        test    esi, esi
        jz      L_skip
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov     dword ptr [g_007f26bc], 0x0
        pop     esi
        ret
    }
}
