/*
 * FUN_00598420 (45 B) — Copies arg2 to stack temp, calls
 * FUN_005986E0(this, &arg3), stores *retval to *arg1.
 *
 * __thiscall (ECX = this), 3 args on stack, callee cleans 0xC bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005982D0(void);
extern void *__fastcall FUN_005986E0(void *, void *);

__declspec(naked) void __fastcall FUN_00598420(void)
{
    __asm {
        mov     eax, [esp + 0x0C]   /* arg3 */
        push    esi
        mov     esi, ecx            /* this */
        push    eax                 /* push arg3 */
        push    ecx                 /* push this */
        lea     edx, [esp + 0x14]   /* address of arg2 */
        mov     ecx, esp            /* temp on stack */
        push    edx                 /* push &arg2 */
        call    FUN_005982D0
        lea     eax, [esp + 0x18]   /* address of arg3 */
        push    eax                 /* push &arg3 */
        mov     ecx, esi            /* this */
        call    FUN_005986E0
        mov     ecx, [eax]          /* *retval */
        mov     eax, [esp + 8]      /* arg1 */
        mov     [eax], ecx          /* *arg1 = *retval */
        pop     esi
        ret     0x0C
    }
}
