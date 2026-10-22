/*
 * FUN_0075de40 (extent 0x75de40-0x75deb4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b3b0;
extern int    g_0076b3b8;
extern int    g_0076b3bc;
extern int    g_0076b3c0;
extern int    g_0076b3c4;
extern int    g_0076b3c8;
extern int    g_0076b3cc;
extern int    g_0076b3d0;
extern int    g_0076b3d4;
extern int    g_0076b3d8;
extern int    g_0076b3dc;
extern int    g_0076b3e4;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0075df96(void);

__declspec(naked) void FUN_0075de40(void)
{
    __asm {
        jmp    dword ptr [g_0076b3e4]
        jmp    dword ptr [g_0076b3d4]
        jmp    dword ptr [g_0076b3dc]
        jmp    dword ptr [g_0076b3d8]
        jmp    dword ptr [g_0076b3c8]
        jmp    dword ptr [g_0076b3d0]
        jmp    dword ptr [g_0076b3cc]
        jmp    dword ptr [g_0076b3bc]
        jmp    dword ptr [g_0076b3c4]
        jmp    dword ptr [g_0076b3c0]
        jmp    dword ptr [g_0076b3b0]
        jmp    dword ptr [g_0076b3b8]
        mov    eax, ecx
        mov    dword ptr [eax], 0x7afae8
        ret    4
        push    esi
        mov    esi, ecx
        call    FUN_0075df96
        test    byte ptr [esp + 8], 1
        je    L_dea9
        push    esi
        call    FUN_004084e0
        pop    ecx
L_dea9:
        mov    eax, esi
        pop    esi
        ret    4
        mov    eax, ecx
        ret    4
    }
}
