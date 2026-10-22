/*
 * FUN_00723EC0 (472 B) — Game init/setup routine.
 *
 * If DAT_0087e690 is nonzero: reads a size pair from param_1 (word[0]=width,
 * word[1]=height), zero-fills a buffer at DAT_0087e634 (stride DAT_0087e620>>1),
 * then calls a series of setup functions (FUN_0074a4a0/a280/a590/a620/a670)
 * on DAT_0087e694.
 *
 * __stdcall RET 4 (one pointer param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_87e690;
extern int g_87e620;
extern int g_87e634;
extern int g_87e68c;
extern int g_87e608;
extern int g_87e60c;
extern int g_87e698;
extern int g_87e694;

extern void __cdecl FUN_00713de0(void);
extern void __cdecl FUN_0074a4a0(void);
extern void __cdecl FUN_0074a280(void);
extern void __cdecl FUN_0074a590(void);
extern void __cdecl FUN_0074a620(void);
extern void __cdecl FUN_0074a670(void);

__declspec(naked) void __stdcall FUN_00723ec0(void *param)
{
    __asm {
        mov     eax, dword ptr [g_87e690]
        sub     esp, 0x18
        test    eax, eax
        jz      L_skip
        mov     ecx, dword ptr [g_87e620]
        push    esi
        mov     esi, dword ptr [g_87e634]
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        mov     ax, word ptr [edi + 2]
        xor     edx, edx
        mov     dx, word ptr [edi]
        sar     ecx, 1
        mov     dword ptr [g_87e68c], edi
        test    eax, eax
        mov     dword ptr [g_87e608], eax
        mov     dword ptr [g_87e60c], edx
        jbe     L_after_loop
        push    ebx
        add     ecx, ecx
        lea     ebx, [edx + edx*1]
        push    ebp
        mov     dword ptr [esp + 0x2c], ecx
        mov     edx, eax
    L_loop:
        mov     ecx, ebx
        mov     ebp, ecx
        shr     ecx, 2
        xor     eax, eax
        mov     edi, esi
        rep stosd
        mov     ecx, ebp
        and     ecx, 3
        rep stosb
        add     esi, dword ptr [esp + 0x2c]
        dec     edx
        jnz     L_loop
        pop     ebp
        pop     ebx
    L_after_loop:
        call    FUN_00713de0
        mov     ecx, dword ptr [g_87e68c]
        mov     eax, dword ptr [g_87e698]
        xor     edx, edx
        xor     esi, esi
        mov     dword ptr [esp + 8], esi
        mov     dword ptr [esp + 0xc], esi
        mov     dx, word ptr [ecx]
        mov     dword ptr [g_87e694], eax
        mov     dword ptr [esp + 0x10], edx
        xor     edx, edx
        mov     dx, word ptr [ecx + 2]
        lea     ecx, [esp + 8]
        push    ecx
        push    eax
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], 0x3f800000
        mov     dword ptr [esp + 0x1c], edx
        call    FUN_0074a4a0
        mov     edx, dword ptr [g_87e694]
        push    edx
        call    FUN_0074a280
        mov     eax, dword ptr [g_87e694]
        push    esi
        push    7
        push    eax
        call    FUN_0074a590
        mov     ecx, dword ptr [g_87e694]
        push    esi
        push    0xe
        push    ecx
        call    FUN_0074a590
        mov     edx, dword ptr [g_87e694]
        push    esi
        push    4
        push    edx
        call    FUN_0074a590
        mov     eax, dword ptr [g_87e694]
        push    esi
        push    0x1d
        push    eax
        call    FUN_0074a590
        mov     ecx, dword ptr [g_87e694]
        push    esi
        push    0x1b
        push    ecx
        call    FUN_0074a590
        mov     edx, dword ptr [g_87e694]
        push    esi
        push    0x1c
        push    edx
        call    FUN_0074a590
        mov     eax, dword ptr [g_87e694]
        push    1
        push    0x16
        push    eax
        call    FUN_0074a590
        mov     ecx, dword ptr [g_87e694]
        push    esi
        push    esi
        push    ecx
        call    FUN_0074a620
        mov     edx, dword ptr [g_87e694]
        push    3
        push    1
        push    esi
        push    edx
        call    FUN_0074a670
        mov     eax, dword ptr [g_87e694]
        push    2
        push    2
        push    esi
        push    eax
        call    FUN_0074a670
        mov     ecx, dword ptr [g_87e694]
        push    esi
        push    3
        push    esi
        push    ecx
        call    FUN_0074a670
        push    3
        mov     edx, dword ptr [g_87e694]
        push    4
        push    esi
        push    edx
        call    FUN_0074a670
        mov     eax, dword ptr [g_87e694]
        push    2
        push    5
        push    esi
        push    eax
        call    FUN_0074a670
        mov     ecx, dword ptr [g_87e694]
        push    esi
        push    6
        push    esi
        push    ecx
        call    FUN_0074a670
        mov     edx, dword ptr [g_87e694]
        push    1
        push    1
        push    1
        push    edx
        call    FUN_0074a670
        mov     eax, dword ptr [g_87e694]
        push    1
        push    4
        push    1
        push    eax
        call    FUN_0074a670
        mov     ecx, dword ptr [g_87e694]
        push    1
        push    0x88
        push    ecx
        call    FUN_0074a590
        pop     edi
        pop     esi
    L_skip:
        add     esp, 0x18
        ret     4
    }
}
