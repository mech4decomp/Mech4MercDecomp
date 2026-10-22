/*
 * FUN_004a70f0 (39 B) — MLR: global ShapeCloud singleton teardown.
 * Destroys the object at g_007da990 (calls FUN_00415200 then frees via
 * FUN_004084e0) and nulls the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da990;
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(int p);

__declspec(naked) void FUN_004a70f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007da990]
        test    esi, esi
        jz      L710b
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L710b:
        mov     dword ptr [g_007da990], 0x0
        pop     esi
        ret
    }
}
