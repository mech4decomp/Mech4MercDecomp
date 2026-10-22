/*
 * FUN_005b9d60 (110 B) — Sets a mode field at +0x184 and dispatches a
 * sub-object method based on the mode value, storing a float constant
 * at +0x188.
 *
 * __thiscall (ECX = this), RET 8 (two stack params: param_1, param_2).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005b9d60(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi + 0x184], eax
        sub     eax, 0x0
        jz      L92
        dec     eax
        jnz     LCA
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x7
        call    dword ptr [eax + 0x4]
        mov     dword ptr [esi + 0x188], 0x437a0000
        pop     esi
        ret     0x8
L92:
        mov     al, byte ptr [esp + 0xc]
        test    al, al
        mov     ecx, dword ptr [esi + 0xe0]
        jz      LB7
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0x8
        call    dword ptr [edx + 0x4]
        mov     dword ptr [esi + 0x188], 0x44960000
        pop     esi
        ret     0x8
LB7:
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x6
        call    dword ptr [eax + 0x4]
        mov     dword ptr [esi + 0x188], 0x447a0000
LCA:
        pop     esi
        ret     0x8
    }
}
