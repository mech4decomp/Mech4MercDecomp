/* FUN_00472a80 - MLR mesh-buffer teardown (106 B) */

extern int g_7d999c;
extern int g_7d9998;
extern int g_7d99a0;

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void func_00472a80(void)
{
    __asm {
        push esi
        mov esi, dword ptr [g_7d999c]
        test esi, esi
        jz L472aa3
        mov eax, dword ptr [esi]
        test eax, eax
        jz L472a9a
        push eax
        call FUN_004084e0
        add esp, 0x4
L472a9a:
        push esi
        call FUN_004084e0
        add esp, 0x4
L472aa3:
        mov esi, dword ptr [g_7d9998]
        test esi, esi
        mov dword ptr [g_7d999c], 0x0
        jz L472ac7
        mov ecx, esi
        call FUN_00415200
        push esi
        call FUN_004084e0
        add esp, 0x4
L472ac7:
        mov eax, dword ptr [g_7d99a0]
        push 0x1
        push eax
        mov dword ptr [g_7d9998], 0x0
        call FUN_006f4850
        mov dword ptr [g_7d99a0], 0x0
        pop esi
        ret
    }
}
