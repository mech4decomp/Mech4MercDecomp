/*
 * FUN_005ba670 (161 B) — __thiscall (ECX = this), RET (no stack args).
 * Switch on *(int*)(*(int*)(this+0xe0)+0x14) - 6, setting four float
 * fields (this+0x1b8/0x1bc/0x1c0/0x1c4) to various constants.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005ba670(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0xe0]
        mov     eax, dword ptr [eax + 0x14]
        sub     eax, 0x6
        jz      L_6eb
        dec     eax
        jz      L_6c8
        dec     eax
        jz      L_69f
        xor     eax, eax
        mov     dword ptr [ecx + 0x1b8], eax
        mov     dword ptr [ecx + 0x1bc], eax
        mov     dword ptr [ecx + 0x1c0], eax
        mov     dword ptr [ecx + 0x1c4], eax
        ret
    L_69f:
        mov     dword ptr [ecx + 0x1bc], 0x48afc800
        mov     dword ptr [ecx + 0x1c0], 0x491c4000
        mov     dword ptr [ecx + 0x1c4], 0x49afc800
        mov     dword ptr [ecx + 0x1b8], 0x461c4000
        ret
    L_6c8:
        xor     eax, eax
        mov     dword ptr [ecx + 0x1c0], 0x461c4000
        mov     dword ptr [ecx + 0x1c4], 0x47742400
        mov     dword ptr [ecx + 0x1b8], eax
        mov     dword ptr [ecx + 0x1bc], eax
        ret
    L_6eb:
        mov     eax, 0x48742400
        mov     dword ptr [ecx + 0x1bc], eax
        mov     dword ptr [ecx + 0x1c0], eax
        mov     dword ptr [ecx + 0x1c4], 0x49742400
        mov     dword ptr [ecx + 0x1b8], 0x0
        ret
    }
}
