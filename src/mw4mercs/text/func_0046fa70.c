/* FUN_0046fa70 - MLR mesh-buffer teardown (130 B) */

extern int g_7d9980;
extern int g_7d997c;
extern int g_7d9984;
extern int g_7d9988;

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void func_0046fa70(void)
{
    __asm {
        push esi
        mov esi, dword ptr [g_7d9980]
        test esi, esi
        jz L46fa93
        mov eax, dword ptr [esi]
        test eax, eax
        jz L46fa8a
        push eax
        call FUN_004084e0
        add esp, 0x4
L46fa8a:
        push esi
        call FUN_004084e0
        add esp, 0x4
L46fa93:
        mov esi, dword ptr [g_7d997c]
        test esi, esi
        jz L46fab5
        mov eax, dword ptr [esi]
        test eax, eax
        jz L46faac
        push eax
        call FUN_004084e0
        add esp, 0x4
L46faac:
        push esi
        call FUN_004084e0
        add esp, 0x4
L46fab5:
        mov esi, dword ptr [g_7d9984]
        test esi, esi
        jz L46facf
        mov ecx, esi
        call FUN_00415200
        push esi
        call FUN_004084e0
        add esp, 0x4
L46facf:
        mov eax, dword ptr [g_7d9988]
        push 0x1
        push eax
        mov dword ptr [g_7d9984], 0x0
        call FUN_006f4850
        mov dword ptr [g_7d9988], 0x0
        pop esi
        ret
    }
}
