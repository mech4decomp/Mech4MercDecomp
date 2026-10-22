/* FUN_00702c20 - gosScript command dispatcher (switch on param_1, 0..3) */

extern unsigned int g_85b4a0; /* 0x0085b4a0 */
extern unsigned int g_8aaae4; /* 0x008aaae4 */
extern char g_87dd0a;      /* 0x0087dd0a */
extern unsigned int g_8589bc; /* 0x008589bc */
extern unsigned int g_8589b8; /* 0x008589b8 */
extern unsigned int g_8589c0; /* 0x008589c0 */
extern unsigned int g_8589c4; /* 0x008589c4 */
extern unsigned int g_8589b4; /* 0x008589b4 */
extern unsigned int g_8aaaac; /* 0x008aaaac */
extern unsigned int g_8aaaa8; /* 0x008aaaa8 */
extern unsigned int g_8aaab0; /* 0x008aaab0 */
extern unsigned int g_8aaab4; /* 0x008aaab4 */
extern unsigned int g_8aaa90; /* 0x008aaa90 */
extern char g_8aaa68;      /* 0x008aaa68 */
extern char g_7a11e8;      /* 0x007a11e8 */
extern char g_702dac;      /* 0x00702dac jump table */

extern int __cdecl FUN_00741120(void);
extern int __cdecl FUN_007418a0(void);
extern int __cdecl FUN_006f3c80(void);
extern int __cdecl FUN_00741e30(void);
extern int __cdecl FUN_006f4230(void);
extern int __cdecl FUN_006fab90(void);

__declspec(naked) void __stdcall FUN_00702c20(void)
{
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        cmp eax, 3
        push ebx
        ja loc_702d95
        jmp dword ptr [eax*4 + g_702dac]

loc_702c37:
        mov eax, dword ptr [g_85b4a0]
        mov ebx, 1
        cmp eax, ebx
        jz loc_702da7
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [g_8aaae4]
        push eax
        push ecx
        mov byte ptr [g_87dd0a], bl
        call FUN_00741120
        mov byte ptr [g_87dd0a], 0
        pop ebx
        pop ebp
        ret 8

loc_702c6b:
        mov eax, dword ptr [g_85b4a0]
        mov ebx, 1
        cmp eax, ebx
        jz loc_702da7
        mov eax, dword ptr [g_8aaae4]
        push esi
        lea edx, [ebp + 8]
        push edx
        push 0x0
        push eax
        mov byte ptr [g_87dd0a], bl
        call FUN_007418a0
        mov ecx, dword ptr [ebp + 8]
        push 0x0
        push ecx
        call FUN_006f3c80
        lea edx, [ebp + 8]
        mov esi, eax
        mov eax, dword ptr [g_8aaae4]
        push edx
        push esi
        push eax
        call FUN_007418a0
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [ebp + 0xc]
        and edx, 0xffffffde
        test ecx, ecx
        mov dword ptr [esi + 4], edx
        mov eax, edx
        jz loc_702cca
        or eax, 0x21
        mov dword ptr [esi + 4], eax
loc_702cca:
        mov ecx, dword ptr [g_8aaae4]
        push 0x0
        push esi
        push ecx
        mov byte ptr [g_87dd0a], bl
        call FUN_00741e30
        push esi
        mov byte ptr [g_87dd0a], 0
        call FUN_006f4230
        pop esi
        pop ebx
        pop ebp
        ret 8

loc_702cf2:
        mov eax, dword ptr [g_85b4a0]
        mov ebx, 1
        cmp eax, ebx
        jz loc_702da7
        mov eax, dword ptr [g_8589bc]
        mov edx, dword ptr [g_8589b8]
        mov ecx, dword ptr [g_8589c0]
        push 0x0
        mov dword ptr [g_8aaaac], eax
        mov eax, dword ptr [g_8aaae4]
        mov dword ptr [g_8aaaa8], edx
        mov edx, dword ptr [g_8589c4]
        push offset g_8aaa68
        push eax
        mov dword ptr [g_8aaab0], ecx
        mov dword ptr [g_8aaab4], edx
        mov byte ptr [g_87dd0a], bl
        call FUN_00741e30
        mov byte ptr [g_87dd0a], 0
        pop ebx
        pop ebp
        ret 8

loc_702d56:
        mov eax, dword ptr [g_85b4a0]
        mov ebx, 1
        cmp eax, ebx
        jz loc_702da7
        mov edx, dword ptr [g_8aaae4]
        mov ecx, dword ptr [g_8589b4]
        push 0x0
        push offset g_8aaa68
        push edx
        mov dword ptr [g_8aaa90], ecx
        mov byte ptr [g_87dd0a], bl
        call FUN_00741e30
        mov byte ptr [g_87dd0a], 0
        pop ebx
        pop ebp
        ret 8

loc_702d95:
        push offset g_7a11e8
        call FUN_006fab90
        add esp, 4
        test eax, eax
        jz loc_702da7
        int 3
loc_702da7:
        pop ebx
        pop ebp
        ret 8
    }
}
