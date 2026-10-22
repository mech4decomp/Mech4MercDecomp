/*
 * FUN_00750550 (419 B) — DirectInput GUID/property-ID to string lookup.
 *
 * __stdcall, RET 4 (1 stack param). Returns a string name for a
 * GUID pointer or DIPROP_* property id; falls back to comparing
 * against GUID_SysKeyboard/SysMouse/Joystick via repe cmpsd.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00750550(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        cmp     eax, 0x7a2a40
        push    esi
        push    edi
        jnz     L_567
        pop     edi
        mov     eax, 0x7ace54
        pop     esi
        ret     4
L_567:
        cmp     eax, 0x7a2a50
        jnz     L_578
        pop     edi
        mov     eax, 0x7ace44
        pop     esi
        ret     4
L_578:
        cmp     eax, 0x7a2a60
        jnz     L_589
        pop     edi
        mov     eax, 0x7ace38
        pop     esi
        ret     4
L_589:
        cmp     eax, 0x7a2a70
        jnz     L_59a
        pop     edi
        mov     eax, 0x7ace2c
        pop     esi
        ret     4
L_59a:
        cmp     eax, 0x7a2a80
        jnz     L_5ab
        pop     edi
        mov     eax, 0x7ace1c
        pop     esi
        ret     4
L_5ab:
        cmp     eax, 0x7a2a90
        jnz     L_5bc
        pop     edi
        mov     eax, 0x7ace0c
        pop     esi
        ret     4
L_5bc:
        cmp     eax, 0x7a2aa0
        jnz     L_5cd
        pop     edi
        mov     eax, 0x7acdf8
        pop     esi
        ret     4
L_5cd:
        cmp     eax, 0x7a2ab0
        jnz     L_5de
        pop     edi
        mov     eax, 0x7acdec
        pop     esi
        ret     4
L_5de:
        cmp     eax, 0x7a2ac0
        jnz     L_5ef
        pop     edi
        mov     eax, 0x7acde0
        pop     esi
        ret     4
L_5ef:
        cmp     eax, 0x7a2ad0
        jnz     L_600
        pop     edi
        mov     eax, 0x7acdd0
        pop     esi
        ret     4
L_600:
        cmp     eax, 0x7a2ae0
        jnz     L_611
        pop     edi
        mov     eax, 0x7acdc0
        pop     esi
        ret     4
L_611:
        cmp     eax, 0x7a2af0
        jnz     L_622
        pop     edi
        mov     eax, 0x7acdac
        pop     esi
        ret     4
L_622:
        cmp     eax, 9
        jnz     L_631
        pop     edi
        mov     eax, 0x7acd98
        pop     esi
        ret     4
L_631:
        cmp     eax, 2
        jnz     L_640
        pop     edi
        mov     eax, 0x7acd88
        pop     esi
        ret     4
L_640:
        cmp     eax, 1
        jnz     L_64f
        pop     edi
        mov     eax, 0x7acd74
        pop     esi
        ret     4
L_64f:
        cmp     eax, 0xa
        jnz     L_65e
        pop     edi
        mov     eax, 0x7acd5c
        pop     esi
        ret     4
L_65e:
        cmp     eax, 5
        jnz     L_66d
        pop     edi
        mov     eax, 0x7acd4c
        pop     esi
        ret     4
L_66d:
        cmp     eax, 7
        jnz     L_67c
        pop     edi
        mov     eax, 0x7acd3c
        pop     esi
        ret     4
L_67c:
        cmp     eax, 4
        jnz     L_68b
        pop     edi
        mov     eax, 0x7acd2c
        pop     esi
        ret     4
L_68b:
        cmp     eax, 6
        jnz     L_69a
        pop     edi
        mov     eax, 0x7acd18
        pop     esi
        ret     4
L_69a:
        mov     ecx, 4
        mov     edi, 0x7a29e0
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        jnz     L_6b6
        pop     edi
        mov     eax, 0x7acd04
        pop     esi
        ret     4
L_6b6:
        mov     ecx, 4
        mov     edi, 0x7a29d0
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        jnz     L_6d2
        pop     edi
        mov     eax, 0x7accf4
        pop     esi
        ret     4
L_6d2:
        mov     esi, eax
        xor     eax, eax
        mov     ecx, 4
        mov     edi, 0x7a29f0
        repe    cmpsd
        mov     eax, 0x7acce4
        jz      L_6ee
        mov     eax, 0x79e7f8
L_6ee:
        pop     edi
        pop     esi
        ret     4
    }
}
