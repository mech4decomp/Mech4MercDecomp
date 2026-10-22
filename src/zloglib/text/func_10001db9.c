/*
 * ZlogLib.dll - FUN_10001db9 (0x10001DB9, 72 B, __cdecl)
 * Hex-encodes param_1[0..param_2) into DAT_10006c10 via sprintf/strcat,
 * returns &DAT_10006c10. Transcribed from ZlogLib.dll reference bytes.
 */

extern char g_10006c10[];
extern char g_10007c10[];
extern char g_100042e4[];
extern void *g_1000302c;   /* IAT: sprintf */
extern void __cdecl FUN_1000296e(void);   /* strcat thunk */

__declspec(naked) void *FUN_10001db9(void)
{
    __asm {
        and byte ptr [g_10006c10], 0x0
        push ebx
        push esi
        xor esi, esi
        cmp dword ptr [esp + 0x10], esi
        mov ebx, offset g_10006c10
        jle L_dfc
        push edi
        mov edi, offset g_10007c10
    L_dd5:
        mov eax, dword ptr [esp + 0x10]
        movzx eax, byte ptr [esi + eax]
        push eax
        push offset g_100042e4
        push edi
        call dword ptr [g_1000302c]
        push edi
        push ebx
        call FUN_1000296e
        add esp, 0x14
        inc esi
        cmp esi, dword ptr [esp + 0x14]
        jl L_dd5
        pop edi
    L_dfc:
        pop esi
        mov eax, ebx
        pop ebx
        ret
    }
}
