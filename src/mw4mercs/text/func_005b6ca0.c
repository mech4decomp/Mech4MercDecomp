/*
 * FUN_005b6ca0 (167 B) — __thiscall constructor (ECX = this), RET 8.
 *
 * Calls FUN_004e6a50(param_1, param_2), zeroes fields at +0x94..+0xa0,
 * sets vtable 0x7867e8, then makes 4 virtual calls (vtable+0x20) to fill
 * +0xb4/+0xb8/+0xbc/+0xc0, and copies results to +0xa4..+0xb0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004e6a50(void *param_1, void *param_2);

__declspec(naked) void __stdcall FUN_005b6ca0(void *param_1, void *param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004e6a50
        mov     edx, dword ptr [edi]
        xor     eax, eax
        mov     dword ptr [esi + 0x94], eax
        push    0x4
        lea     ebx, [esi + 0xb4]
        mov     dword ptr [esi + 0x98], eax
        mov     dword ptr [esi + 0x9c], eax
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi + 0xa0], eax
        mov     dword ptr [esi], 0x7867e8
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [edi]
        push    0x4
        lea     ebp, [esi + 0xb8]
        push    ebp
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [edi]
        lea     eax, [esi + 0xbc]
        push    0x4
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        lea     eax, [esi + 0xc0]
        push    0x4
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [ebp]
        mov     edx, dword ptr [esi + 0xbc]
        mov     dword ptr [esi + 0xa4], eax
        mov     eax, dword ptr [esi + 0xc0]
        pop     edi
        mov     dword ptr [esi + 0xb0], eax
        mov     dword ptr [esi + 0xa8], ecx
        mov     dword ptr [esi + 0xac], edx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
