/*
 * FUN_0059b7d0 (45 B) — Destructor for class with vtable 0x783894.
 * Destroys sub-objects at +0x10 and +0x18, then calls base destructor.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004179F0(void *);
extern void __fastcall FUN_00417980(void *);
extern void __fastcall FUN_00415380(void *);

__declspec(naked) void __fastcall FUN_0059b7d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x10]
        mov     ecx, edi
        mov     dword ptr [esi], 0x00783894   /* vtable */
        call    FUN_004179F0
        lea     ecx, [esi + 0x18]
        call    FUN_00417980
        mov     ecx, edi
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
