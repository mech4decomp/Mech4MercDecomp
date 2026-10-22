/*
 * FUN_00411c40 (60 B) — __thiscall: FUN_00411a10(arg0); if null, falls
 * back to FUN_00411b00(arg0). Then FUN_00412780(arg1) and sets
 * node+0x10->+0x10->byte+4 to 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411a10(void);
extern void __cdecl FUN_00411b00(void);
extern void __cdecl FUN_00412780(void);

__declspec(naked) void FUN_00411c40(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     edi, ecx
        push    ebx
        call    FUN_00411a10
        mov     esi, eax
        test    esi, esi
        jnz     L_411c5f
        push    ebx
        mov     ecx, edi
        call    FUN_00411b00
        mov     esi, eax
L_411c5f:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        lea     ecx, [esi + 0x18]
        call    FUN_00412780
        mov     ecx, dword ptr [esi + 0x10]
        mov     edx, dword ptr [ecx + 0x10]
        pop     edi
        pop     esi
        mov     byte ptr [edx + 0x4], 0x1
        pop     ebx
        ret     0x8
    }
}
