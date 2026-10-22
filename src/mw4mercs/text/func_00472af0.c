/*
 * FUN_00472af0 (148 B) — MLR object constructor (__thiscall, RET 0xc).
 * Sets vtable 0x76f2d4, initializes members, calls FUN_004765e0,
 * and conditionally asserts via FUN_006fab90.
 *
 * CFLAGS: /O1
 */

extern int g_007d9998;
extern void __cdecl FUN_004765e0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00472af0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [g_007d9998]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    ebx
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004765e0
        xor     eax, eax
        cmp     ebx, eax
        mov     dword ptr [esi + 0x70], eax
        mov     dword ptr [esi + 0x74], eax
        mov     dword ptr [esi], 0x76f2d4
        jle     L_b43
        cmp     ebx, 0x2
        jg      L_b43
        push    0x76e300
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_b84
        int     3
        /* epilogue copy placed here by compiler (fall-through after INT3) */
        lea     ecx, [esi + 0x68]
        pop     edi
        mov     dword ptr [esi + 0x78], ecx
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_b43:
        mov     edx, dword ptr [edi]
        push    0x4
        lea     ebx, [esi + 0x74]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     L_b7d
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi + 0x70], eax
        lea     eax, [ebx + ebx*0x2]
        shl     eax, 0x2
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x18]
        lea     ecx, [esi + 0x68]
        pop     edi
        mov     dword ptr [esi + 0x78], ecx
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_b7d:
        mov     dword ptr [esi + 0x70], 0x0
L_b84:
        lea     ecx, [esi + 0x68]
        pop     edi
        mov     dword ptr [esi + 0x78], ecx
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
