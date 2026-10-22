/* auto-transcribed gap function 0x10001E57 (62 B); review against reference; stepping stone */
extern void __cdecl FUN_10001e95(void);
extern void __cdecl FUN_100031b8(void);
extern int g_1000553c;
__declspec(naked) void FUN_10001e57(void)
{
    __asm {
            push dword ptr [g_1000553c]
            push dword ptr [esp + 8]
            call lbl_10001e69
            pop ecx
            pop ecx
            ret
        lbl_10001e69:
            cmp dword ptr [esp + 4], -0x20
            ja lbl_10001e92
        lbl_10001e70:
            push dword ptr [esp + 4]
            call FUN_10001e95
            test eax, eax
            pop ecx
            jne lbl_10001e94
            cmp dword ptr [esp + 8], eax
            je lbl_10001e94
            push dword ptr [esp + 4]
            call FUN_100031b8
            test eax, eax
            pop ecx
            jne lbl_10001e70
        lbl_10001e92:
            xor eax, eax
        lbl_10001e94:
            ret
    }
}
