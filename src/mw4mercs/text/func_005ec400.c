/*
 * FUN_005ec400 (49 B) — __fastcall method (ECX = this), RET 8.
 *
 * Calls FUN_0041fd80() on the sub-object at this+0x220; if it
 * returns 0, invokes vtable slot 0xc8 on this, calls
 * FUN_005efd10() on this, then vtable slot 0xb4 on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fd80(void *p);
extern void __fastcall FUN_005efd10(void *p);

__declspec(naked) void __stdcall FUN_005ec400(void *p1, void *p2)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x220]
        call    FUN_0041fd80
        test    eax, eax
        jnz     L1
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xc8]
        mov     ecx, esi
        call    FUN_005efd10
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xb4]
L1:
        pop     esi
        ret     8
    }
}
