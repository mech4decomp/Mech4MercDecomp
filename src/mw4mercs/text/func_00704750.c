/* FUN_00704750 - create unique player GUID (CoCreateGuid + compare) */

extern unsigned int g_7afaf0; /* 0x007afaf0 */
extern unsigned int g_7afaf4; /* 0x007afaf4 */
extern unsigned int g_7afaf8; /* 0x007afaf8 */
extern unsigned int g_7afafc; /* 0x007afafc */
extern char g_7a1204;      /* 0x007a1204 */
extern int (__cdecl *g_76b638)(void); /* 0x0076b638 IAT CoCreateGuid */

extern int __cdecl FUN_006fab90(void);

__declspec(naked) void __stdcall FUN_00704750(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push esi
        push edi
        lea eax, [ebp - 0x10]
        push eax
        call dword ptr [g_76b638]
        mov ecx, 4
        mov edi, offset g_7afaf0
        lea esi, [ebp - 0x10]
        xor edx, edx
        repe cmpsd
        pop edi
        pop esi
        jnz loc_7047b7
        push offset g_7a1204
        call FUN_006fab90
        add esp, 4
        test eax, eax
        jz loc_704789
        int 3
loc_704789:
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [g_7afaf0]
        mov ecx, eax
        mov dword ptr [ecx], edx
        mov edx, dword ptr [g_7afaf4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [g_7afaf8]
        mov dword ptr [ecx + 8], edx
        mov edx, dword ptr [g_7afafc]
        mov dword ptr [ecx + 0xc], edx
        mov esp, ebp
        pop ebp
        ret 4
loc_7047b7:
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 0x10]
        mov ecx, eax
        mov dword ptr [ecx], edx
        mov edx, dword ptr [ebp - 0xc]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], edx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0xc], edx
        mov esp, ebp
        pop ebp
        ret 4
    }
}
