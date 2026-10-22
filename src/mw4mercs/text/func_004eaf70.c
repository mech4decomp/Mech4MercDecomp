/*
 * FUN_004EAF70 (48 B) - MLR/Adept tile destructor (__thiscall, RET 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004ebee0(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004f21a0(void);

__declspec(naked) void __fastcall FUN_004eaf70(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x6c]
        mov     ecx, edi
        mov     dword ptr [esi], 0x774604
        call    FUN_0041fd80
        test    eax, eax
        jz      LAF8F
        mov     ecx, eax
        call    FUN_004ebee0
    LAF8F:
        mov     ecx, edi
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_004f21a0
        pop     edi
        pop     esi
        ret
    }
}
