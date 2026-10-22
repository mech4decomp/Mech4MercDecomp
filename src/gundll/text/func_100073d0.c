/*
 * FUN_100073d0 (126 B) - __stdcall, RET 0x8.
 * Dispatches on piVar1[2] (param_2+0x10 object's +8 field): 0x1200 ->
 * FUN_100070b0, 0x1203 -> FUN_100072b0, 0x7200 -> fallthrough. Default calls
 * param_1+0x34's vtable method 0 if non-null. All paths end by calling
 * piVar1's vtable method +4 with arg 1.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100072b0(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_100070b0(void);       /* rel32 call, 2 args */

__declspec(naked) void __stdcall FUN_100073d0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x10]
        mov     eax, dword ptr [edi + 0x8]
        xor     esi, esi
        sub     eax, 0x1200
        jz      L_7431
        sub     eax, 0x3
        jz      L_7414
        sub     eax, 0x5ffd
        jz      L_743e
        mov     eax, dword ptr [esp + 0xc]
        mov     eax, dword ptr [eax + 0x34]
        test    eax, eax
        jz      L_743e
        mov     edx, dword ptr [eax]
        push    ecx
        push    eax
        call    dword ptr [edx]
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        mov     esi, eax
        call    dword ptr [edx + 0x4]
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x8
    L_7414:
        mov     eax, dword ptr [esp + 0xc]
        push    edi
        push    eax
        call    FUN_100072b0
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        mov     esi, eax
        call    dword ptr [edx + 0x4]
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x8
    L_7431:
        mov     ecx, dword ptr [esp + 0xc]
        push    edi
        push    ecx
        call    FUN_100070b0
        mov     esi, eax
    L_743e:
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
