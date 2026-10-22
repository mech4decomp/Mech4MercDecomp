/*
 * FUN_004facd0 (317 B) — Adept::Mover motion-state update (__thiscall,
 * RET 0x8, 2 params). Reads ExecutionState (+0xe0->+0x14) and dispatches:
 * state 4 -> FUN_004faed0, state 5 -> copy motion + FUN_004fafc0, else
 * copy motion + FUN_004dad70. Copies motion state from a virtual call
 * result into +0x1c8..+0x1dc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00767430(void);
extern void __cdecl FUN_004dad70(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_004fafc0(void);
extern void __cdecl FUN_004faed0(void);

extern char g_008bd5e8[];  /* DAT_008bd5e8 */

__declspec(naked) void FUN_004facd0(void)
{
    __asm {
        sub     esp, 0x30
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [esi + 0x78]
        mov     ebx, dword ptr [eax + 0x14]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [edx + 0x4]
        mov     ebp, dword ptr [esp + 0x44]
        mov     edi, eax
        mov     eax, ebx
        sub     eax, 0x4
        mov     ebx, dword ptr [esp + 0x48]
        jz      LADF1
        dec     eax
        jz      LAD5C
        push    offset g_008bd5e8
        lea     ecx, [esi + 0x180]
        call    FUN_00767430
        mov     ecx, dword ptr [edi + 0x30]
        mov     eax, dword ptr [edi + 0x2c]
        mov     edx, dword ptr [edi + 0x34]
        mov     dword ptr [esi + 0x1cc], ecx
        mov     ecx, dword ptr [edi + 0x3c]
        mov     dword ptr [esi + 0x1c8], eax
        mov     eax, dword ptr [edi + 0x38]
        mov     dword ptr [esi + 0x1d0], edx
        mov     edx, dword ptr [edi + 0x40]
        push    ebx
        mov     dword ptr [esi + 0x1d8], ecx
        push    ebp
        mov     ecx, esi
        mov     dword ptr [esi + 0x1d4], eax
        mov     dword ptr [esi + 0x1dc], edx
        call    FUN_004dad70
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret     0x8
LAD5C:
        mov     eax, dword ptr [edi + 0x2c]
        mov     ecx, dword ptr [edi + 0x30]
        mov     edx, dword ptr [edi + 0x34]
        mov     dword ptr [esi + 0x1c8], eax
        mov     eax, dword ptr [edi + 0x38]
        mov     dword ptr [esi + 0x1cc], ecx
        mov     ecx, dword ptr [edi + 0x3c]
        mov     dword ptr [esi + 0x1d4], eax
        mov     eax, dword ptr [esi + 0xd8]
        mov     dword ptr [esi + 0x1d0], edx
        mov     edx, dword ptr [edi + 0x40]
        add     eax, 0x80
        mov     dword ptr [esi + 0x1d8], ecx
        push    eax
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esi + 0x1dc], edx
        call    FUN_004206b0
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esi + 0x1b0]
        push    edx
        lea     ecx, [esi + 0x180]
        call    FUN_0041c680
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esi + 0x1bc]
        push    ecx
        lea     ecx, [esi + 0x18c]
        call    FUN_0041c680
        push    ebx
        push    ebp
        mov     ecx, esi
        call    FUN_004fafc0
        push    ebx
        push    ebp
        mov     ecx, esi
        call    FUN_004dad70
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret     0x8
LADF1:
        push    ebx
        push    ebp
        mov     ecx, esi
        call    FUN_004faed0
        push    ebx
        push    ebp
        mov     ecx, esi
        call    FUN_004dad70
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret     0x8
    }
}
