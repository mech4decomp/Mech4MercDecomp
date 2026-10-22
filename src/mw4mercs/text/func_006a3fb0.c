/*
 * FUN_006A3FB0 (74 B) — Virtual dispatch + distance check.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * Calls the virtual at this+0x28 with param, then the virtual at
 * (*param)+0xd4. If it returns nonzero, calls FUN_006a29d0(param);
 * if that result is > DAT_0076c5b0, calls FUN_00663bb0(param).
 * Returns DAT_0076d064 in ST0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_0076c5b0;
extern float DAT_0076d064;
extern void __cdecl FUN_006a29d0(void *param);
extern void __cdecl FUN_00663bb0(void *param);

__declspec(naked) void __fastcall FUN_006a3fb0(void *param)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x28]
        lea     ecx, [edi + 0x28]
        push    esi
        call    dword ptr [eax]
        fstp    st(0)
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xd4]
        test    al, al
        jz      l_done
        push    esi
        mov     ecx, edi
        call    FUN_006a29d0
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      l_done
        push    esi
        call    FUN_00663bb0
        add     esp, 4
    l_done:
        fld     dword ptr [DAT_0076d064]
        pop     edi
        pop     esi
        ret     4
    }
}
