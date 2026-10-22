/*
 * FUN_0058B460 (292 B @ 0x58b460) - __thiscall, RET 4. FPU-based state check
 * that sets a flag, with a jump-table dispatch at 0x58b570 and a byte table
 * at 0x58b578 (reproduced as __emit data).
 *
 * CFLAGS: /O1
 */

extern float g_0076c5b0;
extern float g_0076d064;
extern float g_0077431c;

__declspec(naked) void FUN_0058B460(void)
{
    __asm {
        mov     al, byte ptr [esp + 4]
        test    al, al
        push    esi
        mov     esi, ecx
        je      L_58b50c
        mov     ecx, dword ptr [esi + 0x2fc]
        test    ecx, ecx
        je      L_58b481
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0xe8]
L_58b481:
        mov     eax, dword ptr [esi + 0x10]
        and     eax, 7
        cmp     eax, 4
        mov     dl, 1
        je      L_58b492
        test    eax, eax
        jne     L_58b4e7
L_58b492:
        mov     ecx, dword ptr [esi + 0x408]
        test    ecx, ecx
        je      L_58b4e7
        fld     dword ptr [ecx + 0x50]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax (ref is no-WAIT DF E0) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jne     L_58b4e7
        fld     dword ptr [ecx + 0x4c]
        fdiv    dword ptr [ecx + 0x50]
        fcom    dword ptr [g_0076c5b0]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_58b4e5
        fcom    dword ptr [g_0076d064]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      L_58b4de
        fcomp   dword ptr [g_0077431c]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_58b4e7
        mov     byte ptr [ecx + 0x10], dl
        jmp     L_58b4e7
L_58b4de:
        /* __emit: MSVC6 encodes fstp st(0) as DD D8 only via raw bytes */
        __emit 0xDD
        __emit 0xD8
        mov     byte ptr [ecx + 0x10], dl
        jmp     L_58b4e7
L_58b4e5:
        __emit 0xDD
        __emit 0xD8
L_58b4e7:
        mov     eax, dword ptr [esi + 0x2f4]
        mov     cl, byte ptr [eax + 0x1d]
        test    cl, cl
        mov     byte ptr [esi + 0x2f8], dl
        jne     L_58b506
        cmp     dword ptr [eax + 0x14], 0xa
        jne     L_58b506
        mov     byte ptr [esi + 0x2f8], dl
L_58b506:
        mov     al, dl
        pop     esi
        ret     4
L_58b50c:
        mov     eax, dword ptr [esi + 0x408]
        test    eax, eax
        je      L_58b522
        mov     dl, byte ptr [eax + 0x10]
        test    dl, dl
        sete    al
        test    al, al
        je      L_58b569
L_58b522:
        mov     eax, dword ptr [esi + 0x2f4]
        mov     cl, byte ptr [eax + 0x1d]
        test    cl, cl
        jne     L_58b55d
        mov     eax, dword ptr [eax + 0x14]
        add     eax, -0x1a
        cmp     eax, 0xb
        ja      L_58b569
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x58b578]
        jmp     dword ptr [ecx*4 + 0x58b570]
L_58b549:
        mov     byte ptr [esi + 0x2f8], 0
        mov     byte ptr [esi + 0x998], 0
        mov     al, 1
        pop     esi
        ret     4
L_58b55d:
        cmp     dword ptr [eax + 0x14], 0x23
        je      L_58b569
        mov     al, 1
        pop     esi
        ret     4
L_58b569:
        xor     al, al
        pop     esi
        ret     4
        /* 0x58B56F: nop padding */
        nop
        /* 0x58B570-0x58B577: dispatch table (2 relocated dword entries) */
        __emit 0x49
        __emit 0xB5
        __emit 0x58
        __emit 0x00
        __emit 0x69
        __emit 0xB5
        __emit 0x58
        __emit 0x00
        /* 0x58B578-0x58B583: byte table (12 bytes) */
        __emit 0x00
        __emit 0x01
        __emit 0x00
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x00
        __emit 0x01
        __emit 0x00
    }
}
