/*
 * FUN_005394A0 (494 B) — __fastcall method on a large object (~0x239ddc+ bytes).
 *
 * Iterates 0xFF entries (0x2038 stride), calls FUN_0053C120 for each non-null
 * entry that doesn't match a global index. Then processes game state:
 * - Logs "Game_Start" and two color values
 * - Frees two buffers at +0x5648 / +0x564c
 * - Copies 16 bytes from +0x239dcc to +0x239ddc
 * - Calls FUN_005663B0
 * - If a wchar_t string at +0x239dec exists, converts to wide-char buffer
 * - Copies a string from a global structure
 * - Calls FUN_00564AA0
 * - Resets 8 triple-word slots at +0x239d6c
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern void FUN_0053c120(int a, int b);
extern void FUN_00563800(void);
extern void FUN_00563c80(const char *s);
extern int  FUN_0072dc20(int a, int b, int c, int d);
extern int  FUN_0072dcf0(int a, int b, int c);
extern void FUN_004084e0(void *ptr);
extern void *FUN_004084d0(int size);
extern void FUN_005663b0(void);
extern void FUN_00564aa0(void);

/* Global data references */
extern int DAT_007db094;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007dd268;

/* IAT function pointers (call dword ptr [imm32]) */
extern int *DAT_0076b404;   /* wcslen */
extern int *DAT_0076b3f8;   /* wcsncpy */
extern int *DAT_0076b320;   /* strncpy */

__declspec(naked) void FUN_005394a0(void)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        xor     edi, edi
        lea     ebp, [esi + 0x3539]

    loop_start:
        mov     al, byte ptr [ebp + 1]
        test    al, al
        jz      loop_next
        cmp     byte ptr [ebp], 0
        jz      loop_next
        mov     ecx, dword ptr [DAT_007db094]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        cmp     edi, eax
        jz      loop_next
        push    0
        push    edi
        mov     ecx, esi
        call    FUN_0053c120

    loop_next:
        inc     edi
        add     ebp, 0x2038
        cmp     edi, 0xff
        jl      loop_start

        mov     eax, dword ptr [DAT_007db094]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        push    0
        mov     ecx, esi
        push    edx
        call    FUN_0053c120

        mov     al, byte ptr [esi + 0x16]
        test    al, al
        jz      epilogue
        mov     al, byte ptr [esi + 0x17]
        test    al, al
        jz      epilogue

        call    FUN_00563800
        push    0x77b678
        call    FUN_00563c80
        add     esp, 4

        push    0xffff
        push    0xffff
        push    0xffff
        push    0
        call    FUN_0072dc20
        push    eax
        call    FUN_00563c80
        add     esp, 4

        push    0xffff
        push    0xffff
        push    0xffff
        call    FUN_0072dcf0
        push    eax
        call    FUN_00563c80
        mov     eax, dword ptr [esi + 0x5648]
        add     esp, 4
        test    eax, eax
        jz      check_buf2
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x5648], 0

    check_buf2:
        mov     eax, dword ptr [esi + 0x564c]
        test    eax, eax
        jz      check_global
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x564c], 0

    check_global:
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0xc]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x50]
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jnz     skip_copy

        lea     edx, [esi + 0x239dcc]
        mov     ecx, dword ptr [edx]
        lea     eax, [esi + 0x239ddc]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [edx + 4]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [edx + 8]
        mov     edx, dword ptr [edx + 0xc]
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], edx

        call    FUN_005663b0

        mov     ebp, dword ptr [esi + 0x239dec]
        test    ebp, ebp
        jz      skip_copy

        push    ebp
        call    dword ptr [DAT_0076b404]     ; wcslen
        mov     edi, eax
        inc     edi
        lea     eax, [edi + edi]
        push    eax
        call    FUN_004084d0
        push    edi
        push    ebp
        push    eax
        mov     dword ptr [esi + 0x5648], eax
        call    dword ptr [DAT_0076b3f8]     ; wcsncpy

        mov     ecx, dword ptr [DAT_007dd268]
        mov     edx, dword ptr [ecx + 0x40ee8]
        mov     edi, dword ptr [edx + 0x80]
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     edi, ecx
        inc     edi
        push    edi
        call    FUN_004084d0
        mov     ecx, dword ptr [DAT_007dd268]
        mov     edx, dword ptr [ecx + 0x40ee8]
        mov     ecx, dword ptr [edx + 0x80]
        push    edi
        push    ecx
        push    eax
        mov     dword ptr [esi + 0x564c], eax
        call    dword ptr [DAT_0076b320]     ; strncpy
        add     esp, 0x24

    skip_copy:
        call    FUN_00564aa0

        add     esi, 0x239d6c
        mov     edi, 8

    reset_loop:
        mov     eax, dword ptr [esi + 4]
        mov     edx, dword ptr [esi]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 2
        test    ecx, ecx
        jle     reset_store
    dead_loop:
        mov     ebp, dword ptr [eax]
        mov     dword ptr [edx], ebp
        add     eax, 4
        add     edx, 4
        dec     ecx
        jnz     dead_loop
    reset_store:
        mov     dword ptr [esi + 4], edx
        add     esi, 0xc
        dec     edi
        jnz     reset_loop

    epilogue:
        pop     edi
        pop     esi
        pop     ebp
        ret
    }
}
