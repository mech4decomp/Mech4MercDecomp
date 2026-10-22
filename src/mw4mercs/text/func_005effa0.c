/*
 * FUN_005effa0 (119 B) - __thiscall constructor/initializer, RET 0x10.
 *
 * Calls FUN_005f0740 (thiscall, ECX=this) with 4 stack params, sets up
 * vtable 0x789ff0, stores [param2+0x6c] into this+0x184, invokes a virtual
 * method via [this+0x78]+4, then accumulates a weighted sum into this+0x194.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_005f0740(void);

__declspec(naked) void FUN_005effa0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_005f0740
        mov     eax, dword ptr [edi + 0x6c]
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        mov     dword ptr [esi], 0x789ff0
        mov     dword ptr [esi + 0x184], eax
        call    dword ptr [edx + 0x4]
        mov     edx, dword ptr [esi + 0x184]
        mov     ecx, 0x1
        cmp     edx, ecx
        mov     dword ptr [esi + 0x194], 0x0
        mov     dword ptr [esp + 0x18], ecx
        jl      L_005f0010

L_005efff4:
        fild    dword ptr [esp + 0x18]
        inc     ecx
        cmp     ecx, edx
        mov     dword ptr [esp + 0x18], ecx
        fmul    dword ptr [eax + 0x38]
        fadd    dword ptr [esi + 0x194]
        fstp    dword ptr [esi + 0x194]
        jle     L_005efff4

L_005f0010:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
