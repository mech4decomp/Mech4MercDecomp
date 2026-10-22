/*
 * FUN_0051B5B0 (458 B) — in-.text data block containing 5 __stdcall
 * (RET 0xc) functions that walk an obfuscated object graph rooted at
 * g_7dab44 (XOR key g_7dab40, then 0x85739531):
 *   0x5B0  getter -> [..+0x1c]+0x4c
 *   0x5F0  getter -> [..+0x1c]+0x50
 *   0x630  sums two 0xc-byte strides (0x40..0x4c) and writes results
 *   0x6A0  calls FUN_0059d0c0 with a value
 *   0x6F0  allocates 0x400 via FUN_006f3c80, fills via FUN_0059d310,
 *          frees via FUN_006f4230
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7dab44;
extern int  g_7dab40;
extern void __cdecl FUN_0059d0c0(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_0059d310(void);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void __stdcall FUN_0051B5B0(void)
{
    __asm {
        /* --- fn @ 0x5B0 --- */
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L_5eb
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop     esi
        je      L_5eb
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [ecx + 0x4c]
    L_5eb:
        ret     0xc
        nop
        nop
        /* --- fn @ 0x5F0 --- */
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L_62b
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop     esi
        je      L_62b
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [ecx + 0x50]
    L_62b:
        ret     0xc
        nop
        nop
        /* --- fn @ 0x630 --- */
        mov     eax, dword ptr [g_7dab44]
        mov     eax, dword ptr [eax]
        push    ebx
        push    esi
        push    edi
        xor     eax, dword ptr [g_7dab40]
        lea     edi, [eax + 0x44]
        mov     eax, dword ptr [edi]
        xor     ecx, ecx
        xor     edx, edx
        xor     eax, 0x85739531
        mov     esi, dword ptr [eax + 0x1c]
        mov     eax, 0x40
    L_656:
        add     ecx, dword ptr [eax + esi - 0xc]
        mov     ebx, dword ptr [eax + esi]
        add     eax, 4
        add     edx, ebx
        cmp     eax, 0x4c
        jl      L_656
        mov     eax, dword ptr [edi]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x1c]
        mov     esi, dword ptr [eax + 0x2c]
        mov     eax, dword ptr [esp + 0x18]
        add     esi, ecx
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ecx], esi
        mov     ecx, dword ptr [edi]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1c]
        mov     ecx, dword ptr [ecx + 0x30]
        pop     edi
        add     ecx, edx
        mov     edx, dword ptr [eax + 4]
        pop     esi
        mov     dword ptr [edx], ecx
        mov     eax, 1
        pop     ebx
        ret     0xc
        nop
        nop
        /* --- fn @ 0x6A0 --- */
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x44]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L_6e9
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop     esi
        je      L_6e9
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [ecx + 0x44]
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [edx]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1c]
        push    eax
        call    FUN_0059d0c0
    L_6e9:
        ret     0xc
        nop
        nop
        nop
        nop
        /* --- fn @ 0x6F0 --- */
        sub     esp, 8
        push    esi
        push    edi
        push    0
        push    0x400
        call    FUN_006f3c80
        mov     esi, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [esi + 4]
        xor     edx, edx
        mov     dl, byte ptr [esi]
        mov     dword ptr [esp + 0xc], eax
        lea     eax, [esp + 8]
        push    eax
        mov     eax, dword ptr [g_7dab44]
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [eax]
        push    edx
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x1c]
        call    FUN_0059d310
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 8]
        xor     eax, eax
        test    ecx, ecx
        jle     L_75f
    L_74c:
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [edx + eax*4]
        mov     dword ptr [edi + eax*4], ecx
        mov     ecx, dword ptr [esp + 8]
        inc     eax
        cmp     eax, ecx
        jl      L_74c
    L_75f:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        pop     edi
        pop     esi
        je      L_76f
        push    eax
        call    FUN_006f4230
    L_76f:
        mov     eax, 1
        add     esp, 8
        ret     0xc
    }
}
