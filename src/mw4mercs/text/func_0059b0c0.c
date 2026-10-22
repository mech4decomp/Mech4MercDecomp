/*
 * FUN_0059b0c0 (42 B) — Constructor for class with vtable 0x783788.
 * Calls base constructor FUN_005F0740, then sets vtable.
 *
 * __thiscall (ECX = this). Returns this.
 * Callee cleans 0x10 bytes (4 args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005F0740(void);

__declspec(naked) void __fastcall FUN_0059b0c0(void)
{
    __asm {
        mov     eax, [esp + 0x10]   /* arg4 */
        mov     edx, [esp + 8]      /* arg2 */
        push    esi
        push    eax                 /* push arg4 */
        mov     eax, [esp + 0x0C]   /* arg3 (after push esi/push eax) */
        mov     esi, ecx            /* this */
        mov     ecx, [esp + 0x14]   /* arg1 (after pushes) */
        push    ecx                 /* push arg1 */
        push    edx                 /* push arg2 */
        push    eax                 /* push arg3 */
        mov     ecx, esi            /* this for base call */
        call    FUN_005F0740
        mov     dword ptr [esi], 0x00783788   /* vtable */
        mov     eax, esi            /* return this */
        pop     esi
        ret     0x10
    }
}
