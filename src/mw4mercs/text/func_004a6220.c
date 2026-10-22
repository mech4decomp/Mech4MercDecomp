/*
 * FUN_004a6220 (39 B) — MLR: destroys the global object at 0x007da98c
 * (calls its destructor FUN_00415200 then frees via FUN_004084e0) and
 * nulls the global. __thiscall-style destructor dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da98c;
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(int p);

__declspec(naked) void FUN_004a6220(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007da98c]
        test    esi, esi
        jz      L623b
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L623b:
        mov     dword ptr [g_007da98c], 0x0
        pop     esi
        ret
    }
}
