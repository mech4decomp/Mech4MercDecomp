/*
 * FUN_005a7e40 (96 B) — Initializes sub-objects at this+0x180 and this+0x188.
 *
 * __fastcall (ECX = this, no EDX param despite Ghidra's guess).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_0041fd80(void);

__declspec(naked) void __stdcall FUN_005a7e40(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x180]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      label_skip1
        mov     ecx, esi
        call    FUN_0041fd80
        mov     dword ptr [eax + 0x28], 0
label_skip1:
        lea     esi, [edi + 0x188]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      label_skip2
        mov     ecx, esi
        call    FUN_0041fd80
        mov     esi, dword ptr [eax + 0xd8]
        or      dword ptr [esi + 0x18], 0xc0
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x10]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
label_skip2:
        mov     byte ptr [edi + 0x194], 0
        pop     edi
        pop     esi
        ret
    }
}
