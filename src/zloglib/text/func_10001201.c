/*
 * ZlogLib.dll - FUN_10001201 (0x10001201, 330 B, __cdecl)
 * Log emit: formats a message into a stack buffer and writes it to
 * the active log file(s). Uses _alloca_probe for the 0x7d00 buffer.
 * Transcribed from ZlogLib.dll reference bytes.
 */

#include <windows.h>

extern int g_100042f8;
extern int g_100042fc;
extern int g_10004014;
extern int g_10004304;
extern int g_10004300;
extern int g_100042f0;
extern int g_100042f4;
extern int g_10004010;
extern void (*g_10003040)(void);
extern void (*g_10003010)(void);
extern void (*g_10003020)(void);

extern void __cdecl FUN_10002980(void);
extern void __cdecl FUN_1000296e(void);
extern void __cdecl FUN_1000297a(void);
extern void __cdecl FUN_1000134b(void);
extern void __cdecl FUN_10001cf5(void);
extern void __cdecl FUN_10001357(void);

__declspec(naked) void FUN_10001201(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, 0x7d00
        call    FUN_10002980
        push    ebx
        push    esi
        xor     esi, esi
        cmp     dword ptr [g_100042f8], esi
        jnz     l_10001226
        cmp     dword ptr [g_100042fc], esi
        jz      l_10001347
    l_10001226:
        push    0x7cfe
        push    dword ptr [ebp + 0x8]
        lea     eax, [ebp + 0xffff8300]
        push    eax
        call    dword ptr [g_10003040]
        lea     eax, [ebp + 0xffff8300]
        push    0x1000403c
        push    eax
        call    FUN_1000296e
        lea     eax, [ebp + 0xffff8300]
        push    eax
        call    FUN_1000297a
        add     esp, 0x18
        cmp     dword ptr [g_10004014], esi
        mov     ebx, eax
        jz      l_100012c7
        mov     eax, dword ptr [g_100042f8]
        cmp     eax, esi
        jz      l_100012c7
        cmp     dword ptr [ebp + 0xc], 0x2
        jz      l_100012c7
        lea     ecx, [ebp + 0xffff8300]
        push    ecx
        push    0x10004038
        push    eax
        call    dword ptr [g_10003010]
        add     esp, 0xc
        test    eax, eax
        jge     l_10001294
        push    esi
        push    esi
        push    0x1
        jmp     l_1000130a
    l_10001294:
        mov     eax, dword ptr [g_10004300]
        cmp     eax, esi
        jz      l_100012bb
        cmp     eax, 0x1
        jnz     l_100012c7
        inc     dword ptr [g_100042f0]
        mov     eax, dword ptr [g_100042f0]
        cmp     eax, dword ptr [g_10004010]
        jle     l_100012c7
        mov     dword ptr [g_100042f0], esi
    l_100012bb:
        push    dword ptr [g_100042f8]
        call    FUN_1000134b
        pop     ecx
    l_100012c7:
        cmp     dword ptr [g_10004304], esi
        jz      l_10001347
        cmp     dword ptr [g_100042fc], esi
        jz      l_10001347
        cmp     dword ptr [ebp + 0xc], 0x1
        jz      l_10001347
        lea     eax, [ebp + 0xffff8300]
        push    eax
        call    FUN_10001cf5
        push    dword ptr [g_100042fc]
        lea     eax, [ebp + 0xffff8300]
        push    ebx
        push    0x1
        push    eax
        call    dword ptr [g_10003020]
        add     esp, 0x14
        cmp     eax, ebx
        jz      l_10001314
        push    esi
        push    esi
        push    0x2
    l_1000130a:
        call    FUN_10001357
        add     esp, 0xc
        jmp     l_10001347
    l_10001314:
        mov     eax, dword ptr [g_10004300]
        cmp     eax, esi
        jz      l_1000133b
        cmp     eax, 0x1
        jnz     l_10001347
        inc     dword ptr [g_100042f4]
        mov     eax, dword ptr [g_100042f4]
        cmp     eax, dword ptr [g_10004010]
        jle     l_10001347
        mov     dword ptr [g_100042f4], esi
    l_1000133b:
        push    dword ptr [g_100042fc]
        call    FUN_1000134b
        pop     ecx
    l_10001347:
        pop     esi
        pop     ebx
        leave
        ret
    }
}
