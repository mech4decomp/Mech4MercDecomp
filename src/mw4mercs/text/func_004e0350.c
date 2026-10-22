/* func_004e0350 - FUN_004e0350 (55 B) - __cdecl
 * Allocates an Adept::NetworkEvent task (0x14 bytes) and constructs it,
 * storing the result in g_007dc6cc; null on allocation failure.
 */
extern void *__cdecl FUN_004084d0(unsigned int);
extern void *__cdecl FUN_004151c0(void);
extern int g_007b8c10;
extern int g_007dc6cc;

__declspec(naked) void func_004e0350(void)
{
    __asm {
        push 0x14
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L_null
        mov ecx, dword ptr [g_007b8c10]
        push ecx
        push 0x773aa0          /* "Adept::NetworkEvent" */
        push 0x1c3
        mov ecx, eax
        call FUN_004151c0
        mov dword ptr [g_007dc6cc], eax
        ret
L_null:
        mov dword ptr [g_007dc6cc], 0
        ret
    }
}
