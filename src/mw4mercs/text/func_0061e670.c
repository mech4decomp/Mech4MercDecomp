/*
 * FUN_0061E670 (242 B) — __cdecl, 2 stack params.
 * State-machine driver with a do-while loop keyed on global 0x008058ac.
 * Dispatches through several helper functions and logs via FUN_00562f40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_8058ac;   /* 0x008058ac */
extern char g_7b58b4[];          /* 0x007b58b4 */
extern char g_7b55b4[];          /* 0x007b55b4 */

extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0064fc80(void *a);
extern int __cdecl FUN_0064ca50(void *a);
extern int __cdecl FUN_0064d170(void);
extern int __cdecl FUN_0064c9e0(void *a, void *b);
extern void __cdecl FUN_00562f40(int a);
extern void __cdecl FUN_00649920(void *a, void *b, int c);
extern void __cdecl FUN_0069ae70(int a, int b);

__declspec(naked) void __stdcall FUN_0061E670(void *param_1, void *param_2)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        xor     esi, esi
        xor     ebp, ebp
        xor     ebx, ebx
        test    edi, edi
        jz      L_E689
        mov     eax, dword ptr [esp + 0x14]
        mov     esi, dword ptr [eax + 0x28]
L_E689:
        cmp     dword ptr [g_8058ac], 0x6
        jnz     L_E74B
L_E696:
        test    edi, edi
        jz      L_E6A4
        test    esi, esi
        jz      L_E6A4
        mov     ebp, dword ptr [esi + 0x18]
        mov     ebx, dword ptr [esi + 0x3c]
L_E6A4:
        call    FUN_00649150
        test    esi, esi
        jz      L_E6E5
        cmp     ebp, 0x4
        jz      L_E6E5
        test    edi, edi
        jz      L_E6E5
        cmp     dword ptr [g_8058ac], 0x1
        jnz     L_E6DC
        lea     ecx, [esp + 0x18]
        push    ecx
        call    FUN_0064fc80
        mov     edx, dword ptr [esp + 0x1c]
        push    edx
        call    FUN_0064ca50
        add     esp, 0x8
        cmp     ebx, eax
        jz      L_E70A
        jmp     L_E700
L_E6DC:
        call    FUN_0064d170
        push    0x29
        jmp     L_E702
L_E6E5:
        call    FUN_0064d170
        test    edi, edi
        jz      L_E71D
        test    esi, esi
        jz      L_E70E
        push    eax
        push    ebx
        call    FUN_0064c9e0
        add     esp, 0x8
        test    eax, eax
        jnz     L_E70A
L_E700:
        push    0x10
L_E702:
        call    FUN_00562f40
        add     esp, 0x4
L_E70A:
        test    esi, esi
        jnz     L_E71A
L_E70E:
        push    0x2a
        call    FUN_00562f40
        add     esp, 0x4
        jmp     L_E71D
L_E71A:
        mov     esi, dword ptr [esi + 0xc]
L_E71D:
        push    0x0
        push    offset g_7b58b4
        push    offset g_7b55b4
        call    FUN_00649920
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0xc
        cmp     eax, 0x11
        jz      L_E696
        push    0xb
        push    0x7
        call    FUN_0069ae70
        add     esp, 0x8
L_E74B:
        test    edi, edi
        jz      L_E75D
        test    esi, esi
        jz      L_E75D
        push    0x2a
        call    FUN_00562f40
        add     esp, 0x4
L_E75D:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
