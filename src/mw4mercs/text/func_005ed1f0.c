/*
 * FUN_005ed1f0 (55 B) — __thiscall (ECX = this).
 *
 * If sub-object at this+0x210 is non-null, calls a vtable method (5,0) on
 * its +0xE0 sub-object, then calls base method FUN_004d98c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__fastcall FUN_0041fd80(void);
extern void __fastcall FUN_004d98c0(void);

__declspec(naked) void __fastcall FUN_005ed1f0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x210]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_5ed21d
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xE0]
        mov     edx, dword ptr [eax]
        push    0
        push    5
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
L_5ed21d:
        mov     ecx, edi
        call    FUN_004d98c0
        pop     edi
        pop     esi
        ret
    }
}
