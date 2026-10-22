/*
 * FUN_004d5990 (170 B) — MLR network/server subsystem. Jump-table lookup:
 * maps an index (0..0x17) to a vtable address via a 24-entry jump table at
 * 0x4d5a3c (data lives just past the function slice). Out-of-range returns
 * the default 0x772c38.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004d5990(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        cmp     eax, 0x17
        ja      L_4d5a34
        jmp     dword ptr [eax*4 + 0x4d5a3c]
L_4d59a4:
        mov     eax, 0x77008c
        ret
L_4d59aa:
        mov     eax, 0x772c30
        ret
L_4d59b0:
        mov     eax, 0x772c28
        ret
L_4d59b6:
        mov     eax, 0x772c1c
        ret
L_4d59bc:
        mov     eax, 0x772c10
        ret
L_4d59c2:
        mov     eax, 0x772c04
        ret
L_4d59c8:
        mov     eax, 0x772bfc
        ret
L_4d59ce:
        mov     eax, 0x772bec
        ret
L_4d59d4:
        mov     eax, 0x772bdc
        ret
L_4d59da:
        mov     eax, 0x772bcc
        ret
L_4d59e0:
        mov     eax, 0x772bc0
        ret
L_4d59e6:
        mov     eax, 0x772bb4
        ret
L_4d59ec:
        mov     eax, 0x772bac
        ret
L_4d59f2:
        mov     eax, 0x772ba4
        ret
L_4d59f8:
        mov     eax, 0x772b9c
        ret
L_4d59fe:
        mov     eax, 0x772b94
        ret
L_4d5a04:
        mov     eax, 0x772b8c
        ret
L_4d5a0a:
        mov     eax, 0x772b88
        ret
L_4d5a10:
        mov     eax, 0x772b80
        ret
L_4d5a16:
        mov     eax, 0x772b70
        ret
L_4d5a1c:
        mov     eax, 0x772b64
        ret
L_4d5a22:
        mov     eax, 0x772b60
        ret
L_4d5a28:
        mov     eax, 0x772b54
        ret
L_4d5a2e:
        mov     eax, 0x772b48
        ret
L_4d5a34:
        mov     eax, 0x772c38
        ret
    }
}
