/*
 * FUN_1001bfb0 (134 B) - __thiscall (1 arg, RET 0x4). Time-based throttle:
 * if arg != 0 return arg; else GetSystemTime + SystemTimeToFileTime into
 * this+0x18, compare 64-bit filetime against this+0x10, divide delta by
 * 10000 (__aulldiv), and return remaining time or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021094;   /* IAT: GetSystemTime */
extern void *g_10021090;   /* IAT: SystemTimeToFileTime */
extern void __cdecl FUN_1001efa0(void);   /* __aulldiv */

__declspec(naked) void __cdecl FUN_1001bfb0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    esi
        push    edi
        test    ebx, ebx
        mov     esi, ecx
        jbe     L_bfcb
        pop     edi
        mov     eax, ebx
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
L_bfcb:
        lea     eax, [esp + 0xc]
        push    eax
        call    dword ptr [g_10021094]
        lea     edi, [esi + 0x18]
        lea     ecx, [esp + 0xc]
        push    edi
        push    ecx
        call    dword ptr [g_10021090]
        mov     eax, dword ptr [esi + 0x1c]
        mov     edx, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [edi]
        mov     edi, dword ptr [esi + 0x10]
        cmp     eax, edx
        ja      L_c005
        jc      L_bffa
        cmp     ecx, edi
        jnc     L_c005
L_bffa:
        pop     edi
        mov     eax, ebx
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
L_c005:
        sub     ecx, edi
        push    0x0
        sbb     eax, edx
        push    0x2710
        push    eax
        push    ecx
        call    FUN_1001efa0
        mov     esi, dword ptr [esi + 0x8]
        cmp     esi, eax
        jbe     L_c02b
        sub     esi, eax
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
L_c02b:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
