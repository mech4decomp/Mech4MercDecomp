/*
 * ZlogLib.dll - FUN_10001e01 (0x10001E01, 131 B, __cdecl)
 * Decodes a byte range (XOR 0xa7) into a hex string via sprintf/strcat,
 * strcpy to output, sets *param_2 = DAT_100274a4.
 * Transcribed from ZlogLib.dll reference bytes.
 */

extern unsigned int g_100274a0;
extern unsigned int g_100274a4;
extern unsigned int g_100274a8;
extern char g_100042ec[];
extern void *g_1000302c;   /* IAT: sprintf */
extern void __cdecl FUN_1000296e(void);   /* strcat thunk */
extern void __cdecl FUN_10002974(void);   /* strcpy thunk */

__declspec(naked) void FUN_10001e01(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x90
        and byte ptr [ebp - 0x90], 0x0
        push esi
        push edi
        mov edi, dword ptr [ebp + 0xc]
        mov dword ptr [edi], 0x25
        mov eax, dword ptr [g_100274a0]
        mov esi, eax
    L_e23:
        mov ecx, dword ptr [g_100274a4]
        add ecx, eax
        cmp esi, ecx
        jge L_e68
        mov eax, dword ptr [g_100274a8]
        movzx eax, byte ptr [esi + eax]
        xor eax, 0xa7
        push eax
        lea eax, [ebp - 0x10]
        push offset g_100042ec
        push eax
        call dword ptr [g_1000302c]
        lea eax, [ebp - 0x10]
        push eax
        lea eax, [ebp - 0x90]
        push eax
        call FUN_1000296e
        mov eax, dword ptr [g_100274a0]
        add esp, 0x14
        inc esi
        jmp L_e23
    L_e68:
        lea eax, [ebp - 0x90]
        push eax
        push dword ptr [ebp + 0x8]
        call FUN_10002974
        mov eax, dword ptr [g_100274a4]
        pop ecx
        pop ecx
        mov dword ptr [edi], eax
        pop edi
        pop esi
        leave
        ret
    }
}
