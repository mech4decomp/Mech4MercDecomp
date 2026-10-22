/*
 * FUN_0053A0C0 (443 B) — __thiscall method, RET 0x4.
 *
 * Processes a list of items matching an index (param1/EDI).
 * Iterates through items via FUN_0040C0E0, extracts fields,
 * calls FUN_0041F030 to store them, then updates global counters
 * and calls FUN_004CE190.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern void FUN_0041ee70(int a);
extern int  FUN_0040c0e0(void);
extern void FUN_0041acb0(void *ptr);
extern void FUN_0041f030(void *ptr, int size);
extern void FUN_0041ef60(void);
extern void FUN_004ce190(int a, int b, void *c, int d);

/* Global data references */
extern int DAT_007db094;
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void FUN_0053a0c0(void)
{
    __asm {
        mov     edx, dword ptr [DAT_007db094]
        xor     eax, eax
        mov     al, byte ptr [edx + 0x28]
        sub     esp, 0x50
        push    edi
        mov     edi, dword ptr [esp + 0x58]     ; param1 (index)
        cmp     edi, eax
        jz      epilogue

        lea     eax, [ecx + 0x204d24]
        push    esi
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [eax]
        push    0
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x1c], 0x772d80
        call    FUN_0041ee70

        lea     ecx, [esp + 0x18]
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jz      process_results

    iter_loop:
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0xc], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x10], edx
        mov     ecx, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x14], ecx
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_0041acb0

        xor     edx, edx
        mov     dx, word ptr [esi + 0x74]
        xor     eax, eax
        mov     ax, word ptr [esi + 0x76]
        push    2
        lea     ecx, [esp + 0x60]
        push    ecx
        lea     ecx, [esp + 0x38]
        mov     dword ptr [esp + 0x64], edx
        mov     dword ptr [esp + 0x10], eax
        call    FUN_0041f030

        push    2
        lea     edx, [esp + 0xc]
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_0041f030

        push    4
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0041f030

        push    4
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_0041f030

        push    4
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_0041f030

        push    4
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0041f030

        push    4
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_0041f030

        push    4
        lea     edx, [esp + 0x30]
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_0041f030

        lea     ecx, [esp + 0x18]
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jnz     iter_loop

    process_results:
        mov     eax, dword ptr [esp + 0x44]
        sub     eax, dword ptr [esp + 0x40]
        jz      cleanup

        mov     edx, dword ptr [esp + 0x30]
        push    0
        lea     ecx, [esp + 0x34]
        call    dword ptr [edx + 0xc]

        mov     ecx, dword ptr [DAT_007dab44]
        mov     esi, dword ptr [esp + 0x40]
        mov     eax, dword ptr [esp + 0x48]
        mov     dword ptr [esp + 0x38], 0xffffffec
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x14]
        add     edx, 0x14
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        sub     eax, esi
        mov     esi, dword ptr [ecx + edi*4 + 0x3c44]
        add     ecx, 0x3c3c
        shl     eax, 3
        add     esi, eax
        mov     dword ptr [ecx + edi*4 + 8], esi
        mov     esi, dword ptr [ecx + 0xc00]
        add     esi, eax
        push    1
        lea     eax, [esp + 0x34]
        push    eax
        mov     dword ptr [ecx + 0xc00], esi
        mov     ecx, dword ptr [edx]
        push    0xe
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004ce190

    cleanup:
        lea     ecx, [esp + 0x30]
        call    FUN_0041ef60
        pop     esi

    epilogue:
        pop     edi
        add     esp, 0x50
        ret     4
    }
}
