/* auto-transcribed gap function 0x5E0136CF (97 B); review against reference; stepping stone */
extern void __cdecl FUN_5e027f1a(void);
extern void __cdecl FUN_5e027f6a(void);
extern int g_5e036008;
extern int g_5e038990;
extern int g_5e77a580;
extern int g_5e77a594;
extern int g_5e77a834;
__declspec(naked) void FUN_5e0136cf(void)
{
    __asm {
            nop
            mov eax, dword ptr [g_5e77a834]
            push esi
            mov esi, dword ptr [g_5e038990]
            mov dword ptr [g_5e77a580], 0x400088
            test eax, eax
            mov dword ptr [g_5e77a594], 0xff00ff
            mov dword ptr [g_5e038990], offset FUN_5e027f6a
            jne lbl_5e013708
            mov dword ptr [g_5e038990], offset FUN_5e027f1a
        lbl_5e013708:
            call dword ptr [g_5e036008]
            mov dword ptr [g_5e038990], esi
            pop esi
            ret
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            ret
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
    }
}
