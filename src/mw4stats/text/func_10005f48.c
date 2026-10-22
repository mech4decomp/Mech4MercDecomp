/* auto-transcribed gap function 0x10005F48 (296 B); review against reference; stepping stone */
extern void __cdecl FUN_10001170(void);
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_10002fa0(void);
extern void __cdecl FUN_10003b10(void);
extern void __cdecl FUN_10003d60(void);
extern void __cdecl FUN_10003fb0(void);
extern void __cdecl FUN_100040b0(void);
extern void __cdecl FUN_10004210(void);
extern void __cdecl FUN_10006070(void);
extern void __cdecl FUN_10006090(void);
extern void __cdecl FUN_1001f73b(void);
extern int g_100245a8;
extern int g_100245ac;
extern int g_10024ed0;
extern int g_10024ed8;
extern int g_100252e8;
__declspec(naked) void FUN_10005f48(void)
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
            mov eax, dword ptr fs:[0]
            push -1
            push offset FUN_1001f73b
            push eax
            mov dword ptr fs:[0], esp
            sub esp, 0x98
            push ebx
            mov ebx, ecx
            push edi
            lea edi, [ebx + 4]
            mov ecx, edi
            call FUN_10006090
            test eax, eax
            jne lbl_10005f89
            mov eax, dword ptr [esp + 0xb0]
            jmp lbl_1000604f
        lbl_10005f89:
            push esi
            push 0x400
            lea ecx, [esp + 0x10]
            call FUN_10001170
            lea eax, [esp + 0xc]
            push eax
            mov ecx, edi
            mov dword ptr [esp + 0xb0], 0
            call FUN_10003fb0
            test eax, eax
            mov esi, dword ptr [esp + 0xb4]
            je lbl_10006043
            push ebp
            lea ebp, [ebx + 0x30]
        lbl_10005fc2:
            lea ecx, [esp + 0x10]
            push ecx
            mov ecx, edi
            call FUN_100040b0
            push offset g_100252e8
            lea ecx, [esp + 0x14]
            mov ebx, eax
            call FUN_10002fa0
            push eax
            push offset g_100245ac
            push ebp
            push offset g_100245a8
            mov ecx, esi
            call FUN_10003d60
            mov ecx, eax
            call FUN_10006070
            mov ecx, eax
            call FUN_10003d60
            mov ecx, eax
            call FUN_10003d60
            mov ecx, eax
            call FUN_10003d60
            push ebx
            push esi
            call FUN_10003b10
            add esp, 8
            push offset g_10024ed8
            push ebp
            push offset g_10024ed0
            mov ecx, esi
            call FUN_10003d60
            mov ecx, eax
            call FUN_10006070
            mov ecx, eax
            call FUN_10003d60
            mov ecx, edi
            call FUN_10004210
            test eax, eax
            jne lbl_10005fc2
            pop ebp
        lbl_10006043:
            lea ecx, [esp + 0xc]
            call FUN_10001190
            mov eax, esi
            pop esi
        lbl_1000604f:
            mov ecx, dword ptr [esp + 0xa0]
            pop edi
            pop ebx
            mov dword ptr fs:[0], ecx
            add esp, 0xa4
            ret 4
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
