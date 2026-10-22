/*
 * FUN_0053cbf0 (376 B) — __thiscall, RET 0x8.
 * Dispatches a formatted string via sprintf, then calls various helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern void __cdecl FUN_0053ce70(int param1);
extern int __fastcall FUN_004f93b0(int param1);
extern int __fastcall FUN_004cdfa0(int param1);
extern void __cdecl FUN_00563d90(int param1);
extern int __cdecl FUN_00563550(const char *fmt, ...);
extern void __cdecl FUN_00563c80(int param1);
extern void __cdecl FUN_00565a70(int param1);
extern void __cdecl FUN_0052dbb0(void);
extern void __fastcall FUN_004ceb20(int param1);

/* sprintf import (IAT) */
extern int *DAT_0076b420;

/* Global data references */
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void FUN_0053cbf0(void)
{
    
__asm {
/* 0x0053CBF0: mov eax, [0x007dab44] */
        mov     eax, dword ptr [DAT_007dab44]

        /* 0x0053CBF5: sub esp, 0x100 */
        sub     esp, 0x100

        /* 0x0053CBFB: push ebp */
        push    ebp

        /* 0x0053CBFC: push esi */
        push    esi

        /* 0x0053CBFD: mov esi, [0x007dab40] */
        mov     esi, dword ptr [DAT_007dab40]

        /* 0x0053CC03: push edi */
        push    edi

        /* 0x0053CC04: mov edi, ecx */
        mov     edi, ecx

        /* 0x0053CC06: mov ecx, [eax] */
        mov     ecx, [eax]

        /* 0x0053CC08: xor ecx, esi */
        xor     ecx, esi

        /* 0x0053CC0A: mov esi, [esp + 0x110] */
        mov     esi, [esp + 0x110]

        /* 0x0053CC11: mov ecx, [ecx + 0xc] */
        mov     ecx, [ecx + 0xc]

        /* 0x0053CC14: mov edx, esi */
        mov     edx, esi

        /* 0x0053CC16: shl edx, 7 */
        shl     edx, 7

        /* 0x0053CC19: add edx, esi */
        add     edx, esi

        /* 0x0053CC1B: shl edx, 3 */
        shl     edx, 3

        /* 0x0053CC1E: sub edx, esi */
        sub     edx, esi

        /* 0x0053CC20: mov eax, [edi + edx*8 + 0x3588] */
        mov     eax, [edi + edx*8 + 0x3588]

        /* 0x0053CC27: lea ebp, [edi + edx*8] */
        lea     ebp, [edi + edx*8]

        /* 0x0053CC2A: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053CC30: mov edx, [ecx] */
        mov     edx, [ecx]

        /* 0x0053CC32: push eax */
        push    eax

        /* 0x0053CC33: push 0x7543 */
        push    0x7543

        /* 0x0053CC38: call [edx + 0x34] */
        call    dword ptr [edx + 0x34]

        /* 0x0053CC3B: push eax */
        push    eax

        /* 0x0053CC3C: lea eax, [esp + 0x14] */
        lea     eax, [esp + 0x14]

        /* 0x0053CC40: push eax */
        push    eax

        /* 0x0053CC41: call [0x0076b420] (sprintf) */
        call    dword ptr [DAT_0076b420]

        /* 0x0053CC47: mov ecx, [0x007dab44] */
        mov     ecx, dword ptr [DAT_007dab44]

        /* 0x0053CC4D: mov edx, [ecx] */
        mov     edx, [ecx]

        /* 0x0053CC4F: xor edx, [0x007dab40] */
        xor     edx, dword ptr [DAT_007dab40]

        /* 0x0053CC55: mov ecx, [edx + 0xc] */
        mov     ecx, [edx + 0xc]

        /* 0x0053CC58: add esp, 0xc */
        add     esp, 0xc

        /* 0x0053CC5B: lea edx, [esp + 0xc] */
        lea     edx, [esp + 0xc]

        /* 0x0053CC5F: push edx */
        push    edx

        /* 0x0053CC60: push 0x0 */
        push    0x0

        /* 0x0053CC62: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053CC68: mov eax, [ecx] */
        mov     eax, [ecx]

        /* 0x0053CC6A: push 0x0 */
        push    0x0

        /* 0x0053CC6C: push 0x1 */
        push    0x1

        /* 0x0053CC6E: call [eax + 0x30] */
        call    dword ptr [eax + 0x30]

        /* 0x0053CC71: push esi */
        push    esi

        /* 0x0053CC72: mov ecx, edi */
        mov     ecx, edi

        /* 0x0053CC74: call 0x0053ce70 */
        call    FUN_0053ce70

        /* 0x0053CC79: mov eax, [0x007dab44] */
        mov     eax, dword ptr [DAT_007dab44]

        /* 0x0053CC7E: mov ecx, [0x007dab40] */
        mov     ecx, dword ptr [DAT_007dab40]

        /* 0x0053CC84: mov eax, [eax] */
        mov     eax, [eax]

        /* 0x0053CC86: xor eax, ecx */
        xor     eax, ecx

        /* 0x0053CC88: mov ecx, [eax + 0x20] */
        mov     ecx, [eax + 0x20]

        /* 0x0053CC8B: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053CC91: jz skip_extra */
        jz      skip_extra

        /* 0x0053CC93: mov ecx, [ebp + 0x3584] */
        mov     ecx, [ebp + 0x3584]

        /* 0x0053CC99: test ecx, ecx */
        test    ecx, ecx

        /* 0x0053CC9B: jz skip_extra */
        jz      skip_extra

        /* 0x0053CC9D: mov ecx, [ecx + 0x170] */
        mov     ecx, [ecx + 0x170]

        /* 0x0053CCA3: test ecx, ecx */
        test    ecx, ecx

        /* 0x0053CCA5: jz skip_extra */
        jz      skip_extra

        /* 0x0053CCA7: add ecx, 0x14 */
        add     ecx, 0x14

        /* 0x0053CCAA: push ecx */
        push    ecx

        /* 0x0053CCAB: mov ecx, [eax + 0x20] */
        mov     ecx, [eax + 0x20]

        /* 0x0053CCAE: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053CCB4: call 0x004f93b0 */
        call    FUN_004f93b0

        /* 0x0053CCB9: test eax, eax */
        test    eax, eax

        /* 0x0053CCBB: jz skip_extra */
        jz      skip_extra

        /* 0x0053CCBD: mov edx, [eax] */
        mov     edx, [eax]

        /* 0x0053CCBF: push 0x1 */
        push    0x1

        /* 0x0053CCC1: mov ecx, eax */
        mov     ecx, eax

        /* 0x0053CCC3: call [edx] */
        call    dword ptr [edx]

    skip_extra:
        /* 0x0053CCC5: mov al, [edi + 0x16] */
        mov     al, [edi + 0x16]

        /* 0x0053CCC8: test al, al */
        test    al, al

        /* 0x0053CCCA: jz skip_log */
        jz      skip_log

        /* 0x0053CCCC: mov al, [edi + 0x17] */
        mov     al, [edi + 0x17]

        /* 0x0053CCCF: test al, al */
        test    al, al

        /* 0x0053CCD1: jz skip_log */
        jz      skip_log

        /* 0x0053CCD3: mov eax, [0x007dab44] */
        mov     eax, dword ptr [DAT_007dab44]

        /* 0x0053CCD8: mov ecx, [0x007dab40] */
        mov     ecx, dword ptr [DAT_007dab40]

        /* 0x0053CCDE: mov eax, [eax] */
        mov     eax, [eax]

        /* 0x0053CCE0: xor eax, ecx */
        xor     eax, ecx

        /* 0x0053CCE2: mov ecx, [eax + 0x14] */
        mov     ecx, [eax + 0x14]

        /* 0x0053CCE5: push esi */
        push    esi

        /* 0x0053CCE6: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053CCEC: call 0x004cdfa0 */
        call    FUN_004cdfa0

        /* 0x0053CCF1: mov edi, [eax + 0x30] */
        mov     edi, [eax + 0x30]

        /* 0x0053CCF4: cmp byte ptr [edi], 0x0 */
        cmp     byte ptr [edi], 0x0

        /* 0x0053CCF7: jnz have_name */
        jnz     have_name

        /* 0x0053CCF9: mov edi, 0x77b1f0 */
        mov     edi, 0x77b1f0

    have_name:
        /* 0x0053CCFE: push esi */
        push    esi

        /* 0x0053CCFF: call 0x00563d90 */
        call    FUN_00563d90

        /* 0x0053CD04: push edi */
        push    edi

        /* 0x0053CD05: push esi */
        push    esi

        /* 0x0053CD06: push 0x77b700 */
        push    0x77b700

        /* 0x0053CD0B: call 0x00563550 */
        call    FUN_00563550

        /* 0x0053CD10: push eax */
        push    eax

        /* 0x0053CD11: call 0x00563c80 */
        call    FUN_00563c80

        /* 0x0053CD16: push esi */
        push    esi

        /* 0x0053CD17: call 0x00565a70 */
        call    FUN_00565a70

        /* 0x0053CD1C: add esp, 0x18 */
        add     esp, 0x18

    skip_log:
        /* 0x0053CD1F: lea ecx, [ebp + 0x3538] */
        lea     ecx, [ebp + 0x3538]

        /* 0x0053CD25: call 0x0052dbb0 */
        call    FUN_0052dbb0

        /* 0x0053CD2A: mov ecx, [0x007dab44] */
        mov     ecx, dword ptr [DAT_007dab44]

        /* 0x0053CD30: mov eax, [ecx] */
        mov     eax, [ecx]

        /* 0x0053CD32: xor eax, [0x007dab40] */
        xor     eax, dword ptr [DAT_007dab40]

        /* 0x0053CD38: mov ecx, [eax + 0x14] */
        mov     ecx, [eax + 0x14]

        /* 0x0053CD3B: push esi */
        push    esi

        /* 0x0053CD3C: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053CD42: call 0x004cdfa0 */
        call    FUN_004cdfa0

        /* 0x0053CD47: test eax, eax */
        test    eax, eax

        /* 0x0053CD49: jz skip_cleanup */
        jz      skip_cleanup

        /* 0x0053CD4B: mov ecx, eax */
        mov     ecx, eax

        /* 0x0053CD4D: call 0x004ceb20 */
        call    FUN_004ceb20

    skip_cleanup:
        /* 0x0053CD52: pop edi */
        pop     edi

        /* 0x0053CD53: pop esi */
        pop     esi

        /* 0x0053CD54: mov [ebp + 0x3584], 0 */
        mov     dword ptr [ebp + 0x3584], 0

        /* 0x0053CD5E: pop ebp */
        pop     ebp

        /* 0x0053CD5F: add esp, 0x100 */
        add     esp, 0x100

        /* 0x0053CD65: ret 0x8 */
        ret     0x8
    }


}
