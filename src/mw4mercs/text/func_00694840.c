/*
 * FUN_00694840 (123 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Calls FUN_00694680(param), initializes this+0x30/0x34/0x38, then for
 * three string/ptr constants calls FUN_00411a10 and, if nonzero,
 * FUN_00694460(result, value). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00694680(int p);
extern int __cdecl FUN_00411a10(void *p);
extern void __cdecl FUN_00694460(int a, int b);

__declspec(naked) int __stdcall FUN_00694840(int param)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_00694680
        push    0x799494
        mov     ecx, edi
        mov     dword ptr [esi + 0x30], 0x0
        mov     dword ptr [esi + 0x34], 0x64
        mov     dword ptr [esi + 0x38], 0x32
        call    FUN_00411a10
        test    eax, eax
        jz      l_87e
        push    0x0
        push    eax
        call    FUN_00694460
        add     esp, 0x8
    l_87e:
        push    0x799490
        mov     ecx, edi
        call    FUN_00411a10
        test    eax, eax
        jz      l_899
        push    0x64
        push    eax
        call    FUN_00694460
        add     esp, 0x8
    l_899:
        push    0x796dec
        mov     ecx, edi
        call    FUN_00411a10
        test    eax, eax
        jz      l_8b4
        push    0x32
        push    eax
        call    FUN_00694460
        add     esp, 0x8
    l_8b4:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     4
    }
}
