/*
 * FUN_00446db0 (39 B) — MLR object destructor: destroys the object at
 * g_007b9890 (FUN_00415200), frees it (FUN_004084e0) and nulls the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9890;

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00446db0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b9890]
        test    esi, esi
        jz      Lcb
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
Lcb:
        mov     dword ptr [g_007b9890], 0
        pop     esi
        ret
    }
}
