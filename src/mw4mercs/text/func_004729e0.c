/* FUN_004729e0 - MLR mesh-buffer init (150 B) */

extern int g_7b958c;
extern int g_7d99a0;
extern int g_7d99b0;
extern int g_7d9998;
extern int g_7d999c;

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void func_004729e0(void)
{
    __asm {
        mov eax, dword ptr [g_7b958c]
        push esi
        push eax
        push 0x0
        push 0x76f2c4
        call FUN_006f4710
        push 0x18
        mov dword ptr [g_7d99a0], eax
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz L472a2c
        mov ecx, dword ptr [g_7d99b0]
        push ecx
        push 0x76f2a4
        push 0x59
        mov ecx, esi
        call FUN_004151c0
        mov dword ptr [esi+0x14], 0x472d50
        mov dword ptr [g_7d9998], esi
        jmp L472a36
L472a2c:
        mov dword ptr [g_7d9998], 0x0
L472a36:
        push 0x8
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz L472a6a
        push 0x400
        mov dword ptr [esi], 0x0
        mov dword ptr [esi+0x4], 0x100
        call FUN_004084d0
        add esp, 0x4
        mov dword ptr [esi], eax
        mov dword ptr [g_7d999c], esi
        pop esi
        ret
L472a6a:
        mov dword ptr [g_7d999c], 0x0
        pop esi
        ret
    }
}
