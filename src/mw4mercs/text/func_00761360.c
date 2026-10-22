/*
 * FUN_00761360 (167 B) — validates a handle/object, calls a virtual
 * method through [obj+0x100]+0x20, returns 0x50 on success or 0x51 on
 * failure. Contains two runs of `jmp +0` (EB 00) padding, each preceded
 * by an EB 04 jump over 4 dead padding bytes (D6 D6 3C 00).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00761360(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        jmp     l_p1_1
        /* __emit: 4 dead padding bytes (D6 D6 3C 00) skipped by the EB 04 jump; not real instructions */
        __emit  0xD6
        __emit  0xD6
        __emit  0x3C
        __emit  0x00
    l_p1_1:
        jmp     l_p1_2
    l_p1_2:
        jmp     l_p1_3
    l_p1_3:
        jmp     l_p1_4
    l_p1_4:
        jmp     l_p1_5
    l_p1_5:
        jmp     l_p1_6
    l_p1_6:
        jmp     l_p1_7
    l_p1_7:
        jmp     l_p1_8
    l_p1_8:
        jmp     l_p1_9
    l_p1_9:
        jmp     l_p1_10
    l_p1_10:
        jmp     l_p1_11
    l_p1_11:
        jmp     l_p1_12
    l_p1_12:
        jmp     l_p1_13
    l_p1_13:
        jmp     l_p1_14
    l_p1_14:
        jmp     l_p1_15
    l_p1_15:
        jmp     l_p1_16
    l_p1_16:
        jmp     l_p1_17
    l_p1_17:
        jmp     l_p1_18
    l_p1_18:
        jmp     l_p1_19
    l_p1_19:
        jmp     l_p1_20
    l_p1_20:
        jmp     l_p1_21
    l_p1_21:
        jmp     l_p1_22
    l_p1_22:
        jmp     l_p1_23
    l_p1_23:
        jmp     l_p1_24
    l_p1_24:
        jmp     l_p1_25
    l_p1_25:
        jmp     l_p1_26
    l_p1_26:
        jmp     l_p1_27
    l_p1_27:
        jmp     l_body
    l_body:
        mov     ecx, dword ptr [ebp + 0x8]
        test    ecx, ecx
        jnz     l_ok1
        mov     eax, 0x51
        pop     ebp
        ret
    l_ok1:
        mov     eax, dword ptr [ecx + 0x100]
        test    eax, eax
        jnz     l_ok2
        mov     eax, 0x51
        pop     ebp
        ret
    l_ok2:
        push    1
        push    0x164
        push    ecx
        call    dword ptr [eax + 0x20]
        add     esp, 0xc
        jmp     l_p2_1
        /* __emit: 4 dead padding bytes (D6 D6 3C 00) skipped by the EB 04 jump; not real instructions */
        __emit  0xD6
        __emit  0xD6
        __emit  0x3C
        __emit  0x00
    l_p2_1:
        jmp     l_p2_2
    l_p2_2:
        jmp     l_p2_3
    l_p2_3:
        jmp     l_p2_4
    l_p2_4:
        jmp     l_p2_5
    l_p2_5:
        jmp     l_p2_6
    l_p2_6:
        jmp     l_p2_7
    l_p2_7:
        jmp     l_p2_8
    l_p2_8:
        jmp     l_p2_9
    l_p2_9:
        jmp     l_p2_10
    l_p2_10:
        jmp     l_p2_11
    l_p2_11:
        jmp     l_p2_12
    l_p2_12:
        jmp     l_p2_13
    l_p2_13:
        jmp     l_p2_14
    l_p2_14:
        jmp     l_p2_15
    l_p2_15:
        jmp     l_p2_16
    l_p2_16:
        jmp     l_p2_17
    l_p2_17:
        jmp     l_p2_18
    l_p2_18:
        jmp     l_p2_19
    l_p2_19:
        jmp     l_p2_20
    l_p2_20:
        jmp     l_p2_21
    l_p2_21:
        jmp     l_p2_22
    l_p2_22:
        jmp     l_p2_23
    l_p2_23:
        jmp     l_p2_24
    l_p2_24:
        jmp     l_p2_25
    l_p2_25:
        jmp     l_p2_26
    l_p2_26:
        jmp     l_p2_27
    l_p2_27:
        jmp     l_ret50
    l_ret50:
        mov     eax, 0x50
        pop     ebp
        ret
    }
}
