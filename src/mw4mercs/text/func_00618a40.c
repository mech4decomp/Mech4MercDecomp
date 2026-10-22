/*
 * FUN_00618a40 (79 B) — __fastcall (this in ECX).
 *
 * Calls a virtual method if [this+0x24] is set, builds a small struct,
 * calls FUN_004d1f80 / FUN_0059f490, stores the result at [this+0x24],
 * then tears down via FUN_004d21c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d1f80(void);
extern void *__cdecl FUN_0059f490(void *a);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_00618a40(void)
{
    __asm {
        sub     esp, 0x48
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x24]
        test    ecx, ecx
        jz      L_a53
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    L_a53:
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esp + 0x10]
        mov     word ptr [esp + 0xc], 0x5
        mov     word ptr [esp + 0xe], 0x4
        call    FUN_004d1f80
        lea     edx, [esp + 0x4]
        push    edx
        call    FUN_0059f490
        add     esp, 0x4
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esi + 0x24], eax
        call    FUN_004d21c0
        pop     esi
        add     esp, 0x48
        ret
    }
}
