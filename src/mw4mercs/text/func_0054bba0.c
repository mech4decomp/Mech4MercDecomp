/*
 * FUN_0054bba0 (46 B) — thiscall: calls vtable method, then FUN_005485B3, then another vtable method.
 * Bytes: 56 8B F1 8B 46 78 8D 4E 78 FF 50 04 50 6A 03 8B CE C6 86 AC 05 00 00 01 E8 13 CA 00 00 8B 8E E0 00 00 00 8B 11 6A 00 6A 08 FF 52 04 5E C3
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0054bba0(void)
{
    
extern void __cdecl FUN_005585d0(void);
__asm {
push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        push    eax
        push    3
        mov     ecx, esi
        mov     byte ptr [esi + 0x5AC], 1
        call    FUN_005585d0
        mov     ecx, dword ptr [esi + 0xE0]
        mov     edx, dword ptr [ecx]
        push    0
        push    8
        call    dword ptr [edx + 4]
        pop     esi
        ret
    }


}
