/*
 * FUN_1003e1a3 (324 B) — __stdcall. Heap/VirtualAlloc pool allocator init.
 * CFLAGS: /O1
 */

extern int g_10051f80;
extern int g_10051f70;
extern int g_10051f74;
extern void* g_10076a90;
extern int (__stdcall *g_10049074)(void);   /* HeapAlloc IAT */
extern int (__stdcall *g_10049148)(void);   /* VirtualAlloc IAT */
extern int (__stdcall *g_100491c8)(void);   /* VirtualFree IAT */
extern int (__stdcall *g_10049084)(void);   /* HeapFree IAT */
extern void __cdecl FUN_10040680(void);

__declspec(naked) void __stdcall FUN_1003e1a3(void)
{
    __asm {
        cmp     dword ptr [g_10051f80], -0x1
        push    ebx
        push    ebp
        push    esi
        push    edi
        jnz     L1b7
        mov     esi, 0x10051f70
        jmp     L1d4
    L1b7:
        push    0x2020
        push    0x0
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049074]
        mov     esi, eax
        test    esi, esi
        jz      L2e0
    L1d4:
        mov     ebp, dword ptr [g_10049148]
        push    0x4
        push    0x2000
        push    0x400000
        push    0x0
        call    ebp
        mov     edi, eax
        test    edi, edi
        jz      L2c9
        push    0x4
        mov     ebx, 0x10000
        push    0x1000
        push    ebx
        push    edi
        call    ebp
        test    eax, eax
        jz      L2bb
        mov     eax, 0x10051f70
        cmp     esi, eax
        jnz     L233
        cmp     dword ptr [g_10051f70], 0x0
        jnz     L223
        mov     dword ptr [g_10051f70], eax
    L223:
        cmp     dword ptr [g_10051f74], 0x0
        jnz     L248
        mov     dword ptr [g_10051f74], eax
        jmp     L248
    L233:
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [g_10051f74]
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [g_10051f74], esi
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [eax], esi
    L248:
        lea     eax, [edi + 0x400000]
        lea     ecx, [esi + 0x98]
        mov     dword ptr [esi + 0x14], eax
        lea     eax, [esi + 0x18]
        mov     dword ptr [esi + 0xc], ecx
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0x8], eax
        xor     ebp, ebp
        mov     ecx, 0xf1
    L26a:
        xor     edx, edx
        cmp     ebp, 0x10
        setge   dl
        dec     edx
        and     edx, ecx
        dec     edx
        inc     ebp
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ecx
        add     eax, 0x8
        cmp     ebp, 0x400
        jl      L26a
        push    ebx
        push    0x0
        push    edi
        call    FUN_10040680
        add     esp, 0xc
    L293:
        mov     eax, dword ptr [esi + 0x10]
        add     eax, ebx
        cmp     edi, eax
        jnc     L2b7
        or      byte ptr [edi + 0xf8], 0xff
        lea     eax, [edi + 0x8]
        mov     dword ptr [edi], eax
        mov     dword ptr [edi + 0x4], 0xf0
        add     edi, 0x1000
        jmp     L293
    L2b7:
        mov     eax, esi
        jmp     L2e2
    L2bb:
        push    0x8000
        push    0x0
        push    edi
        call    dword ptr [g_100491c8]
    L2c9:
        cmp     esi, 0x10051f70
        jz      L2e0
        push    esi
        push    0x0
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049084]
    L2e0:
        xor     eax, eax
    L2e2:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
