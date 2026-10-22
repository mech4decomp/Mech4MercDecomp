/*
 * ZlogLib.dll - FUN_10001d24 (0x10001D24, 149 B, __cdecl)
 * Builds a hex string from a 16-byte key via sprintf/strcat, then strcpy
 * to the output. Transcribed from ZlogLib.dll reference bytes.
 */

extern char g_10027040[];
extern char g_100042e4[];
extern void *g_1000302c;   /* IAT: sprintf */
extern void __cdecl FUN_10001e01(void);
extern void __cdecl FUN_10001eac(void);
extern void __cdecl FUN_10001f4a(void);
extern void __cdecl FUN_1000296e(void);   /* strcat thunk */
extern void __cdecl FUN_10002974(void);   /* strcpy thunk */

__declspec(naked) void FUN_10001d24(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0xc14
        push esi
        lea eax, [ebp - 0x4]
        push eax
        lea eax, [ebp - 0x814]
        push eax
        call FUN_10001e01
        push dword ptr [ebp - 0x4]
        lea eax, [ebp - 0x814]
        push eax
        mov esi, offset g_10027040
        push esi
        call FUN_10001eac
        lea eax, [ebp - 0x14]
        push esi
        push eax
        call FUN_10001f4a
        and byte ptr [ebp - 0x814], 0x0
        add esp, 0x1c
        and dword ptr [ebp - 0x4], 0x0
        pop esi
    L_d6c:
        mov eax, dword ptr [ebp - 0x4]
        movzx eax, byte ptr [ebp + eax - 0x14]
        push eax
        lea eax, [ebp - 0xc14]
        push offset g_100042e4
        push eax
        call dword ptr [g_1000302c]
        lea eax, [ebp - 0xc14]
        push eax
        lea eax, [ebp - 0x814]
        push eax
        call FUN_1000296e
        add esp, 0x14
        inc dword ptr [ebp - 0x4]
        cmp dword ptr [ebp - 0x4], 0x10
        jl L_d6c
        lea eax, [ebp - 0x814]
        push eax
        push dword ptr [ebp + 0x8]
        call FUN_10002974
        pop ecx
        pop ecx
        leave
        ret
    }
}
