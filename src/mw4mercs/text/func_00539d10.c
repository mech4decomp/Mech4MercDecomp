/*
 * FUN_00539D10 (144 B) — __fastcall method.
 *
 * Reads "MOTD.txt" (Message of the Day) via FUN_006FC4D0.
 * If it exists, opens it and reads up to 5 chunks of 0xDE bytes
 * into a buffer at +0x309c, tracking count at +0x3098.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern char FUN_006fc4d0(const char *name);
extern void FUN_0041de80(const char *name, int mode);
extern char FUN_0041e790(void *buf, int size, int mode);
extern void FUN_0041dec0(void);

__declspec(naked) void FUN_00539d10(void)
{
    __asm {
        sub     esp, 0x30
        push    esi
        push    0x77b684
        mov     esi, ecx
        call    FUN_006fc4d0
        test    al, al
        jz      epilogue

        push    0
        push    0x77b684
        lea     ecx, [esp + 0xc]
        call    FUN_0041de80

        push    0
        push    0xde
        lea     eax, [esi + 0x309c]
        push    eax
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esi + 0x3098], 0
        call    FUN_0041e790
        test    al, al
        jz      cleanup

    read_loop:
        mov     edx, dword ptr [esi + 0x3098]
        inc     edx
        mov     eax, edx
        cmp     eax, 5
        mov     dword ptr [esi + 0x3098], edx
        jz      cleanup

        lea     ecx, [eax + eax*8]
        lea     eax, [eax + ecx*4]
        push    0
        lea     edx, [eax + eax*2]
        push    0xde
        lea     eax, [esi + edx*2 + 0x309c]
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_0041e790
        test    al, al
        jnz     read_loop

    cleanup:
        lea     ecx, [esp + 4]
        call    FUN_0041dec0

    epilogue:
        pop     esi
        add     esp, 0x30
        ret
    }
}
