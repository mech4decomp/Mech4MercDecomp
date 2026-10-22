/* func_004e0160 - FUN_004e0160 (131 B) - __cdecl
 * Creates an "Event" object (0x2c bytes) and an Adept::Event task
 * (0x14 bytes), storing them in globals.
 */
extern void *__cdecl FUN_004084d0(unsigned int);
extern void *__cdecl FUN_00415d70(void);
extern void *__cdecl FUN_004151c0(void);
extern int g_007dc130;
extern int g_007dc6c4;
extern int g_007dc6c0;
extern int g_007dc6c8;
extern int g_007b8c10;

__declspec(naked) void func_004e0160(void)
{
    __asm {
        push esi
        push edi
        push 0x2c
        call FUN_004084d0
        mov esi, eax
        xor edi, edi
        add esp, 0x4
        cmp esi, edi
        jz L1
        mov eax, dword ptr [g_007dc130]
        mov ecx, dword ptr [esp+0x10]  /* param_2 */
        mov edx, dword ptr [esp+0xc]   /* param_1 */
        push eax
        push 0x773a64                 /* "Event" */
        push ecx
        push edx
        push 0x24
        mov ecx, esi
        call FUN_00415d70
        mov dword ptr [g_007dc6c4], esi
        jmp L2
L1:
        mov dword ptr [g_007dc6c4], edi
L2:
        push 0x14
        call FUN_004084d0
        add esp, 0x4
        cmp eax, edi
        jz L3
        mov ecx, dword ptr [g_007b8c10]
        push ecx
        push 0x773a54                 /* "Adept::Event" */
        push 0x1c2
        mov ecx, eax
        call FUN_004151c0
        mov dword ptr [g_007dc6c0], edi
        pop edi
        mov dword ptr [g_007dc6c8], eax
        pop esi
        ret
L3:
        mov dword ptr [g_007dc6c8], edi
        mov dword ptr [g_007dc6c0], edi
        pop edi
        pop esi
        ret
    }
}
