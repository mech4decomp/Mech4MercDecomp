/*
 * FUN_00762410 (137 B) — __cdecl RET (no args). Frame-pointer function
 * with anti-tamper jump chains (EB 00 jmp-to-next) and salc data pads.
 * Calls FUN_00763930 with a string (0x762df0), then sets g_008bd66c
 * based on a comparison, returning 0 or 0xa.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008bd66c;

extern void __cdecl FUN_00763930(void);

__declspec(naked) void FUN_00762410(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        jmp     L762419
        __emit 0xD6  /* salc (anti-tamper data pad) */
        __emit 0xD6
        __emit 0x0C
        __emit 0x00
    L762419:
        jmp     L76241b
    L76241b:
        jmp     L76241d
    L76241d:
        jmp     L76241f
    L76241f:
        mov     eax, dword ptr [ebp + 0xc]
        push    eax
        push    0x762df0
        call    FUN_00763930
        add     esp, 8
        jmp     L762436
        __emit 0xD6  /* salc (anti-tamper data pad) */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L762436:
        jmp     L762438
    L762438:
        jmp     L76243a
    L76243a:
        jmp     L76243c
    L76243c:
        jmp     L76243e
    L76243e:
        jmp     L762440
    L762440:
        jmp     L762442
    L762442:
        jmp     L762444
    L762444:
        jmp     L762446
    L762446:
        jmp     L762448
    L762448:
        jmp     L76244a
    L76244a:
        jmp     L76244c
    L76244c:
        jmp     L76244e
    L76244e:
        jmp     L762450
    L762450:
        jmp     L762452
    L762452:
        jmp     L762454
    L762454:
        jmp     L762456
    L762456:
        jmp     L762458
    L762458:
        jmp     L76245a
    L76245a:
        jmp     L76245c
    L76245c:
        jmp     L76245e
    L76245e:
        jmp     L762460
    L762460:
        jmp     L762462
    L762462:
        jmp     L762464
    L762464:
        jmp     L762466
    L762466:
        jmp     L762468
    L762468:
        jmp     L76246a
    L76246a:
        jmp     L76246c
    L76246c:
        cmp     eax, 0xa
        je      L76247d
        mov     dword ptr [g_008bd66c], 0
        pop     ebp
        ret
    L76247d:
        mov     ecx, dword ptr [ebp + 8]
        mov     dword ptr [g_008bd66c], ecx
        jmp     L76248c
        __emit 0xD6  /* salc (anti-tamper data pad) */
        __emit 0xD6
        __emit 0x0C
        __emit 0x00
    L76248c:
        jmp     L76248e
    L76248e:
        jmp     L762490
    L762490:
        jmp     L762492
    L762492:
        mov     eax, 0xa
        pop     ebp
        ret
    }
}
