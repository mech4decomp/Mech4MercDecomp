/*
 * FUN_006935E0 (113 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * Calls FUN_00507DE0(param), then dispatches on a motion-state id
 * (this+0xE0 -> +0x14) to push a state-name string and call
 * FUN_00412780. Contains dead/unreachable blocks (0x693624..0x693649)
 * that are still present in the binary and must be transcribed.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00507DE0(int param);
extern void __fastcall FUN_00412780(void *this, int param);
extern void __fastcall FUN_00411C40(void *this, int a, int b);
extern void __cdecl FUN_004084E0(int param);

__declspec(naked) void __fastcall FUN_006935e0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        mov     esi, ecx
        push    edi
        call    FUN_00507DE0
        mov     eax, dword ptr [esi + 0xE0]
        mov     eax, dword ptr [eax + 0x14]
        sub     eax, 6
        mov     dword ptr [esp + 0xC], 0
        jz      L_state6
        dec     eax
        jnz     L_end
        push    0x785990
        jmp     L_common
L_state6:
        push    0x78AD88
L_common:
        lea     ecx, [esp + 0x10]
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0xC]
        test    eax, eax
        jz      L_end
        push    eax
        push    0x773250
        mov     ecx, edi
        call    FUN_00411C40
        mov     eax, dword ptr [esp + 0xC]
        test    eax, eax
        jz      L_end
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_end
        push    eax
        call    FUN_004084E0
        add     esp, 4
L_end:
        pop     edi
        pop     esi
        ret     4
    }
}
