/* auto-transcribed gap function 0x100010DF (208 B); review against reference; stepping stone */
extern void __cdecl FUN_10001000(void);
extern void __cdecl FUN_10001006(void);
extern void __cdecl FUN_10001aeb(void);
extern void __cdecl FUN_10001b24(void);
extern int g_10005030;
extern int g_10005360;
extern int g_1000536c;
extern int g_10005370;
extern int g_100058dc;
__declspec(naked) void FUN_100010df(void)
{
    __asm {
            push ebp
            mov ebp, esp
            push ebx
            mov ebx, dword ptr [ebp + 8]
            push esi
            mov esi, dword ptr [ebp + 0xc]
            push edi
            mov edi, dword ptr [ebp + 0x10]
            test esi, esi
            jne lbl_100010fb
            cmp dword ptr [g_10005360], 0
            jmp lbl_10001121
        lbl_100010fb:
            cmp esi, 1
            je lbl_10001105
            cmp esi, 2
            jne lbl_10001127
        lbl_10001105:
            mov eax, dword ptr [g_100058dc]
            test eax, eax
            je lbl_10001117
            push edi
            push esi
            push ebx
            call eax
            test eax, eax
            je lbl_10001123
        lbl_10001117:
            push edi
            push esi
            push ebx
            call FUN_10001006
            test eax, eax
        lbl_10001121:
            jne lbl_10001127
        lbl_10001123:
            xor eax, eax
            jmp lbl_10001175
        lbl_10001127:
            push edi
            push esi
            push ebx
            call FUN_10001000
            cmp esi, 1
            mov dword ptr [ebp + 0xc], eax
            jne lbl_10001143
            test eax, eax
            jne lbl_10001172
            push edi
            push eax
            push ebx
            call FUN_10001006
        lbl_10001143:
            test esi, esi
            je lbl_1000114c
            cmp esi, 3
            jne lbl_10001172
        lbl_1000114c:
            push edi
            push esi
            push ebx
            call FUN_10001006
            test eax, eax
            jne lbl_1000115b
            and dword ptr [ebp + 0xc], eax
        lbl_1000115b:
            cmp dword ptr [ebp + 0xc], 0
            je lbl_10001172
            mov eax, dword ptr [g_100058dc]
            test eax, eax
            je lbl_10001172
            push edi
            push esi
            push ebx
            call eax
            mov dword ptr [ebp + 0xc], eax
        lbl_10001172:
            mov eax, dword ptr [ebp + 0xc]
        lbl_10001175:
            pop edi
            pop esi
            pop ebx
            pop ebp
            ret 0xc
            mov eax, dword ptr [g_1000536c]
            cmp eax, 1
            je lbl_10001193
            test eax, eax
            jne lbl_10001198
            cmp dword ptr [g_10005370], 1
            jne lbl_10001198
        lbl_10001193:
            call FUN_10001aeb
        lbl_10001198:
            push dword ptr [esp + 4]
            call FUN_10001b24
            push 0xff
            call dword ptr [g_10005030]
            pop ecx
            pop ecx
            ret
    }
}
