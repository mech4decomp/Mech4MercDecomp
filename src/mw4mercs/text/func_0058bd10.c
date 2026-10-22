/*
 * FUN_0058bd10 (48 B) — Calls virtual method on sub-object at +0x78,
 * copies fields from result and this.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0058bd10(void)
{
    __asm {
        push    esi
        mov     esi, ecx            /* this */
        mov     eax, [esi + 0x78]   /* vtable of sub-object */
        lea     ecx, [esi + 0x78]   /* sub-object this */
        mov     dword ptr [esi + 0x864], 2
        call    dword ptr [eax + 4] /* virtual method at vtable+4 */
        mov     edx, [esi + 0x84C]
        mov     ecx, [eax + 0x300]
        mov     [esi + 0x85C], ecx
        mov     [esi + 0x854], edx
        pop     esi
        ret
    }
}
