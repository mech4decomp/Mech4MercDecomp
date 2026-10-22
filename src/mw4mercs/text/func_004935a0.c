/*
 * FUN_004935A0 (65 B) — __cdecl.
 * Allocates 0x54 bytes, calls FUN_004934b0 on success, returns result or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(int param_1);
extern void __cdecl FUN_006f49a0(void);
extern int __cdecl FUN_004084d0(int size);
extern int __cdecl FUN_004934b0(int param_1, int param_2);

extern int DAT_007da920;

__declspec(naked) int FUN_004935a0(int param_1, int param_2)
{
    __asm {
        _emit 0xA1  /* mov eax, [0x007da920] */
        _emit 0x20
        _emit 0xA9
        _emit 0x7D
        _emit 0x00
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x54
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_fail
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_004934b0
        mov     esi, eax
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
l_fail:
        xor     esi, esi
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    }
}
