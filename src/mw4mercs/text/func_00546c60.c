/*
 * FUN_00546c60 (1042 B) — __thiscall method with 3 stack params
 * (this, slot, eventId, payload).
 * Large switch dispatcher with jump table.
 *
 * The case labels below are keyed by the REFERENCE jump table at 0x547074
 * (index = eventId - 0x0A), so each label names the event id that dispatches
 * to that body -- not the body's order in this file. The compiler laid the
 * bodies out in an order that interleaves the event ids (0x0E/0x0F, 0x10,
 * 0x28/0x29, 0x2C, ...), so the labels are NOT sequential.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern int __fastcall FUN_00546af0(int a, int b);
extern void __stdcall FUN_0053f210(int a, int b);
extern void __stdcall FUN_0053f910(int a, int b);
extern void __stdcall FUN_0053f9b0(int a, int b);
extern void __stdcall FUN_0053a6c0(int a, int b);
extern void __stdcall FUN_0053a280(int a, int b);
extern void __stdcall FUN_0053ab70(int a, int b);
extern void __stdcall FUN_0053b120(int a, int b);
extern void __stdcall FUN_0053b1d0(int a, int b);
extern void __stdcall FUN_0053b480(int a, int b);
extern void __stdcall FUN_0053beb0(int a, int b);
extern void __stdcall FUN_0053c9f0(int a, int b);
extern void __stdcall FUN_00538a50(int a, int b);
extern void __stdcall FUN_0053d160(int a, int b);
extern void __stdcall FUN_0053e8b0(int a, int b);
extern void __stdcall FUN_0053ec40(int a, int b);
extern void __stdcall FUN_00539690(int a, int b);
extern void __stdcall FUN_0053cb90(int a, int b);
extern void __stdcall FUN_0053cbf0(int a, int b);
extern void __stdcall FUN_0053d060(int a, int b);
extern void __stdcall FUN_0053d070(int a, int b);
extern void __stdcall FUN_0053cd70(int a, int b);
extern void __stdcall FUN_0053dda0(int a, int b);
extern void __stdcall FUN_0053e290(int a, int b);
extern void __stdcall FUN_0053e7b0(int a, int b);
extern void __stdcall FUN_0053f140(int a, int b);
extern void __stdcall FUN_00542b00(int a, int b);
extern void __stdcall FUN_00542dc0(int a, int b);
extern void __stdcall FUN_00543150(int a, int b);
extern void __stdcall FUN_0053a5d0(int a, int b);
extern void __stdcall FUN_00543d60(int a, int b);
extern void __stdcall FUN_00543430(int a, int b);
extern void __stdcall FUN_00538ae0(int a, int b);
extern void __stdcall FUN_00538f90(int a, int b);
extern void __stdcall FUN_00544f10(int a, int b);
extern void __stdcall FUN_00544f80(int a, int b);
extern void __stdcall FUN_00544fb0(int a, int b);
extern void __stdcall FUN_00544e90(int a, int b);
extern void __stdcall FUN_00544ea0(int a, int b);
extern void __stdcall FUN_00543ab0(int a, int b);
extern void __stdcall FUN_0053efc0(int a, int b);
extern void __stdcall FUN_0053c0f0(int a, int b);
extern void __stdcall FUN_0053d040(int a, int b);
extern void __stdcall FUN_005391a0(int a, int b);
extern void __stdcall FUN_005391d0(int a, int b);
extern void __stdcall FUN_00539210(int a, int b);
extern void __stdcall FUN_00539300(int a, int b);
extern void __stdcall FUN_00539370(int a, int b);
extern void __stdcall FUN_0053d080(int a, int b);
extern void __stdcall FUN_00545a10(int a, int b);
extern void __stdcall FUN_0053e180(int a, int b);
extern void __stdcall FUN_006fab90(int msg);
extern int DAT_00547074;

__declspec(naked) void __fastcall FUN_00546c60(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        push    ebx
        mov     esi, ecx
        push    edi
        call    FUN_00546af0
        test    al, al
        jnz     l_exit

        lea     eax, [ebx - 0xa]
        cmp     eax, 0x32
        ja      l_default

        jmp     dword ptr [eax*4 + DAT_00547074]

        /* case 0x0a (10) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_0053f210
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x0b (11) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_0053f910
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x0c (12) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_0053f9b0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x0d (13) */
        mov     ecx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [esi]
        push    ecx
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x68]
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x0f (15) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_0053a6c0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x0e (14) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_0053a280
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x11 (17) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_0053ab70
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x12 (18) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_0053b120
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x13 (19) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_0053b1d0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x14 (20) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_0053b480
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x15 (21) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_0053beb0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x16 (22) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_0053c9f0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x17 (23) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_00538a50
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x18 (24) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_0053d160
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x19 (25) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_0053e8b0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x1a (26) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_0053ec40
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x1b (27) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_00539690
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x1c (28) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_0053cb90
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x1d (29) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_0053cbf0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x1e (30) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_0053d060
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x1f (31) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_0053d070
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x10 (16) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_0053cd70
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x20 (32) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_0053dda0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x21 (33) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_0053e290
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x22 (34) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_0053e7b0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x23 (35) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_0053f140
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x24 (36) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_00542b00
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x25 (37) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_00542dc0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x26 (38) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_00543150
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x27 (39) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_0053a5d0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x29 (41) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_00543d60
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x28 (40) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_00543430
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x2a (42) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_00538ae0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x2b (43) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_00538f90
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x2d (45) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_00544f10
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x2e (46) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_00544f80
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x2f (47) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_00544fb0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x2c (44) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_00544e90
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x30 (48) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_00544ea0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x31 (49) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_00543ab0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x32 (50) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_0053efc0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x33 (51) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_0053c0f0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x34 (52) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_0053d040
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x35 (53) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_005391a0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x36 (54) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_005391d0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x37 (55) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_00539210
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x38 (56) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_00539300
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x39 (57) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_00539370
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x3a (58) */
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_0053d080
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x3b (59) */
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_00545a10
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

        /* case 0x3c (60) */
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_0053e180
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc

l_default:
        push    0x77b8b8
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_exit
        int     3

l_exit:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }


}
