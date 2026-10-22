/*
 * FUN_00539F90 (290 B) — __thiscall method, RET 0xC.
 *
 * Returns a type byte in AL based on index (param1), current type (param2/BL),
 * and sub-object state. May write a byte through param3 pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern int FUN_0041fd80(void);

/* Global data references */
extern int DAT_007db094;

__declspec(naked) void FUN_00539f90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]        ; param1 (index)
        mov     edx, dword ptr [DAT_007db094]
        push    ebx
        mov     bl, byte ptr [esp + 0xc]        ; param2 (type)
        test    bl, bl
        push    esi
        jnz     check_active

        cmp     al, byte ptr [edx + 0x28]
        jnz     compute_index
        pop     esi
        xor     al, al
        pop     ebx
        ret     0xc

    check_active:
        cmp     al, byte ptr [edx + 0x28]
        jnz     compute_index
        mov     dl, byte ptr [ecx + 0x16]
        test    dl, dl
        jz      compute_index
        mov     edx, dword ptr [ecx + 0x50]
        mov     esi, dword ptr [edx + 0x10]
        test    esi, esi
        jz      compute_index
        pop     esi
        xor     al, al
        pop     ebx
        ret     0xc

    compute_index:
        and     eax, 0xff
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     eax, dword ptr [ecx + edx*8 + 0x3584]
        test    eax, eax
        jnz     has_entry

        cmp     bl, 7
        jz      ret_bl
        cmp     bl, 8
        jz      ret_bl
        mov     bl, 7
        pop     esi
        mov     al, bl
        pop     ebx
        ret     0xc

    has_entry:
        mov     esi, dword ptr [eax + 0x170]
        test    esi, esi
        jnz     check_bit
        mov     bl, 3
        pop     esi
        mov     al, bl
        pop     ebx
        ret     0xc

    check_bit:
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 1
        jz      check_type4
        cmp     bl, 3
        jz      check_type4
        cmp     bl, 5
        jz      check_type4
        mov     bl, 3
        jmp     check_final_bit

    check_type4:
        cmp     bl, 4
        jnz     check_type5

        mov     eax, dword ptr [esi + 0x4cc]
        cmp     eax, 8
        jz      set_bl_2
        mov     ecx, dword ptr [ecx + eax*4 + 0x204d00]
        call    FUN_0041fd80
        test    eax, eax
        jz      set_bl_2
        mov     ecx, dword ptr [eax + 0x514]
        mov     edx, dword ptr [esp + 0x14]    ; param3
        pop     esi
        mov     al, bl
        mov     byte ptr [edx], cl
        pop     ebx
        ret     0xc

    check_type5:
        cmp     bl, 5
        jnz     check_type3

        mov     eax, dword ptr [esi + 0x4cc]
        cmp     eax, 8
        jnz     type5_call
    set_bl_3:
        mov     bl, 3
        jmp     check_final_bit

    type5_call:
        mov     ecx, dword ptr [ecx + eax*4 + 0x204d00]
        call    FUN_0041fd80
        test    eax, eax
        jz      set_bl_3
        mov     eax, dword ptr [eax + 0x514]
        mov     ecx, dword ptr [esp + 0x14]    ; param3
        mov     byte ptr [ecx], al
        pop     esi
        mov     al, bl
        pop     ebx
        ret     0xc

    check_type3:
        cmp     bl, 3
        jnz     ret_bl

    check_final_bit:
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        test    dl, 1
        jnz     ret_bl

    set_bl_2:
        mov     bl, 2

    ret_bl:
        pop     esi
        mov     al, bl
        pop     ebx
        ret     0xc
    }
}
