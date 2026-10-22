/*
 * FUN_0053A4C0 (258 B) — __fastcall method, RET 0x4.
 *
 * Processes sub-object data: reads an array of entries from a stream,
 * updates global counters, and calls FUN_004CE190.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern void FUN_0041ee70(int a);
extern void FUN_0041ec50(void *ptr, int size);
extern void FUN_0041ea10(void);
extern void FUN_0041ef60(void);
extern void FUN_004ce190(int a, int b, void *c, int d);

/* Global data references */
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void FUN_0053a4c0(void)
{
    __asm {
        sub     esp, 0x28
        push    esi
        mov     esi, dword ptr [ecx + 0x50]
        mov     eax, dword ptr [esi + 0xe4]
        test    eax, eax
        jz      epilogue

        push    ebx
        push    edi
        push    0
        lea     ecx, [esp + 0x10]
        call    FUN_0041ee70

        push    4
        lea     ebx, [esi + 0xe8]
        push    ebx
        lea     ecx, [esp + 0x14]
        call    FUN_0041ec50

        mov     eax, dword ptr [ebx]
        xor     edi, edi
        test    eax, eax
        jle     process_done

        add     esi, 0x10c

    iter_loop:
        push    4
        lea     eax, [esi + 4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0041ec50

        push    8
        push    esi
        lea     ecx, [esp + 0x14]
        call    FUN_0041ec50

        mov     eax, dword ptr [ebx]
        inc     edi
        add     esi, 0x50
        cmp     edi, eax
        jl      iter_loop

    process_done:
        lea     ecx, [esp + 0xc]
        call    FUN_0041ea10

        mov     edx, dword ptr [esp + 0xc]
        push    0
        lea     ecx, [esp + 0x10]
        call    dword ptr [edx + 0xc]

        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [DAT_007dab44]
        mov     ebx, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x14], 0xffffffec
        sub     eax, edx
        mov     edx, dword ptr [ecx]
        xor     edx, ebx
        mov     ecx, dword ptr [edx + 0x14]
        add     edx, 0x14
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        mov     ebx, dword ptr [ecx + esi*4 + 0x3c44]
        add     ecx, 0x3c3c
        shl     eax, 3
        add     ebx, eax
        mov     dword ptr [ecx + esi*4 + 8], ebx
        mov     edi, dword ptr [ecx + 0xc00]
        add     edi, eax
        push    1
        lea     eax, [esp + 0x10]
        push    eax
        mov     dword ptr [ecx + 0xc00], edi
        mov     ecx, dword ptr [edx]
        push    0x27
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004ce190

        lea     ecx, [esp + 0xc]
        call    FUN_0041ef60

        pop     edi
        pop     ebx

    epilogue:
        pop     esi
        add     esp, 0x28
        ret     4
    }
}
