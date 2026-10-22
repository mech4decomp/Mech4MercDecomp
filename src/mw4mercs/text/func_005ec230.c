/*
 * FUN_005ec230 (29 B) — __fastcall initializer (ECX = this).
 *
 * Sets vtable at this -> 0x789bac, calls FUN_0041fc90() on the
 * sub-object at this+0x220, then FUN_005eef70() on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fc90(void *p);
extern void __fastcall FUN_005eef70(void *p);

__declspec(naked) void FUN_005ec230(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x220]
        mov     dword ptr [esi], 0x789bac
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_005eef70
        pop     esi
        ret
    }
}
