/* func_004dfd00 - FUN_004dfd00 (55 B) - __cdecl
 * Allocates an Adept::ApplicationTask (0x14 bytes) and constructs it,
 * storing the result in g_007dc6b8; null on allocation failure.
 */
extern void *__cdecl FUN_004084d0(unsigned int);
extern void *__cdecl FUN_004151c0(void);
extern int g_007b8c10;
extern int g_007dc6b8;

__declspec(naked) void func_004dfd00(void)
{
    __asm {
        push 0x14
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L_null
        mov ecx, dword ptr [g_007b8c10]
        push ecx
        push 0x773968          /* "Adept::ApplicationTask" */
        push 0x1ea
        mov ecx, eax
        call FUN_004151c0
        mov dword ptr [g_007dc6b8], eax
        ret
L_null:
        mov dword ptr [g_007dc6b8], 0
        ret
    }
}
