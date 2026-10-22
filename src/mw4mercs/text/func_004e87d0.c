/*
 * FUN_004E87D0 (70 B) — Adept Tile destructor (__thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004c4480(void);

__declspec(naked) void __fastcall FUN_004e87d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x77445c
        mov     eax, dword ptr [esi + 0x17c]
        test    eax, eax
        jz      L87EC
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L87EC:
        lea     ecx, [esi + 0x170]
        call    FUN_00417980
        lea     ecx, [esi + 0x15c]
        call    FUN_00417980
        lea     ecx, [esi + 0x154]
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_004c4480
        pop     esi
        ret
    }
}
