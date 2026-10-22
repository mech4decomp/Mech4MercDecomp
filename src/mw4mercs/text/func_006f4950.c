/*
 * FUN_006F4950 (63 B) — Context stack push (enter).
 *
 * Pushes the current context value (DAT_0084930c) onto a fixed-size 64-entry
 * stack at DAT_00848d90, indexed by DAT_00849330, then stores the new context
 * (param_1) as current. If the stack overflows (index reaches 0x40), calls
 * the assertion utility with "Heap stack overflowed".
 *
 * Paired with FUN_006F49A0 (leave) which pops the stack.
 *
 * __stdcall, RET 0x04 (1 param: new context value).
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

/* ---- external globals ---- */
extern int DAT_00849330;   /* stack pointer (0..0x40) */
extern int DAT_0084930c;   /* current context value */
extern int DAT_00848d90;   /* 64-entry context stack */

/* ---- external functions ---- */
extern void __cdecl FUN_006fab90(const char *msg);

__declspec(naked) void __stdcall FUN_006f4950(int new_ctx)
{
    __asm {
        push    ebp
        mov     ebp, esp

        /* EAX = DAT_00849330 (stack pointer) */
        _emit 0xA1
        _emit 0x30
        _emit 0x93
        _emit 0x84
        _emit 0x00

        /* ECX = DAT_0084930c (current context) */
        _emit 0x8B
        _emit 0x0D
        _emit 0x0C
        _emit 0x93
        _emit 0x84
        _emit 0x00

        /* EDX = param_1 (new context) */
        mov     edx, dword ptr [ebp + 0x8]

        /* DAT_00848d90[EAX] = ECX  (push current context) */
        _emit 0x89
        _emit 0x0C
        _emit 0x85
        _emit 0x90
        _emit 0x8D
        _emit 0x84
        _emit 0x00

        /* EAX++ */
        inc     eax

        /* if (EAX == 0x40) assert("Heap stack overflowed") */
        cmp     eax, 0x40

        /* DAT_00849330 = EAX */
        _emit 0xA3
        _emit 0x30
        _emit 0x93
        _emit 0x84
        _emit 0x00

        /* DAT_0084930c = EDX (new context becomes current) */
        _emit 0x89
        _emit 0x15
        _emit 0x0C
        _emit 0x93
        _emit 0x84
        _emit 0x00

        jnz     l_done

        /* overflow: assert */
        push    0x79f9a8
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      l_done
        int     3

    l_done:
        pop     ebp
        ret     0x4
    }
}
