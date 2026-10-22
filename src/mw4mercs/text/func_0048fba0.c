/*
 * FUN_0048fba0 (84 B) — MLR image-instance list walker (__thiscall).
 * Iterates a linked list of sub-resources, invoking FUN_0048fb80 on each,
 * then returns [this+0x20].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b95a4;

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_0048fb80(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0048fba0(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [g_007b95a4]
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        lea     eax, [esi + 0x8]
        mov     dword ptr [esp + 0x8], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0xc], eax
        mov     dword ptr [esp + 0x4], 0x76ff10
L_fbc6:
        test    eax, eax
        jz      L_fbe7
        mov     eax, dword ptr [eax]
        test    eax, eax
        jz      L_fbe7
        push    eax
        mov     ecx, esi
        call    FUN_0048fb80
        lea     ecx, [esp + 0x4]
        call    FUN_00417ad0
        mov     eax, dword ptr [esp + 0xc]
        jmp     L_fbc6
L_fbe7:
        call    FUN_006f49a0
        mov     eax, dword ptr [esi + 0x20]
        pop     esi
        add     esp, 0xc
        ret
    }
}
