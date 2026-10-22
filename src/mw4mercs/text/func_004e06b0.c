/*
 * FUN_004e06b0 (80 B) — __thiscall, RET 0x10 (4 args). Queries an object
 * at g_007dc6c4; on success calls FUN_004e0240 with the 4 args, then
 * registers the result via FUN_004e0820(this, result). Returns the result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc6c4;
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004e0240(void);
extern void __cdecl FUN_004e0820(void);

__declspec(naked) void FUN_004e06b0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [g_007dc6c4]
        call    FUN_00416110
        test    eax, eax
        jz      L_fail
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_004e0240
        mov     esi, eax
        push    esi
        mov     ecx, edi
        call    FUN_004e0820
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
L_fail:
        xor     esi, esi
        push    esi
        mov     ecx, edi
        call    FUN_004e0820
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
