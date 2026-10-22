/*
 * FUN_00666250 (137 B) — __thiscall (ECX = this), RET 0x14 (5 stack params).
 * If param_5 > 0, computes per-step deltas from FUN_00707e70(0)+param_5 and
 * stores them at this+0x60..0x6c; otherwise initializes this+0x14/0x18/0x1c/
 * 0x50 and stores FUN_00707e70(0) at this+0x70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);

__declspec(naked) void __fastcall FUN_00666250(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x34], eax
        xor     eax, eax
        cmp     ecx, eax
        jle     l_62a7
        fild    dword ptr [esp + 0x18]
        push    eax
        fstp    dword ptr [esp + 0x1c]
        call    FUN_00707e70
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esi + 0x60]
        fld     dword ptr [esi + 0x50]
        fsub    dword ptr [esp + 0x8]
        fdiv    dword ptr [esp + 0x18]
        fstp    dword ptr [esi + 0x64]
        fld     dword ptr [esp + 0xc]
        fsub    dword ptr [esi + 0x14]
        fdiv    dword ptr [esp + 0x18]
        fstp    dword ptr [esi + 0x68]
        fld     dword ptr [esp + 0x10]
        fsub    dword ptr [esi + 0x18]
        fdiv    dword ptr [esp + 0x18]
        fstp    dword ptr [esi + 0x6c]
        pop     esi
        ret     0x14
l_62a7:
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x14], ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        mov     dword ptr [esi + 0x68], eax
        mov     dword ptr [esi + 0x6c], eax
        mov     dword ptr [esi + 0x60], eax
        mov     dword ptr [esi + 0x18], edx
        mov     dword ptr [esi + 0x1c], 0x3f666666
        mov     dword ptr [esi + 0x50], ecx
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x70]
        pop     esi
        ret     0x14
    }
}
