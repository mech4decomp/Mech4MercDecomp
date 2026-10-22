#include <windows.h>

extern int g_76b2ac;
extern char g_7736f4[];
extern char g_7736e4[];
extern char g_7736d4[];
extern char g_7736c4[];
extern char g_7736ac[];
extern char g_77369c[];
extern char g_77368c[];
extern char g_773674[];
extern char g_773660[];
extern char g_773650[];
extern char g_773640[];
extern char g_773630[];

extern void __cdecl FUN_00504960(void);
extern void __cdecl FUN_005046A0(void);
extern void __cdecl FUN_005044C0(void);
extern void __cdecl FUN_005042B0(void);
extern void __cdecl FUN_00504110(void);
extern void __cdecl FUN_00503EC0(void);
extern void __cdecl FUN_00503AF0(void);
extern void __cdecl FUN_005039E0(void);
extern void __cdecl FUN_005037A0(void);
extern void __cdecl FUN_00503670(void);
extern void __cdecl FUN_00503530(void);
extern void __cdecl FUN_005033F0(void);
extern void __cdecl FUN_00503000(void);

__declspec(naked) void __cdecl FUN_004DC4E0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [g_76b2ac]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [ebp]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    offset g_7736f4
        push    edi
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jnz     l_case2
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], 0x21e
        call    dword ptr [eax + 0x24]
        push    ebp
        call    FUN_00504960
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    l_case2:
        push    offset g_7736e4
        push    edi
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jnz     l_case3
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], 0x21b
        call    dword ptr [edx + 0x24]
        push    ebp
        call    FUN_005046A0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    l_case3:
        push    offset g_7736d4
        push    edi
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jnz     l_case4
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], 0x220
        call    dword ptr [edx + 0x24]
        push    ebp
        call    FUN_005044C0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    l_case4:
        push    offset g_7736c4
        push    edi
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jnz     l_case5
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], 0x21d
        call    dword ptr [edx + 0x24]
        push    ebp
        call    FUN_005042B0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    l_case5:
        push    offset g_7736ac
        push    edi
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jnz     l_case6
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], 0x21f
        call    dword ptr [edx + 0x24]
        push    ebp
        call    FUN_00504110
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    l_case6:
        push    offset g_77369c
        push    edi
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jnz     l_case7
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], 0x221
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    ebp
        call    FUN_00503EC0
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    l_case7:
        push    offset g_77368c
        push    edi
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jnz     l_case8
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], 0x224
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    ebp
        call    FUN_00503AF0
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    l_case8:
        push    offset g_773674
        push    edi
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jnz     l_case9
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], 0x225
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    ebp
        call    FUN_005039E0
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    l_case9:
        push    offset g_773660
        push    edi
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jnz     l_case10
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], 0x226
        call    dword ptr [edx + 0x24]
        push    ebp
        call    FUN_005037A0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    l_case10:
        push    offset g_773650
        push    edi
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jnz     l_case11
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], 0x21c
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    ebp
        call    FUN_00503670
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    l_case11:
        push    offset g_773640
        push    edi
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jnz     l_case12
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], 0x227
        call    dword ptr [edx + 0x24]
        push    ebp
        call    FUN_00503530
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    l_case12:
        push    offset g_773630
        push    edi
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jnz     l_default
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], 0x21a
        call    dword ptr [edx + 0x24]
        push    ebp
        call    FUN_005033F0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    l_default:
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    ebp
        push    edi
        call    FUN_00503000
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
