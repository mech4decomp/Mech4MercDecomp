/* func_004e01f0 - FUN_004e01f0 (75 B) - __cdecl
 * Tears down the Adept::Event task and Event object globals, freeing
 * each and nulling the globals.
 */
extern void *__cdecl FUN_00415200(void);
extern void *__cdecl FUN_004084e0(void *);
extern void *__cdecl FUN_00415e30(void);
extern int g_007dc6c8;
extern int g_007dc6c4;

__declspec(naked) void func_004e01f0(void)
{
    __asm {
        push esi
        mov esi, dword ptr [g_007dc6c8]
        test esi, esi
        jz L1
        mov ecx, esi
        call FUN_00415200
        push esi
        call FUN_004084e0
        add esp, 0x4
L1:
        mov esi, dword ptr [g_007dc6c4]
        test esi, esi
        mov dword ptr [g_007dc6c8], 0
        jz L2
        mov ecx, esi
        call FUN_00415e30
        push esi
        call FUN_004084e0
        add esp, 0x4
L2:
        mov dword ptr [g_007dc6c4], 0
        pop esi
        ret
    }
}
