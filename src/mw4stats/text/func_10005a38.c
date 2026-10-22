/* auto-transcribed gap function 0x10005A38 (120 B); review against reference; stepping stone */
extern void __cdecl FUN_10003d60(void);
extern void __cdecl FUN_10003fa0(void);
extern void __cdecl FUN_10004210(void);
extern void __cdecl FUN_10005430(void);
extern int g_100252dc;
extern int g_100252e0;
extern int g_100252e4;
__declspec(naked) void FUN_10005a38(void)
{
    __asm {
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            push esi
            lea esi, [ecx + 4]
            mov ecx, esi
            call FUN_10003fa0
            test eax, eax
            je lbl_10005aa7
            push edi
            mov edi, dword ptr [esp + 0xc]
        lbl_10005a54:
            mov ecx, dword ptr [eax + 0xc]
            mov edx, dword ptr [eax + 8]
            push offset g_100252e4
            push ecx
            mov ecx, dword ptr [eax + 4]
            push edx
            mov edx, dword ptr [eax]
            push offset g_100252e0
            push ecx
            push edx
            push offset g_100252dc
            mov ecx, edi
            call FUN_10003d60
            mov ecx, eax
            call FUN_10005430
            mov ecx, eax
            call FUN_10003d60
            mov ecx, eax
            call FUN_10005430
            mov ecx, eax
            call FUN_10003d60
            mov ecx, esi
            call FUN_10004210
            test eax, eax
            jne lbl_10005a54
            mov eax, edi
            pop edi
            pop esi
            ret 4
        lbl_10005aa7:
            mov eax, dword ptr [esp + 8]
            pop esi
            ret 4
            nop
    }
}
