/*
 * FUN_0040d220 (51 B) - copies 4 dwords from the object (ECX) into a
 * 16-byte local buffer, then calls FUN_0041ca30(buffer, param_1).
 * __thiscall (ECX = object), RET 0x4 (one stack param @ [esp+4]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041ca30(void);

__declspec(naked) void FUN_0040d220(void)
{
    __asm {
        sub     esp, 0x10
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ecx + 0x4]
        __emit 0x89   /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (89 04 24); ref needs 89 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     eax, dword ptr [ecx + 0x8]
        mov     dword ptr [esp + 0x4], edx
        mov     edx, dword ptr [ecx + 0xc]
        mov     dword ptr [esp + 0x8], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0xc], edx
        push    eax
        lea     edx, [esp + 0x4]
        push    edx
        call    FUN_0041ca30
        add     esp, 0x10
        ret     0x4
    }
}
