/* FUN_0047a310 - MLR static init (250 B) */

extern int g_7b958c;
extern int g_76f490;   /* string "MLR_I_PMesh" */
extern int g_7da5ec;
extern int g_7da5fc;
extern int g_76f470;   /* string "MidLevelRenderer::MLR_I_PMesh" */
extern int g_47abc0;   /* function pointer stored into [esi+0x14] */
extern int g_7da5e4;
extern int g_7da5e0;
extern int g_7da5dc;
extern int g_7da5e8;

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void func_0047a310(void)
{
    __asm {
        mov eax, dword ptr [g_7b958c]
        push ebx
        push esi
        push eax
        xor ebx, ebx
        push ebx
        push offset g_76f490
        call FUN_006f4710
        push 0x18
        mov dword ptr [g_7da5ec], eax
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        cmp esi, ebx
        jz L47a35e
        mov ecx, dword ptr [g_7da5fc]
        push ecx
        push offset g_76f470
        push 0x57
        mov ecx, esi
        call FUN_004151c0
        mov dword ptr [esi+0x14], offset g_47abc0
        mov dword ptr [g_7da5e4], esi
        jmp L47a364
L47a35e:
        mov dword ptr [g_7da5e4], ebx
L47a364:
        push 0x8
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        cmp esi, ebx
        jz L47a394
        push 0x100
        mov dword ptr [esi], ebx
        mov dword ptr [esi+0x4], 0x20
        call FUN_004084d0
        add esp, 0x4
        mov dword ptr [esi], eax
        mov dword ptr [g_7da5e0], esi
        jmp L47a39a
L47a394:
        mov dword ptr [g_7da5e0], ebx
L47a39a:
        push 0x8
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        cmp esi, ebx
        jz L47a3ca
        push 0x80
        mov dword ptr [esi], ebx
        mov dword ptr [esi+0x4], 0x20
        call FUN_004084d0
        add esp, 0x4
        mov dword ptr [esi], eax
        mov dword ptr [g_7da5dc], esi
        jmp L47a3d0
L47a3ca:
        mov dword ptr [g_7da5dc], ebx
L47a3d0:
        push 0x8
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        cmp esi, ebx
        jz L47a401
        push 0x400
        mov dword ptr [esi], ebx
        mov dword ptr [esi+0x4], 0x400
        call FUN_004084d0
        add esp, 0x4
        mov dword ptr [esi], eax
        mov dword ptr [g_7da5e8], esi
        pop esi
        pop ebx
        ret
L47a401:
        pop esi
        mov dword ptr [g_7da5e8], ebx
        pop ebx
        ret
    }
}
