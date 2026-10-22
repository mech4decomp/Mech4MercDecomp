/*
 * FUN_004de350 (63 B) — MLR/Adept list teardown helper. __thiscall
 * (ECX = this). Walks a linked list rooted at [this+0x10], releasing
 * each node via its vtable[0] method (vtable 0x77392c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417ad0(void);

__declspec(naked) void FUN_004de350(void)
{
    __asm {
        sub     esp, 0xc
        lea     eax, [ecx + 0x10]
        mov     dword ptr [esp + 0x4], eax
        mov     eax, dword ptr [eax]
        push    esi
        mov     dword ptr [esp + 0xc], eax
        mov     dword ptr [esp + 0x4], 0x77392c
        test    eax, eax
        jz      L38A
L369:
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L38A
        lea     ecx, [esp + 0x4]
        call    FUN_00417ad0
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
        mov     eax, dword ptr [esp + 0xc]
        /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-4, call-reloc between branch and target) */
        __emit 0xEB
        __emit 0xDF
L38A:
        pop     esi
        add     esp, 0xc
        ret
    }
}
