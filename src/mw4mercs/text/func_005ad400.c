/*
 * FUN_005AD400 (54 B) — __thiscall (ECX = this), RET 4 (byte flags). Destructor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041FC90(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_004084E0(void *param);

__declspec(naked) void __stdcall FUN_005AD400(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x18]
        mov     dword ptr [esi], 0x7859ec
        call    FUN_0041FC90
        lea     ecx, [esi + 0x10]
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00415380
        test    byte ptr [esp + 0x8], 0x1
        jz      L430
        push    esi
        call    FUN_004084E0
        add     esp, 0x4
L430:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
