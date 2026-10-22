/*
 * FUN_0061DDC0 (28 B @ 0x61DDC0) - __cdecl (3 args: [esp+4]=ptr, [esp+8]=idx,
 * [esp+0xC]=val). If ptr non-null, writes byte 1 at ptr[idx*12] and stores val
 * at ptr[idx*12+4]. (Sibling functions 0x61DDE0 / 0x61DE00 live in the same
 * data block but are separate entries.)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0061DDC0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        test    ecx, ecx
        je      L_61DDDC
        mov     eax, dword ptr [esp + 8]
        lea     eax, [eax + eax*2]
        lea     eax, [ecx + eax*4]
        mov     ecx, dword ptr [esp + 0xc]
        mov     byte ptr [eax], 1
        mov     dword ptr [eax + 4], ecx
L_61DDDC:
        ret
    }
}
