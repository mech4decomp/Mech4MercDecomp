/*
 * FUN_00411c80 (40 B) — __thiscall: FUN_00411b00(arg0), then
 * FUN_00412780(arg1) and sets node+0x10->+0x10->byte+4 to 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411b00(void);
extern void __cdecl FUN_00412780(void);

__declspec(naked) void FUN_00411c80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        call    FUN_00411b00
        mov     ecx, dword ptr [esp + 0xc]
        mov     esi, eax
        push    ecx
        lea     ecx, [esi + 0x18]
        call    FUN_00412780
        mov     edx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [edx + 0x10]
        mov     byte ptr [eax + 0x4], 0x1
        pop     esi
        ret     0x8
    }
}
