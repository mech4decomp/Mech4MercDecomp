/* auto-transcribed gap function 0x1001305F (33 B); review against reference; stepping stone */
extern void __cdecl FUN_1001ee22(void);
extern int g_10021688;
__declspec(naked) void FUN_1001305f(void)
{
    __asm {
            nop
            mov al, byte ptr [esp + 4]
            push esi
            mov esi, ecx
            test al, 1
            mov dword ptr [esi], offset g_10021688
            je lbl_1001307a
            push esi
            call FUN_1001ee22
            add esp, 4
        lbl_1001307a:
            mov eax, esi
            pop esi
            ret 4
    }
}
