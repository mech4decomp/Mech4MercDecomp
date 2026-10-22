/*
 * FUN_005cae20 (31 B) — __thiscall getter returning a float in ST(0).
 * If a virtual call (vtable+0x104) returns nonzero, returns this+0x618,
 * else returns the constant at 0x0076c5b0.
 *
 * __thiscall (ECX = this), no stack args, RET. Returns float.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) float __stdcall FUN_005cae20(void)
{
    

extern int DAT_0076c5b0;
__asm {
push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x104]
        test    al, al
        jnz     L_CAE37
        fld dword ptr [DAT_0076c5b0]
        pop     esi
        ret
L_CAE37:
        fld     dword ptr [esi + 0x618]
        pop     esi
        ret
    }


}
