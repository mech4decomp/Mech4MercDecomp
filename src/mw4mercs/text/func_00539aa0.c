/*
 * FUN_00539AA0 (587 B) — __thiscall method, RET 0x10.
 *
 * Returns AL=1 (blocked) or AL=0 (allowed) based on a switch on param2 (type byte).
 * Uses a jump table at 0x539CEC for cases 0-8.
 * Checks various conditions involving sub-objects, flags, and indices.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern int FUN_0041fd80(void);

/* Global data references */
extern int DAT_007db094;

__declspec(naked) void FUN_00539aa0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx

        mov     al, byte ptr [edi + 0x16]
        test    al, al
        jz      use_54
        mov     esi, dword ptr [edi + 0x50]
        jmp     got_subobj
    use_54:
        mov     esi, dword ptr [edi + 0x54]
    got_subobj:

        mov     ebx, dword ptr [esp + 0x20]     ; param4 (index)
        mov     eax, ebx
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     edx, [edi + ecx*8]
        mov     ecx, dword ptr [edx + 0x3584]
        xor     ebp, ebp
        xor     al, al
        test    ecx, ecx
        jz      switch_check

        mov     ecx, dword ptr [ecx + 0x170]
        test    ecx, ecx
        jz      no_ebp
        mov     ebp, ecx
    no_ebp:
        mov     eax, dword ptr [ebp + 0x10]
        shr     eax, 0x13
        and     al, 1

    switch_check:
        mov     ecx, dword ptr [esp + 0x18]     ; param2 (type)
        and     ecx, 0xff
        cmp     ecx, 8
        ja      switch_default
        jmp     dword ptr [ecx*4 + 0x00539cec]

    ; Case 0: 0x00539B0B
        mov     al, byte ptr [esp + 0x1c]       ; param3
        test    al, al
        jz      switch_default
        cmp     al, bl
        jz      switch_default
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10

    ; Case 2: 0x00539B28
        mov     ecx, dword ptr [esi + 0x64]
        test    ecx, ecx
        jnz     switch_default
        test    al, al
        jnz     case2_ret1
        cmp     dword ptr [edx + 0x3554], 0x2c
        jnz     switch_default
    case2_ret1:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10

    ; Case 1 and 3: 0x00539B4D
        mov     ecx, dword ptr [esi + 0x64]
        test    ecx, ecx
        jnz     switch_default
        test    al, al
        jnz     switch_default
        cmp     dword ptr [edx + 0x3554], 0x2c
        jz      switch_default
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10

    ; Case 4: 0x00539B76
        mov     ecx, dword ptr [esi + 0x64]
        test    ecx, ecx
        jnz     case4_check_ebp
        test    al, al
        jz      case4_check_ebp
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10
    case4_check_ebp:
        test    ebp, ebp
        jnz     case4_check_type
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10
    case4_check_type:
        mov     eax, dword ptr [ebp + 0x4cc]
        cmp     eax, 8
        jnz     case4_call
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10
    case4_call:
        mov     ecx, dword ptr [edi + eax*4 + 0x204d00]
        call    FUN_0041fd80
        test    eax, eax
        jnz     case4_check_id
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10
    case4_check_id:
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [eax + 0x514]
        and     edx, 0xff
        cmp     ecx, edx
        jz      switch_default
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10

    ; Case 5: 0x00539BE5
        mov     ecx, dword ptr [esi + 0x64]
        test    ecx, ecx
        jnz     case5_check_ebp
        test    al, al
        jnz     case5_check_ebp
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10
    case5_check_ebp:
        test    ebp, ebp
        jnz     case5_check_type
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10
    case5_check_type:
        mov     eax, dword ptr [ebp + 0x4cc]
        cmp     eax, 8
        jnz     case5_call
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10
    case5_call:
        mov     ecx, dword ptr [edi + eax*4 + 0x204d00]
        call    FUN_0041fd80
        test    eax, eax
        jnz     case5_check_id
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10
    case5_check_id:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [eax + 0x514]
        and     ecx, 0xff
        cmp     edx, ecx
        jz      switch_default
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10

    ; Case 6: 0x00539C50
        cmp     byte ptr [esp + 0x1c], bl
        jz      switch_default
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10

    ; Case 8: 0x00539C5F
        mov     ecx, dword ptr [edx + 0x3548]
        cmp     ecx, 8
        jnz     case8_compare
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10
    case8_compare:
        mov     eax, dword ptr [esp + 0x14]     ; param1
        and     eax, 0xff
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     eax, dword ptr [edi + edx*8 + 0x3548]
        lea     eax, [eax + eax*4]
        shl     eax, 4
        mov     edx, dword ptr [eax + esi + 0x110]
        lea     ecx, [ecx + ecx*4]
        shl     ecx, 4
        cmp     edx, dword ptr [ecx + esi + 0x110]
        jz      switch_default
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10

    ; Default (case 7 and >8): 0x00539CB4
    switch_default:
        mov     al, byte ptr [esp + 0x18]       ; param2
        test    al, al
        jz      ret_zero

        mov     cl, byte ptr [edi + 0x16]
        test    cl, cl
        jz      check_no_active
        mov     ecx, dword ptr [edi + 0x50]
        mov     edx, dword ptr [ecx + 0x10]
        test    edx, edx
        jnz     ret_zero

    check_no_active:
        cmp     al, 7
        jz      ret_zero
        cmp     al, 8
        jz      ret_zero
        test    ebp, ebp
        jnz     ret_zero

        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0x10

    ret_zero:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x10
    }
}
