/*
 * FUN_0053A280 (542 B) — __stdcall? RET 0x8.
 *
 * Processes items from a stream-like object (vtable at [ESI]).
 * Reads data via vtable+0x20 calls, processes through various
 * helper functions, and updates state.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern void FUN_0053a4a0(void *ptr);
extern void FUN_0040c410(void *ptr);
extern void FUN_00419e70(void);
extern void FUN_0041a070(void *ptr);
extern int  FUN_004da920(void *ptr);
extern void FUN_00534630(int a, int b, int c, int d);
extern void FUN_004ea0f0(void *ptr);
extern void FUN_00428850(void *ptr);
extern void FUN_00523e60(void *ptr);
extern void FUN_0041e690(void *a, void *b, int c);
extern void *FUN_004cec10(void);
extern int  FUN_004d9910(void *a, void *b, int c);
extern void FUN_0041e710(void);

/* Global data references */
extern int DAT_007db098;
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void FUN_0053a280(void)
{
    __asm {
        sub     esp, 0xd4
        push    esi
        mov     esi, dword ptr [esp + 0xe0]     ; param2 (stream)
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
        test    eax, eax
        jz      epilogue

        push    ebx
        push    edi
        xor     ebx, ebx

    iter_loop:
        push    0x7b8ce8
        lea     ecx, [esp + 0x28]
        mov     word ptr [esp + 0x18], bx
        mov     word ptr [esp + 0x1a], bx
        call    FUN_0053a4a0

        push    0x7b8d88
        lea     ecx, [esp + 0x1c]
        call    FUN_0040c410

        mov     edx, dword ptr [esi]
        push    2
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]

        mov     edx, dword ptr [esi]
        push    2
        lea     eax, [esp + 0x1a]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]

        lea     ecx, [esp + 0x30]
        call    FUN_00419e70

        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x3c], ecx
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x50], edx
        mov     dword ptr [esp + 0x60], eax
        call    FUN_0041a070

        mov     dx, word ptr [esp + 0x14]
        mov     ax, word ptr [esp + 0x16]
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     word ptr [esp + 0x10], dx
        mov     word ptr [esp + 0x12], ax
        call    FUN_004da920
        add     esp, 4

        push    ebx
        push    2
        push    0x60
        mov     edi, eax
        push    2
        lea     ecx, [esp + 0x70]
        call    FUN_00534630

        push    0x7dc694
        lea     ecx, [esp + 0x7c]
        mov     dword ptr [esp + 0x74], edi
        mov     dword ptr [esp + 0x78], 2
        call    FUN_004ea0f0

        lea     edx, [esp + 0x30]
        push    edx
        lea     ecx, [esp + 0x80]
        call    FUN_00428850

        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0xb8]
        mov     dword ptr [esp + 0xb0], 1
        mov     dword ptr [esp + 0xb4], 0
        call    FUN_00523e60

        mov     ecx, dword ptr [esp + 0x60]
        push    ebx
        push    ecx
        lea     edx, [esp + 0x68]
        push    edx
        lea     ecx, [esp + 0xcc]
        mov     dword ptr [esp + 0xc4], ebx
        mov     dword ptr [esp + 0xc8], -1
        call    FUN_0041e690

        mov     ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], cl
        mov     dx, word ptr [eax + 2]
        push    ebx
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0xc8]
        push    ecx
        mov     word ptr [esp + 0x1e], dx
        call    FUN_004d9910
        mov     edi, eax

        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [edi + 0x10]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x1c]
        and     edx, 0xffffffef
        or      edx, 8
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     dword ptr [edi + 0x10], edx
        mov     edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 0x28]

        mov     eax, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [eax + 0x48]

        lea     ecx, [esp + 0xc0]
        call    FUN_0041e710

        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        test    eax, eax
        jnz     iter_loop

        pop     edi
        pop     ebx

    epilogue:
        pop     esi
        add     esp, 0xd4
        ret     8
    }
}
