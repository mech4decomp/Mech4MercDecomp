/*
 * FUN_005DCA90 (209 B) — Copies a block of state fields from this (ECX)
 * into a target object at [this+0x30c], after accumulating a time delta
 * into [this+0x180] (clamped to 100).
 *
 * __thiscall (ECX = this), no stack params, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00415020(void);
extern int  __stdcall FUN_0075db4a(void);

__declspec(naked) void __stdcall FUN_005DCA90(void)
{
    

extern int DAT_007704c4;
__asm {
push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x30c]
        test    edi, edi
        jz      done
        call    FUN_00415020
        fmul dword ptr [DAT_007704c4]
        fadd dword ptr [DAT_007704c4]
        call    FUN_0075db4a
        mov     edx, dword ptr [esi + 0x180]
        add     edx, eax
        mov     eax, edx
        cmp     eax, 0x64
        mov     dword ptr [esi + 0x180], edx
        jle     copy
        mov     dword ptr [esi + 0x180], 0x64
copy:
        mov     eax, dword ptr [esi + 0x17c]
        mov     ecx, dword ptr [esi + 0x180]
        mov     edx, dword ptr [esi + 0x184]
        mov     dword ptr [edi + 0x28], eax
        mov     eax, dword ptr [esi + 0x188]
        mov     dword ptr [edi + 0x2c], ecx
        mov     ecx, dword ptr [esi + 0x18c]
        mov     dword ptr [edi + 0x30], edx
        mov     edx, dword ptr [esi + 0x190]
        mov     dword ptr [edi + 0x34], eax
        mov     eax, dword ptr [esi + 0x194]
        mov     dword ptr [edi + 0x38], ecx
        mov     ecx, dword ptr [esi + 0x198]
        mov     dword ptr [edi + 0x3c], edx
        mov     edx, dword ptr [esi + 0x19c]
        mov     dword ptr [edi + 0x40], eax
        mov     eax, dword ptr [esi + 0x1a0]
        mov     dword ptr [edi + 0x44], ecx
        mov     ecx, dword ptr [esi + 0x1a4]
        mov     dword ptr [edi + 0x48], edx
        mov     edx, dword ptr [esi + 0x1a8]
        mov     dword ptr [edi + 0x4c], eax
        mov     eax, dword ptr [esi + 0x1ac]
        mov     dword ptr [edi + 0x50], ecx
        mov     ecx, dword ptr [esi + 0x1b0]
        mov     dword ptr [edi + 0x54], edx
        mov     edx, dword ptr [esi + 0x1b4]
        mov     dword ptr [edi + 0x58], eax
        mov     dword ptr [edi + 0x5c], ecx
        mov     dword ptr [edi + 0x60], edx
done:
        pop     edi
        pop     esi
        ret
    }


}
