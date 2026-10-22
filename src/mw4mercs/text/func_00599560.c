/*
 * FUN_00599560 (45 B) — Creates temporaries on stack from args and
 * calls FUN_00599720.
 *
 * __cdecl with 3 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004925B0(void);
extern void __cdecl FUN_00599720(void);

__declspec(naked) void __cdecl FUN_00599560(void)
{
    __asm {
        mov     eax, [esp + 0x0C]   /* arg3 */
        mov     ecx, [esp + 0x0C]   /* arg3 */
        push    eax                 /* push arg3 */
        push    ecx                 /* push arg3 */
        push    ecx                 /* push arg3 */
        lea     edx, [esp + 0x14]   /* address of arg2 */
        mov     ecx, esp            /* temp on stack */
        push    edx                 /* push &arg2 */
        call    FUN_004925B0        /* copy arg2 to temp */
        push    ecx                 /* push &arg2 (ecx preserved by callee as arg) */
        lea     eax, [esp + 0x14]   /* address of arg3 */
        mov     ecx, esp            /* temp on stack */
        push    eax                 /* push &arg3 */
        call    FUN_004925B0        /* copy arg3 to temp */
        call    FUN_00599720
        add     esp, 0x10
        ret
    }
}
