/*
 * FUN_0052a460 (753 B) — SafeDisc/CD-check related function.
 * Calls CdaSysUpgrade, CdaSysGetLastError, CdaSysInstall, checks
 * for "ScsHD.csa" file, and performs anti-tamper verification.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern int __stdcall FUN_00536060(int);
extern int __stdcall CdaSysUpgrade(void);
extern int __stdcall CdaSysGetLastError(void);
extern int __stdcall CdaSysInstall(void);
extern void __stdcall FUN_006fb750(char *buf, int size);
extern int __stdcall FUN_006fb770(char *str);
extern int __stdcall FUN_006fc4d0(char *str);
extern int __stdcall FUN_006fbc80(char *str);
extern int __stdcall FUN_004084d0(int);
extern void __stdcall FUN_006fc400(int *out, char *str, int zero);
extern void __stdcall FUN_006fc600(int a, int b, int c);
extern void __stdcall FUN_006fc580(int);
extern int __stdcall FUN_00760630(int a, int b, int zero, int *out);
extern void __stdcall FUN_004084e0(int);
extern int __stdcall FUN_00760a10(int a, int b, int *out);
extern void __stdcall FUN_007604b0(int);
extern void __stdcall FUN_004c8eb0(int a, int b);
extern void __stdcall FUN_0070e390(char *buf);
extern void __stdcall FUN_0070e3c0(char *buf, int *val, int size);
extern void __stdcall FUN_0070e460(int *out, char *buf);
extern void __stdcall FUN_004c8e90(int);

/* Global data references */
extern int *DAT_007dab44;
extern int DAT_007dab40;

/* IAT entries (indirect call targets) */
extern int *DAT_0076b040;
extern int *DAT_0076b044;
extern int *DAT_0076b048;
extern int *DAT_0076b414;

__declspec(naked) int __stdcall FUN_0052a460(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        sub     esp, 0x280
        push    esi
        push    edi

        xor     eax, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [eax + 0xc]
        push    1
        xor     ecx, 0x85739531
        call    FUN_00536060
        or      eax, edx
        jnz     l_check_cda
        xor     esi, esi
        mov     dword ptr [esp + 8], esi
        jmp     l_anti_tamper

    l_check_cda:
        call    dword ptr [DAT_0076b040]

        test    eax, eax
        jnz     l_init_buf

        call    dword ptr [DAT_0076b044]

        cmp     eax, 0x3ed
        jnz     l_init_buf

        call    dword ptr [DAT_0076b048]

        test    eax, eax
        jnz     l_init_buf
        xor     esi, esi
        mov     dword ptr [esp + 8], esi
        jmp     l_anti_tamper

    l_init_buf:
        push    ebx
        push    0x100
        lea     ecx, [esp + 0x90]
        push    ecx
        call    FUN_006fb750
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x8c]

    l_strlen_loop:
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x18c]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a534
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x18c]
        mov     edi, edx
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        lea     eax, [esp + 0x18c]
        and     ecx, 3
        push    eax
        rep movsb
        call    FUN_006fb770
        push    0x77a528
        call    FUN_006fc4d0
        test    al, al
        pop     ebx
        jz      l_cleanup_no_file

        push    0x77a528
        call    FUN_006fbc80
        mov     esi, eax
        cmp     esi, -1
        jz      l_cleanup_fail

        push    esi
        call    FUN_004084d0
        add     esp, 4
        push    0
        push    0x77a528
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     edi, eax
        call    FUN_006fc400
        mov     edx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        push    edx
        call    FUN_006fc600
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        call    FUN_006fc580
        lea     ecx, [esp + 8]
        push    ecx
        push    0
        push    esi
        push    edi
        mov     dword ptr [esp + 0x18], 0
        call    FUN_00760630
        push    edi
        mov     esi, eax
        call    FUN_004084e0
        add     esp, 4
        lea     edx, [esp + 0x88]
        push    edx
        call    FUN_006fb770
        test    esi, esi
        jnz     l_set_zero

        mov     ecx, dword ptr [esp + 8]
        lea     eax, [esp + 0x14]
        push    eax
        push    0x1120001
        push    ecx
        call    FUN_00760a10
        cmp     dword ptr [esp + 0x14], 0x9f3025a9
        jnz     l_set_zero

        mov     eax, dword ptr [esp + 8]
        lea     edx, [esp + 0x18]
        push    edx
        push    0x30120001
        push    eax
        call    FUN_00760a10
        mov     eax, dword ptr [esp + 0x18]
        xor     ecx, ecx
        cmp     eax, 3
        setz    cl
        mov     esi, ecx
        jmp     l_check_free

    l_cleanup_fail:
        lea     edx, [esp + 0x88]
        push    edx
        call    FUN_006fb770
        xor     esi, esi
        mov     dword ptr [esp + 8], esi
        jmp     l_anti_tamper

    l_cleanup_no_file:
        lea     eax, [esp + 0x88]
        push    eax
        call    FUN_006fb770
        xor     esi, esi
        mov     dword ptr [esp + 8], esi
        jmp     l_anti_tamper

    l_set_zero:
        xor     esi, esi

    l_check_free:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jz      l_anti_tamper
        push    eax
        call    FUN_007604b0

    l_anti_tamper:
        mov     eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [eax]

        mov     ecx, dword ptr [DAT_007dab40]

        xor     edx, ecx
        mov     edx, dword ptr [edx + 0x48]
        xor     edx, 0x85739531
        mov     dword ptr [esp + 0x1c], edx
        jnz     l_anti_tamper_fail

        call    dword ptr [DAT_0076b414]

        push    0x12
        push    eax
        mov     dword ptr [esp + 0x14], eax
        call    FUN_004c8eb0
        push    0x13
        push    esi
        mov     dword ptr [esp + 0x20], esi
        call    FUN_004c8eb0
        add     esp, 0x10
        lea     eax, [esp + 0x30]
        push    eax
        call    FUN_0070e390
        push    4
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x38]
        push    edx
        call    FUN_0070e3c0
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        call    FUN_0070e3c0
        lea     edx, [esp + 0x30]
        push    edx
        lea     eax, [esp + 0x24]
        push    eax
        call    FUN_0070e460
        mov     ecx, dword ptr [esp + 0x20]
        xor     ecx, dword ptr [esp + 0x28]
        push    0x14
        push    ecx
        call    FUN_004c8eb0
        add     esp, 8
        pop     edi
        mov     eax, 1
        pop     esi
        add     esp, 0x280
        ret

    l_anti_tamper_fail:
        mov     dword ptr [esp + 0x10], esi
        mov     esi, dword ptr [eax]
        lea     edx, [esp + 0x30]
        push    edx
        xor     esi, ecx
        call    FUN_0070e390
        push    4
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        call    FUN_0070e3c0
        push    4
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x38]
        push    eax
        call    FUN_0070e3c0
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        call    FUN_0070e460
        mov     eax, dword ptr [esp + 0x20]
        mov     edi, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esi + 0x50]
        xor     eax, edi
        xor     ecx, 0x85739531
        cmp     ecx, eax
        jz      l_anti_tamper_ok
        push    3
        call    FUN_004c8e90
        add     esp, 4

    l_anti_tamper_ok:
        pop     edi
        mov     eax, 1
        pop     esi
        add     esp, 0x280
        ret
    }
}
