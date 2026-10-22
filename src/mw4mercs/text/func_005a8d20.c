/*
 * FUN_005a8d20 (29 B) — __thiscall constructor. Stores vtable ptr 0x785114,
 * constructs sub-object at this+0x234 (FUN_0041fc90), then calls
 * FUN_005ec230(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041fc90(void);
extern void FUN_005ec230(void);

__declspec(naked) void FUN_005a8d20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi+0x234]
        mov     dword ptr [esi], 0x785114
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_005ec230
        pop     esi
        ret
    }
}
