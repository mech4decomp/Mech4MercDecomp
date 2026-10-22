/*
 * FUN_00647450 (130 B) — __thiscall (ECX = this), RET 8 (two stack params).
 * Inserts/updates an entry in a sorted structure: calls FUN_004179b0,
 * searches via FUN_00647e30, and either updates an existing node or inserts
 * a new one via FUN_00647940/FUN_00647910, storing param_2 at [node+0x14].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004179b0(void);
extern void FUN_00647e30(void);
extern void FUN_00647940(void);
extern void FUN_00647910(void);

__declspec(naked) void __fastcall FUN_00647450(void)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [esp + 0x18]
        push    esi
        mov     esi, ecx
        push    eax
        lea     ecx, [esi + 0x24]
        call    FUN_004179b0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0xc]
        add     esi, 0xc
        push    edx
        mov     ecx, esi
        call    FUN_00647e30
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [esi]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x4], eax
        jz      L_8a
        cmp     ecx, dword ptr [eax + 0x10]
        jnc     L_c4
L_8a:
        lea     eax, [esp + 0x10]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x18], ecx
        lea     edx, [esp + 0xc]
        mov     ecx, esp
        push    edx
        mov     dword ptr [esp + 0x20], 0
        call    FUN_00647940
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    FUN_00647910
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 0x14], ecx
        pop     esi
        add     esp, 0x14
        ret     8
L_c4:
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 0x14], edx
        pop     esi
        add     esp, 0x14
        ret     8
    }
}
