/*
 * FUN_00612940 (113 B) — Calls FUN_0060d590(param1,param2,param3); if
 * this+0x4 is non-null and *param3==1, resolves a target via
 * FUN_00416b60/FUN_005b6f10 and dispatches through an obfuscated
 * pointer chain to FUN_0059fcd0.
 *
 * __thiscall (ECX = this), RET 0xC (three stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab40;
extern int g_7dab44;
extern void __cdecl FUN_0060d590(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_005b6f10(void);
extern void __cdecl FUN_0059fcd0(void);

__declspec(naked) void __fastcall FUN_00612940(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    ebp
        push    edi
        mov     esi, ecx
        push    ebx
        call    FUN_0060d590
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jz      L_aa
        cmp     dword ptr [ebp], 0x1
        jnz     L_aa
        push    edi
        lea     ecx, [eax + 0x384]
        call    FUN_00416b60
        mov     esi, dword ptr [ebx]
        push    esi
        mov     ecx, eax
        call    FUN_005b6f10
        test    eax, eax
        jz      L_aa
        cmp     esi, 0x87
        jz      L_aa
        mov     edx, dword ptr [g_7dab40]
        push    eax
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x24]
        call    FUN_0059fcd0
L_aa:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
