/*
 * FUN_005c9210 (115 B) — __thiscall (ECX = this), RET 0x10 (four stack params).
 *
 * Dispatches on FUN_00665bc0 result; if 2, returns param_3 (optionally
 * scaled). Otherwise computes a scaled difference via FUN_00665b40 and
 * returns a constant on a sentinel match.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_00665bc0(void *a, void *b);
extern float __stdcall FUN_00665b40(void *a, void *b);

__declspec(naked) void __stdcall FUN_005c9210(void *param1, void *param2, float param3, char param4)
{
    

extern int DAT_0076d598;
extern int DAT_0076d064;
extern int DAT_007823a8;
extern int DAT_0076c5b0;
__asm {
mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [ecx + 0x170]
        push    eax
        push    esi
        call    FUN_00665bc0
        add     esp, 0x8
        cmp     eax, 0x2
        jnz     L_9240
        mov     al, byte ptr [esp + 0x14]
        fld     dword ptr [esp + 0x10]
        cmp     al, 0x1
        jnz     L_923c
    L_9236:
        fmul dword ptr [DAT_0076d598]
    L_923c:
        pop     esi
        ret     0x10
    L_9240:
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        push    esi
        call    FUN_00665b40
        fcom dword ptr [DAT_0076d064]
        add     esp, 0x8
        fnstsw  ax
        test    ah, 0x40
        jnz     L_9277
        fsubr dword ptr [DAT_0076d064]
        mov     al, byte ptr [esp + 0x14]
        cmp     al, 0x1
        fmul    dword ptr [esp + 0x10]
        fmul dword ptr [DAT_007823a8]
        jnz     L_9236
        pop     esi
        ret     0x10
    L_9277:
        fstp    st(0)
        pop     esi
        fld dword ptr [DAT_0076c5b0]
        ret     0x10
    }


}
