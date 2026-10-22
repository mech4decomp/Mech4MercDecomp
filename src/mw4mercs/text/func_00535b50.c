/*
 * FUN_00535B50 (981 B) — RET 0x4.
 *
 * Builds mission file paths, searches for files, and processes results.
 * Returns a byte (hash/status) in AL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern void FUN_00412570(void *ptr);
extern int  FUN_004125e0(void *a, void *b);
extern void FUN_00412740(int a);
extern void FUN_0040d9b0(void);
extern void *FUN_004084d0(int size);
extern void FUN_004084e0(void *ptr);
extern int  FUN_00547a00(void *ptr);
extern int  FUN_00416cc0(void *ptr);
extern void FUN_0040f060(void *ptr);
extern int  FUN_006fc4d0(void *ptr);
extern void FUN_00708930(void *a, void *b, void *c, int d);
extern int  FUN_0052b440(void *ptr);
extern void FUN_0041de80(void *ptr, int mode);
extern void FUN_0070e390(void *ptr);
extern void FUN_0070e3c0(void *a, void *b, int c);
extern void FUN_0070e460(void *a, void *b);
extern void FUN_0041dec0(void);
extern void FUN_005471f0(void *ptr);

/* Global data references */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007b8804;
extern int DAT_0076b2ac;

__declspec(naked) void FUN_00535b50(void)
{
    __asm {
        sub     esp, 0x1b8
        mov     eax, dword ptr [esp + 0x1bc]   ; param1
        push    ebx
        push    esi
        push    edi
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00412570

        push    0x779cb0
        lea     ecx, [esp + 0x10]
        call    FUN_00412570

        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0xc]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740

        lea     ecx, [esp + 0x14]
        call    FUN_0040d9b0

        mov     eax, dword ptr [esp + 0xc]
        push    0x779f4c
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740

        lea     ecx, [esp + 0x14]
        call    FUN_0040d9b0

        push    0x779d68
        lea     ecx, [esp + 0x1c]
        call    FUN_00412570

        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740

        lea     ecx, [esp + 0x14]
        call    FUN_0040d9b0

        mov     eax, dword ptr [esp + 0x18]
        push    0x779f4c
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740

        lea     ecx, [esp + 0x14]
        call    FUN_0040d9b0

        mov     ecx, dword ptr [DAT_007dab44]   ; mov ecx, [0x007dab44]
        mov     eax, dword ptr [DAT_007dab40]   ; mov eax, [0x007dab40]
        mov     edx, dword ptr [ecx]
        xor     edx, eax
        mov     eax, dword ptr [edx + 0xc]
        xor     eax, 0x85739531
        mov     esi, dword ptr [eax + 0x98]

        push    0x14
        mov     byte ptr [esp + 0x17], 0
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      null_ptr

        add     esi, 0x10
        push    esi
        mov     ecx, eax
        call    FUN_00547a00
        mov     esi, eax
        jmp     got_ptr

    null_ptr:
        xor     esi, esi

    got_ptr:
        mov     ecx, esi
        call    FUN_00416cc0
        test    eax, eax
        jz      after_search

    search_loop:
        mov     edi, dword ptr [DAT_0076b2ac]   ; mov edi, [0x0076b2ac]
    loop_body:
        add     eax, 0x18
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0040f060

        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        call    edi
        add     esp, 8
        mov     ebx, eax
        neg     ebx
        sbb     bl, bl
        lea     ecx, [esp + 0x1c]
        inc     bl
        call    FUN_0040d9b0
        test    bl, bl
        jnz     found_match

        mov     ecx, esi
        call    FUN_00416cc0
        test    eax, eax
        jnz     loop_body
        jmp     after_search

    found_match:
        mov     byte ptr [esp + 0x13], 1

    after_search:
        test    esi, esi
        jz      skip_release
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax]

    skip_release:
        lea     ecx, [esp + 0xc]
        push    ecx
        call    FUN_005471f0

        lea     edx, [esp + 0x18]
        push    edx
        call    FUN_005471f0

        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      check_exists

        mov     eax, dword ptr [esp + 0xc]
        push    eax
        call    FUN_006fc4d0
        test    al, al
        jnz     check_exists

        push    1
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     edx, [esp + 0xcc]
        push    edx
        push    0x76c6ac
        mov     dword ptr [esp + 0x2c], 0x100
        call    FUN_00708930

        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jbe     check_exists

        mov     edx, eax
        lea     eax, [esp + 0xc4]
        dec     edx
        push    eax
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x20], edx
        call    FUN_00412570

        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [eax]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0

        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740

        lea     ecx, [esp + 0x14]
        call    FUN_0040d9b0

        lea     ecx, [esp + 0x28]
        call    FUN_0040d9b0

        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        mov     bl, 1
        call    FUN_006fc4d0
        test    al, al
        jnz     check_exists

    cd_retry_loop:
        test    bl, bl
        jz      check_exists

        mov     eax, dword ptr [DAT_007b8804]   ; mov eax, [0x007b8804]
        test    eax, eax
        jz      check_cd

        mov     edx, dword ptr [esp + 0xc]
        push    edx
        call    FUN_0052b440
        push    eax
        call    dword ptr [DAT_007b8804]        ; call dword ptr [0x007b8804]
        add     esp, 8
        mov     bl, al

    check_cd:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        call    FUN_006fc4d0
        test    al, al
        jz      cd_retry_loop

    check_exists:
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        call    FUN_006fc4d0
        test    al, al
        jnz     open_file

        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_00412740

        mov     eax, dword ptr [esp + 0xc]
        push    eax
        call    FUN_006fc4d0
        test    al, al
        jnz     open_file

        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      dec_ref_1

        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     dec_ref_1
        push    eax
        call    FUN_004084e0
        add     esp, 4

    dec_ref_1:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      dec_ref_2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     dec_ref_2
        push    eax
        call    FUN_004084e0
        add     esp, 4

    dec_ref_2:
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jz      ret_zero
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     ret_zero
        push    eax
        call    FUN_004084e0
        add     esp, 4

    ret_zero:
        pop     edi
        pop     esi
        xor     eax, eax
        xor     edx, edx
        pop     ebx
        add     esp, 0x1b8
        ret     4

    open_file:
        mov     ecx, dword ptr [esp + 0xc]
        push    0
        push    ecx
        lea     ecx, [esp + 0x44]
        call    FUN_0041de80

        lea     edx, [esp + 0x6c]
        push    edx
        call    FUN_0070e390

        mov     eax, dword ptr [DAT_007dab44]   ; mov eax, [0x007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]   ; xor ecx, [0x007dab40]
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x1804]

        push    4
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x74]
        push    edx
        mov     dword ptr [esp + 0x30], eax
        call    FUN_0070e3c0

        mov     eax, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [esp + 0x58]
        sub     ecx, eax
        add     ecx, edx
        push    ecx
        push    eax
        lea     edx, [esp + 0x74]
        push    edx
        call    FUN_0070e3c0

        lea     eax, [esp + 0x6c]
        push    eax
        lea     ecx, [esp + 0x30]
        push    ecx
        call    FUN_0070e460

        mov     al, byte ptr [esp + 0x2c]
        xor     al, byte ptr [esp + 0x34]
        lea     ecx, [esp + 0x3c]
        and     eax, 0xff
        cdq
        mov     esi, eax
        mov     edi, edx
        call    FUN_0041dec0

        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      dec_ref_3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     dec_ref_3
        push    eax
        call    FUN_004084e0
        add     esp, 4

    dec_ref_3:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      dec_ref_4
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     dec_ref_4
        push    eax
        call    FUN_004084e0
        add     esp, 4

    dec_ref_4:
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jz      ret_result
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     ret_result
        push    eax
        call    FUN_004084e0
        add     esp, 4

    ret_result:
        mov     edx, edi
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x1b8
        ret     4
    }
}
