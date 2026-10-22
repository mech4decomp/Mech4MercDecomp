/*
 * FUN_0053cf80 (182 B) — __fastcall.
 * Broadcasts a state change to all players, then waits for a time threshold.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern void __fastcall FUN_005313d0(void);
extern int __fastcall FUN_004ce190(int param1, int param2, int param3, int param4);
extern double __cdecl FUN_00707e70(int param1);
extern void __cdecl FUN_00707b40(void);
extern void __cdecl FUN_00701730(void);
/* Sleep is declared in windows.h */

/* Global data references */
extern int DAT_007db094;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern double DAT_0077b718;
extern int DAT_0076b0d8;

__declspec(naked) void FUN_0053cf80(void)
{
    
__asm {
/* 0x0053CF80: sub esp, 0x8 */
        sub     esp, 0x8

        /* 0x0053CF83: push esi */
        push    esi

        /* 0x0053CF84: push edi */
        push    edi

        /* 0x0053CF85: mov edi, ecx */
        mov     edi, ecx

        /* 0x0053CF87: call 0x005313d0 */
        call    FUN_005313d0

        /* 0x0053CF8C: xor esi, esi */
        xor     esi, esi

        /* 0x0053CF8E: add edi, 0x3544 */
        add     edi, 0x3544

    loop_start:
        /* 0x0053CF94: mov al, [edi + -0xc] */
        mov     al, [edi + -0xc]

        /* 0x0053CF97: test al, al */
        test    al, al

        /* 0x0053CF99: jz loop_next */
        jz      loop_next

        /* 0x0053CF9B: mov ecx, [0x007db094] */
        mov     ecx, dword ptr [DAT_007db094]

        /* 0x0053CFA1: xor eax, eax */
        xor     eax, eax

        /* 0x0053CFA3: mov al, [ecx + 0x28] */
        mov     al, [ecx + 0x28]

        /* 0x0053CFA6: cmp esi, eax */
        cmp     esi, eax

        /* 0x0053CFA8: jz loop_next */
        jz      loop_next

        /* 0x0053CFAA: mov edx, [0x007dab44] */
        mov     edx, dword ptr [DAT_007dab44]

        /* 0x0053CFB0: mov ecx, [0x007dab40] */
        mov     ecx, dword ptr [DAT_007dab40]

        /* 0x0053CFB6: mov eax, [edx] */
        mov     eax, [edx]

        /* 0x0053CFB8: push 0x1 */
        push    0x1

        /* 0x0053CFBA: push 0x0 */
        push    0x0

        /* 0x0053CFBC: xor eax, ecx */
        xor     eax, ecx

        /* 0x0053CFBE: mov ecx, [eax + 0x14] */
        mov     ecx, [eax + 0x14]

        /* 0x0053CFC1: push 0x1c */
        push    0x1c

        /* 0x0053CFC3: push esi */
        push    esi

        /* 0x0053CFC4: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053CFCA: mov byte ptr [edi], 0x1 */
        mov     byte ptr [edi], 0x1

        /* 0x0053CFCD: call 0x004ce190 */
        call    FUN_004ce190

    loop_next:
        /* 0x0053CFD2: inc esi */
        inc     esi

        /* 0x0053CFD3: add edi, 0x2038 */
        add     edi, 0x2038

        /* 0x0053CFD9: cmp esi, 0xff */
        cmp     esi, 0xff

        /* 0x0053CFDF: jl loop_start */
        jl      loop_start

        /* 0x0053CFE1: push 0x1 */
        push    0x1

        /* 0x0053CFE3: call 0x00707e70 */
        call    FUN_00707e70

        /* 0x0053CFE8: fstp qword ptr [esp + 0x8] */
        fstp    qword ptr [esp + 0x8]

        /* 0x0053CFEC: push 0x1 */
        push    0x1

        /* 0x0053CFEE: call 0x00707e70 */
        call    FUN_00707e70

        /* 0x0053CFF3: fsub qword ptr [esp + 0x8] */
        fsub    qword ptr [esp + 0x8]

        /* 0x0053CFF7: fcomp qword ptr [0x0077b718] */
        fcomp   qword ptr [DAT_0077b718]

        /* 0x0053CFFD: fnstsw ax */
        fnstsw  ax

        /* 0x0053CFFF: test ah, 0x1 */
        test    ah, 0x1

        /* 0x0053D002: jz wait_done */
        jz      wait_done

        /* 0x0053D004: mov esi, [0x0076b0d8] */
        mov     esi, dword ptr [DAT_0076b0d8]

    wait_loop:
        /* 0x0053D00A: call 0x00707b40 */
        call    FUN_00707b40

        /* 0x0053D00F: call 0x00701730 */
        call    FUN_00701730

        /* 0x0053D014: push 0x1e */
        push    0x1e

        /* 0x0053D016: call esi */
        call    esi

        /* 0x0053D018: push 0x1 */
        push    0x1

        /* 0x0053D01A: call 0x00707e70 */
        call    FUN_00707e70

        /* 0x0053D01F: fsub qword ptr [esp + 0x8] */
        fsub    qword ptr [esp + 0x8]

        /* 0x0053D023: fcomp qword ptr [0x0077b718] */
        fcomp   qword ptr [DAT_0077b718]

        /* 0x0053D029: fnstsw ax */
        fnstsw  ax

        /* 0x0053D02B: test ah, 0x1 */
        test    ah, 0x1

        /* 0x0053D02E: jnz wait_loop */
        jnz     wait_loop

    wait_done:
        /* 0x0053D030: pop edi */
        pop     edi

        /* 0x0053D031: pop esi */
        pop     esi

        /* 0x0053D032: add esp, 0x8 */
        add     esp, 0x8

        /* 0x0053D035: ret */
        ret
    }


}
