/* FUN_0047a410 - MLR static teardown (174 B) */

extern int g_7da5e8;
extern int g_7da5dc;
extern int g_7da5e0;
extern int g_7da5e4;
extern int g_7da5ec;

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void func_0047a410(void)
{
    __asm {
        push esi
        mov esi, dword ptr [g_7da5e8]
        test esi, esi
        jz L47a433
        mov eax, dword ptr [esi]
        test eax, eax
        jz L47a42a
        push eax
        call FUN_004084e0
        add esp, 0x4
L47a42a:
        push esi
        call FUN_004084e0
        add esp, 0x4
L47a433:
        mov esi, dword ptr [g_7da5dc]
        test esi, esi
        mov dword ptr [g_7da5e8], 0x0
        jz L47a45f
        mov eax, dword ptr [esi]
        test eax, eax
        jz L47a456
        push eax
        call FUN_004084e0
        add esp, 0x4
L47a456:
        push esi
        call FUN_004084e0
        add esp, 0x4
L47a45f:
        mov esi, dword ptr [g_7da5e0]
        test esi, esi
        jz L47a481
        mov eax, dword ptr [esi]
        test eax, eax
        jz L47a478
        push eax
        call FUN_004084e0
        add esp, 0x4
L47a478:
        push esi
        call FUN_004084e0
        add esp, 0x4
L47a481:
        mov esi, dword ptr [g_7da5e4]
        test esi, esi
        jz L47a49b
        mov ecx, esi
        call FUN_00415200
        push esi
        call FUN_004084e0
        add esp, 0x4
L47a49b:
        mov eax, dword ptr [g_7da5ec]
        push 0x1
        push eax
        mov dword ptr [g_7da5e4], 0x0
        call FUN_006f4850
        mov dword ptr [g_7da5ec], 0x0
        pop esi
        ret
    }
}
