/* FUN_00703a20 - gosScript command wrapper (alloc + dispatch) */

extern unsigned int g_85b4a0; /* 0x0085b4a0 */
extern char g_87bc35;      /* 0x0087bc35 */
extern unsigned int g_7afaf0; /* 0x007afaf0 */
extern unsigned int g_7afaf4; /* 0x007afaf4 */
extern unsigned int g_7afaf8; /* 0x007afaf8 */
extern unsigned int g_7afafc; /* 0x007afafc */
extern unsigned int g_85b4b0; /* 0x0085b4b0 */
extern unsigned int g_85b4b4; /* 0x0085b4b4 */
extern unsigned int g_85b4b8; /* 0x0085b4b8 */
extern unsigned int g_85b4bc; /* 0x0085b4bc */

extern int __cdecl FUN_0070e220(void);
extern int __cdecl FUN_0070e320(void);
extern int __cdecl FUN_007034f0(void);
extern int __cdecl FUN_0070e1b0(void);

__declspec(naked) int __stdcall FUN_00703a20(void)
{
    __asm {
        mov eax, dword ptr [g_85b4a0]
        push esi
        xor esi, esi
        cmp eax, 1
        jnz loc_703a43
        mov al, byte ptr [g_87bc35]
        test al, al
        jnz loc_703aa9
        push 0xa
        push 0x8
        call FUN_0070e220
        pop esi
        ret 0x10
loc_703a43:
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        mov esi, dword ptr [esp + 0xc]
        jz loc_703a58
        push eax
        push esi
        call FUN_0070e320
        jmp loc_703a84
loc_703a58:
        mov eax, dword ptr [g_7afaf0]
        mov ecx, dword ptr [g_7afaf4]
        mov edx, dword ptr [g_7afaf8]
        mov dword ptr [g_85b4b0], eax
        mov eax, dword ptr [g_7afafc]
        mov dword ptr [g_85b4b4], ecx
        mov dword ptr [g_85b4b8], edx
        mov dword ptr [g_85b4bc], eax
loc_703a84:
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 8]
        push ecx
        push esi
        push edx
        call FUN_007034f0
        mov esi, eax
        mov al, byte ptr [g_87bc35]
        test al, al
        jnz loc_703aa9
        push 0xa
        push 0x8
        push esi
        call FUN_0070e1b0
loc_703aa9:
        mov eax, esi
        pop esi
        ret 0x10
    }
}
