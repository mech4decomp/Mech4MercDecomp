/*
 * FUN_004152f0 (75 B) — archive/database registered-class subsystem init.
 * Pushes a "Stuff" context (FUN_006f4710("ConnectionEngine",0,g_007b8814)),
 * allocates 0x14 bytes (FUN_004084d0), and if non-null registers a
 * "Stuff::Plug" class (FUN_004151c0) storing the result in g_007b8c10;
 * else clears g_007b8c10. __cdecl, no args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007b8814;
extern int  g_007b8c14;
extern int  g_007b8c08;
extern int  g_007b8c10;

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void func_004152f0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8814]
        push    eax
        push    0
        push    0x76d400                 ; "ConnectionEngine"
        call    FUN_006f4710
        push    0x14
        mov     dword ptr [g_007b8c14], eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L1
        mov     ecx, dword ptr [g_007b8c08]
        push    ecx
        push    0x76d3f4                 ; "Stuff::Plug"
        push    0x14
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007b8c10], eax
        ret
    L1:
        mov     dword ptr [g_007b8c10], 0
        ret
    }
}
