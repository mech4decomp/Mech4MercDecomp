/*
 * FUN_0053db90 (526 B) — __thiscall, RET 0x4.
 * Player stats update and notification function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern void __fastcall FUN_0041ee70(int param1);
extern void __fastcall FUN_0041f030(void *param1, int param2);
extern int __fastcall FUN_00624600(void);
extern void __fastcall FUN_00412570(int param1);
extern void __stdcall FUN_004084e0(int ptr);
extern int __fastcall FUN_004ce190(int param1, int param2, void *param3, int param4);
extern void __fastcall FUN_0041ef60(void *param1);

/* Global data references */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db094;
extern int *DAT_0076b320;   /* IAT slot for strncpy */

__declspec(naked) void FUN_0053db90(void)
{
    
__asm {
/* 0x0053DB90: sub esp, 0x50 */
        sub     esp, 0x50

        /* 0x0053DB93: mov eax, [0x007dab44] */
        mov     eax, dword ptr [DAT_007dab44]

        /* 0x0053DB98: mov edx, [0x007dab40] */
        mov     edx, dword ptr [DAT_007dab40]

        /* 0x0053DB9E: push ebx */
        push    ebx

        /* 0x0053DB9F: push ebp */
        push    ebp

        /* 0x0053DBA0: mov ebx, ecx */
        mov     ebx, ecx

        /* 0x0053DBA2: mov ecx, [eax] */
        mov     ecx, [eax]

        /* 0x0053DBA4: push esi */
        push    esi

        /* 0x0053DBA5: push edi */
        push    edi

        /* 0x0053DBA6: xor ecx, edx */
        xor     ecx, edx

        /* 0x0053DBA8: mov edi, [ecx + 0x20] */
        mov     edi, [ecx + 0x20]

        /* 0x0053DBAB: xor edi, 0x85739531 */
        xor     edi, 0x85739531

        /* 0x0053DBB1: push 0x0 */
        push    0x0

        /* 0x0053DBB3: lea ecx, [esp + 0x3c] */
        lea     ecx, [esp + 0x3c]

        /* 0x0053DBB7: mov [esp + 0x18], edi */
        mov     [esp + 0x18], edi

        /* 0x0053DBBB: call 0x0041ee70 */
        call    FUN_0041ee70

        /* 0x0053DBC0: mov esi, [esp + 0x64] */
        mov     esi, [esp + 0x64]

        /* 0x0053DBC4: mov edx, esi */
        mov     edx, esi

        /* 0x0053DBC6: shl edx, 7 */
        shl     edx, 7

        /* 0x0053DBC9: add edx, esi */
        add     edx, esi

        /* 0x0053DBCB: shl edx, 3 */
        shl     edx, 3

        /* 0x0053DBCE: sub edx, esi */
        sub     edx, esi

        /* 0x0053DBD0: mov cl, [ebx + edx*8 + 0x353e] */
        mov     cl, [ebx + edx*8 + 0x353e]

        /* 0x0053DBD7: cmp cl, 0x1 */
        cmp     cl, 0x1

        /* 0x0053DBDA: lea eax, [ebx + edx*8] */
        lea     eax, [ebx + edx*8]

        /* 0x0053DBDD: mov [esp + 0x18], eax */
        mov     [esp + 0x18], eax

        /* 0x0053DBE1: jz epilogue */
        jz      epilogue

        /* 0x0053DBE7: mov ebx, [edi + 0x225c] */
        mov     ebx, [edi + 0x225c]

        /* 0x0053DBED: mov ebp, [ebx + 0x2b8] */
        mov     ebp, [ebx + 0x2b8]

        /* 0x0053DBF3: mov byte ptr [eax + 0x353e], 0x1 */
        mov     byte ptr [eax + 0x353e], 0x1

        /* 0x0053DBFA: mov eax, [ebx + 0x2bc] */
        mov     eax, [ebx + 0x2bc]

        /* 0x0053DC00: mov ecx, eax */
        mov     ecx, eax

        /* 0x0053DC02: sub ecx, ebp */
        sub     ecx, ebp

        /* 0x0053DC04: test ecx, 0xfffffff0 */
        test    ecx, 0xfffffff0

        /* 0x0053DC0A: jz epilogue */
        jz      epilogue

        /* 0x0053DC10: cmp ebp, eax */
        cmp     ebp, eax

        /* 0x0053DC12: jz after_send_loop */
        jz      after_send_loop

        /* 0x0053DC18: lea esi, [ebp + 0x8] */
        lea     esi, [ebp + 0x8]

    send_loop:
        /* 0x0053DC1B: push 0x1 */
        push    0x1

        /* 0x0053DC1D: push ebp */
        push    ebp

        /* 0x0053DC1E: lea ecx, [esp + 0x40] */
        lea     ecx, [esp + 0x40]

        /* 0x0053DC22: call 0x0041f030 */
        call    FUN_0041f030

        /* 0x0053DC27: push 0x4 */
        push    0x4

        /* 0x0053DC29: lea edx, [esi + -0x4] */
        lea     edx, [esi + -0x4]

        /* 0x0053DC2C: push edx */
        push    edx

        /* 0x0053DC2D: lea ecx, [esp + 0x40] */
        lea     ecx, [esp + 0x40]

        /* 0x0053DC31: call 0x0041f030 */
        call    FUN_0041f030

        /* 0x0053DC36: push 0x4 */
        push    0x4

        /* 0x0053DC38: push esi */
        push    esi

        /* 0x0053DC39: lea ecx, [esp + 0x40] */
        lea     ecx, [esp + 0x40]

        /* 0x0053DC3D: call 0x0041f030 */
        call    FUN_0041f030

        /* 0x0053DC42: push 0x1 */
        push    0x1

        /* 0x0053DC44: lea eax, [esi + 0x4] */
        lea     eax, [esi + 0x4]

        /* 0x0053DC47: push eax */
        push    eax

        /* 0x0053DC48: lea ecx, [esp + 0x40] */
        lea     ecx, [esp + 0x40]

        /* 0x0053DC4C: call 0x0041f030 */
        call    FUN_0041f030

        /* 0x0053DC51: xor eax, eax */
        xor     eax, eax

        /* 0x0053DC53: mov ecx, 0x6 */
        mov     ecx, 0x6

        /* 0x0053DC58: lea edi, [esp + 0x1c] */
        lea     edi, [esp + 0x1c]

        /* 0x0053DC5C: rep stosd */
        rep stosd

        /* 0x0053DC5E: mov ecx, ebx */
        mov     ecx, ebx

        /* 0x0053DC60: stosb */
        stosb

        /* 0x0053DC61: call 0x00624600 */
        call    FUN_00624600

        /* 0x0053DC66: push eax */
        push    eax

        /* 0x0053DC67: lea ecx, [esp + 0x14] */
        lea     ecx, [esp + 0x14]

        /* 0x0053DC6B: call 0x00412570 */
        call    FUN_00412570

        /* 0x0053DC70: mov edx, [esp + 0x10] */
        mov     edx, [esp + 0x10]

        /* 0x0053DC74: or ecx, 0xffffffff */
        or      ecx, 0xffffffff

        /* 0x0053DC77: xor eax, eax */
        xor     eax, eax

        /* 0x0053DC79: mov edi, edx */
        mov     edi, edx

        /* 0x0053DC7B: repne scasb */
        repne scasb

        /* 0x0053DC7D: not ecx */
        not     ecx

        /* 0x0053DC7F: dec ecx */
        dec     ecx

        /* 0x0053DC80: cmp ecx, 0x18 */
        cmp     ecx, 0x18

        /* 0x0053DC83: jle strlen_ok */
        jle     strlen_ok

        /* 0x0053DC85: mov ecx, 0x18 */
        mov     ecx, 0x18

    strlen_ok:
        /* 0x0053DC8A: push ecx */
        push    ecx

        /* 0x0053DC8B: push edx */
        push    edx

        /* 0x0053DC8C: lea ecx, [esp + 0x24] */
        lea     ecx, [esp + 0x24]

        /* 0x0053DC90: push ecx */
        push    ecx

        /* 0x0053DC91: call [0x0076b320] (strncpy) */
        call    dword ptr [DAT_0076b320]

        /* 0x0053DC97: add esp, 0xc */
        add     esp, 0xc

        /* 0x0053DC9A: push 0x19 */
        push    0x19

        /* 0x0053DC9C: lea edx, [esp + 0x20] */
        lea     edx, [esp + 0x20]

        /* 0x0053DCA0: push edx */
        push    edx

        /* 0x0053DCA1: lea ecx, [esp + 0x40] */
        lea     ecx, [esp + 0x40]

        /* 0x0053DCA5: mov byte ptr [esp + 0x3c], 0x0 */
        mov     byte ptr [esp + 0x3c], 0x0

        /* 0x0053DCAA: call 0x0041f030 */
        call    FUN_0041f030

        /* 0x0053DCAF: mov eax, [esp + 0x10] */
        mov     eax, [esp + 0x10]

        /* 0x0053DCB3: test eax, eax */
        test    eax, eax

        /* 0x0053DCB5: jz skip_refcount */
        jz      skip_refcount

        /* 0x0053DCB7: mov cl, [eax + -0x1] */
        mov     cl, [eax + -0x1]

        /* 0x0053DCBA: dec eax */
        dec     eax

        /* 0x0053DCBB: dec cl */
        dec     cl

        /* 0x0053DCBD: mov [eax], cl */
        mov     [eax], cl

        /* 0x0053DCBF: jnz skip_refcount */
        jnz     skip_refcount

        /* 0x0053DCC1: push eax */
        push    eax

        /* 0x0053DCC2: call 0x004084e0 */
        call    FUN_004084e0

        /* 0x0053DCC7: add esp, 0x4 */
        add     esp, 0x4

    skip_refcount:
        /* 0x0053DCCA: mov eax, [ebx + 0x2bc] */
        mov     eax, [ebx + 0x2bc]

        /* 0x0053DCD0: add ebp, 0x10 */
        add     ebp, 0x10

        /* 0x0053DCD3: add esi, 0x10 */
        add     esi, 0x10

        /* 0x0053DCD6: cmp ebp, eax */
        cmp     ebp, eax

        /* 0x0053DCD8: jnz send_loop */
        jnz     send_loop

        /* 0x0053DCDE: mov esi, [esp + 0x64] */
        mov     esi, [esp + 0x64]

        /* 0x0053DCE2: mov edi, [esp + 0x14] */
        mov     edi, [esp + 0x14]

    after_send_loop:
        /* 0x0053DCE6: mov eax, [esp + 0x38] */
        mov     eax, [esp + 0x38]

        /* 0x0053DCEA: push 0x0 */
        push    0x0

        /* 0x0053DCEC: lea ecx, [esp + 0x3c] */
        lea     ecx, [esp + 0x3c]

        /* 0x0053DCF0: call [eax + 0xc] */
        call    dword ptr [eax + 0xc]

        /* 0x0053DCF3: mov ecx, [esp + 0x18] */
        mov     ecx, [esp + 0x18]

        /* 0x0053DCF7: mov al, [ecx + 0x353c] */
        mov     al, [ecx + 0x353c]

        /* 0x0053DCFD: test al, al */
        test    al, al

        /* 0x0053DCFF: mov [esp + 0x40], 0xffffffec */
        mov     dword ptr [esp + 0x40], 0xffffffec

        /* 0x0053DD07: jz skip_stats_update */
        jz      skip_stats_update

        /* 0x0053DD09: mov eax, [0x007db094] */
        mov     eax, dword ptr [DAT_007db094]

        /* 0x0053DD0E: xor edx, edx */
        xor     edx, edx

        /* 0x0053DD10: mov dl, [eax + 0x28] */
        mov     dl, [eax + 0x28]

        /* 0x0053DD13: cmp esi, edx */
        cmp     esi, edx

        /* 0x0053DD15: jz skip_stats_update */
        jz      skip_stats_update

        /* 0x0053DD17: mov ecx, [0x007dab44] */
        mov     ecx, dword ptr [DAT_007dab44]

        /* 0x0053DD1D: mov edx, [ecx] */
        mov     edx, [ecx]

        /* 0x0053DD1F: mov ecx, [0x007dab40] */
        mov     ecx, dword ptr [DAT_007dab40]

        /* 0x0053DD25: mov ebx, [esp + 0x48] */
        mov     ebx, [esp + 0x48]

        /* 0x0053DD29: mov eax, [esp + 0x50] */
        mov     eax, [esp + 0x50]

        /* 0x0053DD2D: xor edx, ecx */
        xor     edx, ecx

        /* 0x0053DD2F: mov ecx, [edx + 0x14] */
        mov     ecx, [edx + 0x14]

        /* 0x0053DD32: add edx, 0x14 */
        add     edx, 0x14

        /* 0x0053DD35: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053DD3B: mov ecx, [ecx + 0x1814] */
        mov     ecx, [ecx + 0x1814]

        /* 0x0053DD41: mov ebp, [ecx + esi*4 + 0x3c44] */
        mov     ebp, [ecx + esi*4 + 0x3c44]

        /* 0x0053DD48: add ecx, 0x3c3c */
        add     ecx, 0x3c3c

        /* 0x0053DD4E: sub eax, ebx */
        sub     eax, ebx

        /* 0x0053DD50: shl eax, 3 */
        shl     eax, 3

        /* 0x0053DD53: add ebp, eax */
        add     ebp, eax

        /* 0x0053DD55: mov [ecx + esi*4 + 0x8], ebp */
        mov     [ecx + esi*4 + 0x8], ebp

        /* 0x0053DD59: mov ebx, [ecx + 0xc00] */
        mov     ebx, [ecx + 0xc00]

        /* 0x0053DD5F: add ebx, eax */
        add     ebx, eax

        /* 0x0053DD61: push 0x1 */
        push    0x1

        /* 0x0053DD63: lea eax, [esp + 0x3c] */
        lea     eax, [esp + 0x3c]

        /* 0x0053DD67: push eax */
        push    eax

        /* 0x0053DD68: mov [ecx + 0xc00], ebx */
        mov     [ecx + 0xc00], ebx

        /* 0x0053DD6E: mov ecx, [edx] */
        mov     ecx, [edx]

        /* 0x0053DD70: push 0x20 */
        push    0x20

        /* 0x0053DD72: push esi */
        push    esi

        /* 0x0053DD73: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053DD79: call 0x004ce190 */
        call    FUN_004ce190

    skip_stats_update:
        /* 0x0053DD7E: mov ecx, [edi + 0x225c] */
        mov     ecx, [edi + 0x225c]

        /* 0x0053DD84: mov byte ptr [ecx + 0x2f4], 0x0 */
        mov     byte ptr [ecx + 0x2f4], 0x0

    epilogue:
        /* 0x0053DD8B: lea ecx, [esp + 0x38] */
        lea     ecx, [esp + 0x38]

        /* 0x0053DD8F: call 0x0041ef60 */
        call    FUN_0041ef60

        /* 0x0053DD94: pop edi */
        pop     edi

        /* 0x0053DD95: pop esi */
        pop     esi

        /* 0x0053DD96: pop ebp */
        pop     ebp

        /* 0x0053DD97: pop ebx */
        pop     ebx

        /* 0x0053DD98: add esp, 0x50 */
        add     esp, 0x50

        /* 0x0053DD9B: ret 0x4 */
        ret     0x4
    }


}
