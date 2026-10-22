/*
 * FUN_005bb240 (45 B) — __thiscall (ECX = this).
 *
 * Calls FUN_0041fd80 on this+0x26C; if non-null, calls it again and
 * dispatches virtual method at vtable+0x18. Then calls FUN_005ed1f0 on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0041fd80(void);
extern void __fastcall FUN_005ed1f0(void);

__declspec(naked) void FUN_005bb240(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x26C]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L1
        mov     ecx, esi
        call    FUN_0041fd80
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x18]
L1:
        mov     ecx, edi
        call    FUN_005ed1f0
        pop     edi
        pop     esi
        ret
    }
}
