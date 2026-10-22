/*
 * FUN_005aebe0 (71 B) — __thiscall (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00678280(void *ecx);

__declspec(naked) void __stdcall FUN_005aebe0(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x328]
        test    al, al
        push    esi
        lea     esi, [ecx + 0x328]
        mov     dword ptr [ecx + 0x30c], 0x1
        jz      skip
        mov     ecx, esi
        call    FUN_00678280
skip:
        fld     dword ptr [esi + 0xc]
        mov     eax, dword ptr [esp + 0x8]
        fst     dword ptr [esi + 0xc]
        mov     dword ptr [esi + 0x4], 0x0
        fstp    dword ptr [esi + 0x10]
        mov     dword ptr [esi + 0x14], 0x3f800000
        mov     dword ptr [esi + 0x8], eax
        mov     byte ptr [esi], 0x1
        pop     esi
        ret     0x4
    }
}
