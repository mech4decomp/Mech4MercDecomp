/*
 * FUN_00610030 (77 B) — __thiscall (ECX = this), RET 4.
 *
 * If this->0x2c (byte) is non-zero: if param != 0, lazily initialize
 * this->0x18 from FUN_00707e70(0) when this->0x28 is 0, then increment
 * this->0x28. Otherwise decrement this->0x28; when it reaches 0, blend
 * the FUN_00707e70(0) result into this->0x10 and this->0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __cdecl FUN_00707e70(int);

__declspec(naked) void __stdcall FUN_00610030(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x2c]
        test    al, al
        jz      L_done
        mov     al, byte ptr [esp + 0x8]
        test    al, al
        jz      L_dec
        push    edi
        mov     edi, dword ptr [esi + 0x28]
        test    edi, edi
        jnz     L_inc
        push    edi
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x18]
L_inc:
        inc     edi
        mov     dword ptr [esi + 0x28], edi
        pop     edi
        pop     esi
        ret     4
L_dec:
        dec     dword ptr [esi + 0x28]
        jnz     L_done
        push    0x0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x18]
        fld     st(0)
        fadd    qword ptr [esi + 0x10]
        fstp    qword ptr [esi + 0x10]
        fadd    qword ptr [esi + 0x8]
        fstp    qword ptr [esi + 0x8]
L_done:
        pop     esi
        ret     4
    }
}
