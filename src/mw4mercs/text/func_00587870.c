/*
 * FUN_00587870 (91 B) — __thiscall method, RET 0, no stack params.
 *
 * Copies byte/word fields, conditionally calls vtable method,
 * loads a float constant, stores double, compares, and optionally
 * calls FUN_005F5BC0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f5bc0(void);
extern double __stdcall FUN_00707e70(int);

__declspec(naked) void __stdcall FUN_00587870(void)
{
    

extern int DAT_00781578;
__asm {
push    esi
        mov     esi, ecx                    ; esi = this
        mov     al, byte ptr [esi + 0x14]
        mov     cx, word ptr [esi + 0x16]
        mov     byte ptr [esi + 0x15C], al
        mov     eax, [esi + 0x57C]
        test    eax, eax
        mov     word ptr [esi + 0x15E], cx
        jne     L_skip_vcall
        mov     edx, [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x14C]
        push    0
        call    FUN_00707e70
        fadd dword ptr [DAT_00781578]
        fstp qword ptr [esi + 0x56C]

    L_skip_vcall:
        push    0
        call    FUN_00707e70
        fcomp qword ptr [esi + 0x56C]
        fnstsw ax
        test    ah, 1
        jne     L_done
        mov     ecx, esi
        call    FUN_005f5bc0

    L_done:
        pop     esi
        ret
    }


}
