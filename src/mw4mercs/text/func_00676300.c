/*
 * FUN_00676300 (73 B) — Copy-construct / assignment helper.
 *
 * __thiscall (ECX = this, RET 4). Copies fields from param into this,
 * calls FUN_00767430 on the sub-object at this+0x14, copies three more
 * fields, and returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00767430(int param);

__declspec(naked) void *__fastcall FUN_00676300(void *param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [edi + 0x4]
        mov     edx, dword ptr [edi + 0x8]
        mov     eax, dword ptr [edi]
        mov     dword ptr [esi + 0x4], ecx
        mov     ecx, dword ptr [edi + 0x10]
        mov     dword ptr [esi + 0x8], edx
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [edi + 0xc]
        lea     edx, [edi + 0x14]
        mov     dword ptr [esi + 0x10], ecx
        push    edx
        lea     ecx, [esi + 0x14]
        mov     dword ptr [esi + 0xc], eax
        call    FUN_00767430
        mov     eax, dword ptr [edi + 0x2c]
        mov     ecx, dword ptr [edi + 0x30]
        mov     edx, dword ptr [edi + 0x34]
        mov     dword ptr [esi + 0x2c], eax
        pop     edi
        mov     dword ptr [esi + 0x30], ecx
        mov     dword ptr [esi + 0x34], edx
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
