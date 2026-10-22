/*
 * FUN_005f6420 (129 B) — Copies a transform, calls a helper, then adds
 * offsets to two float3 vectors.
 *
 * __thiscall (ECX = this), RET 8 (two stack params: param_1, param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041acb0(void *param);

__declspec(naked) void FUN_005f6420(void *param_1, void *param_2)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     dword ptr [esi], ecx
        mov     ecx, dword ptr [eax + 0x2c]
        mov     dword ptr [esi + 0x8], ecx
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esi + 0x4], edx
        call    FUN_0041acb0
        fld     dword ptr [edi + 0x4d4]
        fadd    dword ptr [esi]
        fstp    dword ptr [esi]
        fld     dword ptr [edi + 0x4d8]
        fadd    dword ptr [esi + 0x4]
        fstp    dword ptr [esi + 0x4]
        fld     dword ptr [edi + 0x4dc]
        fadd    dword ptr [esi + 0x8]
        fstp    dword ptr [esi + 0x8]
        fld     dword ptr [edi + 0x4e0]
        fadd    dword ptr [ebx]
        fstp    dword ptr [ebx]
        fld     dword ptr [edi + 0x4e4]
        fadd    dword ptr [ebx + 0x4]
        fstp    dword ptr [ebx + 0x4]
        fld     dword ptr [edi + 0x4e8]
        pop     edi
        fadd    dword ptr [ebx + 0x8]
        pop     esi
        fstp    dword ptr [ebx + 0x8]
        pop     ebx
        ret     8
    }
}
