/*
 * FUN_00560c10 (239 B) — Maps screen size to HUD number index.
 * __cdecl with one int param.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern int __cdecl FUN_006fab90(const char *msg);
extern int DAT_00858944;

__declspec(naked) void FUN_00560c10(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        mov     eax, [ebp + 8]
        cmp     eax, -8
        jnz     check_minus10
        mov     eax, dword ptr [DAT_00858944]
        cmp     eax, 0x300
        jg      gt_300_m8
        jz      ret_4
        sub     eax, 0x1e0
        jz      ret_0
        sub     eax, 0x78
        jnz     assert_fail
    ret_2:
        mov     eax, 2
        pop     ebp
        ret     4
    gt_300_m8:
        cmp     eax, 0x400
        jz      ret_6
        cmp     eax, 0x4b0
        jnz     assert_fail
        mov     eax, 8
        pop     ebp
        ret     4
    ret_6:
        mov     eax, 6
        pop     ebp
        ret     4
    check_minus10:
        cmp     eax, -10
        mov     eax, dword ptr [DAT_00858944]
        jnz     check_other
        cmp     eax, 0x300
        jg      gt_300_m10
        jz      ret_5
        sub     eax, 0x1e0
        jz      ret_2
        sub     eax, 0x78
        jnz     assert_fail
    ret_4:
        mov     eax, 4
        pop     ebp
        ret     4
    gt_300_m10:
        cmp     eax, 0x400
        jz      ret_7
        cmp     eax, 0x4b0
        jnz     assert_fail
    ret_0xb:
        mov     eax, 0xb
        pop     ebp
        ret     4
    check_other:
        cmp     eax, 0x300
        jg      gt_300_other
        jz      ret_7
        sub     eax, 0x1e0
        jz      ret_4
        sub     eax, 0x78
        jnz     assert_fail
    ret_5:
        mov     eax, 5
        pop     ebp
        ret     4
    ret_7:
        mov     eax, 7
        pop     ebp
        ret     4
    gt_300_other:
        cmp     eax, 0x400
        jz      ret_0xb
        cmp     eax, 0x4b0
        jz      ret_0xd
    assert_fail:
        push    0x0077df90
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      ret_0
        int     3
    ret_0:
        xor     eax, eax
        pop     ebp
        ret     4
    ret_0xd:
        mov     eax, 0xd
        pop     ebp
        ret     4
    }


}
