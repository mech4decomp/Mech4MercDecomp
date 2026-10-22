/*
 * FUN_004eb480 (98 B) — __cdecl: calls FUN_00416110(this=DAT_007dc7c8);
 * if non-zero, forwards 13 args plus DAT_007dc7c4 to FUN_004eb4f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00416110(void);
extern void FUN_004eb4f0(void);
extern int g_007dc7c4;
extern int g_007dc7c8;

__declspec(naked) void FUN_004eb480(void)
{
    __asm {
        mov     ecx, dword ptr [g_007dc7c8]
        call    FUN_00416110
        test    eax, eax
        jz      L_ret0
        mov     ecx, dword ptr [esp+0x34]
        mov     edx, dword ptr [esp+0x30]
        push    ecx
        mov     ecx, dword ptr [esp+0x30]
        push    edx
        mov     edx, dword ptr [esp+0x30]
        push    ecx
        mov     ecx, dword ptr [esp+0x30]
        push    edx
        mov     edx, dword ptr [esp+0x30]
        push    ecx
        mov     ecx, dword ptr [esp+0x30]
        push    edx
        mov     edx, dword ptr [esp+0x30]
        push    ecx
        mov     ecx, dword ptr [esp+0x30]
        push    edx
        mov     edx, dword ptr [esp+0x30]
        push    ecx
        mov     ecx, dword ptr [esp+0x30]
        push    edx
        mov     edx, dword ptr [esp+0x30]
        push    ecx
        mov     ecx, dword ptr [esp+0x30]
        push    edx
        mov     edx, dword ptr [g_007dc7c4]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_004eb4f0
        ret
L_ret0:
        xor     eax, eax
        ret
    }
}
