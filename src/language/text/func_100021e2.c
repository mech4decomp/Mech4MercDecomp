/* auto-transcribed gap function 0x100021E2 (62 B); review against reference; stepping stone */
extern void __cdecl FUN_10002220(void);
extern void __cdecl FUN_10003f9e(void);
extern int g_10008c18;
__declspec(naked) void FUN_100021e2(void)
{
    __asm {
            push dword ptr [g_10008c18]
            push dword ptr [esp + 8]
            call lbl_100021f4
            pop ecx
            pop ecx
            ret
        lbl_100021f4:
            cmp dword ptr [esp + 4], -0x20
            ja lbl_1000221d
        lbl_100021fb:
            push dword ptr [esp + 4]
            call FUN_10002220
            test eax, eax
            pop ecx
            jne lbl_1000221f
            cmp dword ptr [esp + 8], eax
            je lbl_1000221f
            push dword ptr [esp + 4]
            call FUN_10003f9e
            test eax, eax
            pop ecx
            jne lbl_100021fb
        lbl_1000221d:
            xor eax, eax
        lbl_1000221f:
            ret
    }
}
