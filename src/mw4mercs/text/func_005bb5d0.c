/*
 * FUN_005bb5d0 (211 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * If the object's mode (this+0xE0 -> +0x14) is 6, initializes a sub-object
 * and dispatches virtual method +0x48; otherwise dispatches +0x18. Then
 * calls FUN_005ed7d0 with the two params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0041fd80(void);
extern void __fastcall FUN_0041afd0(void);
extern void __fastcall FUN_0041c7d0(void);
extern void __fastcall FUN_0041a160(void);
extern void __fastcall FUN_004daa20(void);
extern void __fastcall FUN_005ed7d0(void);

__declspec(naked) void FUN_005bb5d0(void)
{
    __asm {
        sub     esp, 0x7C
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0xE0]
        cmp     dword ptr [eax + 0x14], 6
        push    esi
        jnz     L1
        lea     ecx, [ebx + 0x258]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      L2
        mov     ecx, dword ptr [ebx + 0xD8]
        add     ecx, 0x80
        push    edi
        push    ecx
        lea     ecx, [esp + 0x1C]
        call    FUN_0041afd0
        mov     esi, dword ptr [esi + 0xD8]
        lea     edx, [esp + 0x58]
        add     esi, 0x80
        mov     ecx, 0xC
        lea     edi, [esp + 0x58]
        push    edx
        lea     eax, [ebx + 0x260]
        rep movsd
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0041c7d0
        mov     ecx, dword ptr [esp + 0xC]
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x34], ecx
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x2C]
        mov     dword ptr [esp + 0x48], edx
        mov     dword ptr [esp + 0x58], eax
        call    FUN_0041a160
        lea     edx, [esp + 0x28]
        push    edx
        mov     ecx, ebx
        call    FUN_004daa20
        mov     eax, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [eax + 0x48]
        pop     edi
        jmp     L1
L2:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x18]
L1:
        mov     eax, dword ptr [esp + 0x8C]
        mov     ecx, dword ptr [esp + 0x88]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_005ed7d0
        pop     esi
        pop     ebx
        add     esp, 0x7C
        ret     8
    }
}
