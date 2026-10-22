/*
 * FUN_005cac80 (217 B) — __thiscall. Conditional update of this+0x610
 * based on a virtual call result and a timer comparison.
 *
 * __thiscall (ECX = this), no stack args, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005ca800(void);
extern void __cdecl FUN_005dd750(void);

__declspec(naked) void __stdcall FUN_005cac80(void)
{
    

extern int DAT_00787934;
__asm {
push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x614]
        test    al, al
        push    edi
        jz      L_CAD54
        fld dword ptr [DAT_00787934]
        push    0x0
        fadd    dword ptr [esi + 0x610]
        fstp    dword ptr [esp + 0x10]
        call    FUN_00707e70
        fcomp   dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_CAD54
        lea     ebx, [esi + 0x1c8]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L_CAD54
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0x10]
        shr     eax, 0x13
        and     al, 0x1
        cmp     al, 0x1
        jz      L_CAD54
        mov     edi, dword ptr [esi + 0x4e0]
        test    edi, 0xfffffffc
        jz      L_CAD54
        and     edi, 0xfffffffc
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        cmp     eax, 0x7e1
        jz      L_CAD54
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        cmp     eax, 0x7da
        jz      L_CAD54
        push    0x0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x610]
        mov     ecx, dword ptr [esi + 0x5f4]
        test    ecx, 0xfffffffc
        jz      L_CAD34
        and     ecx, 0xfffffffc
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x1c]
        jmp     L_CAD3B
L_CAD34:
        mov     ecx, esi
        call    FUN_005ca800
L_CAD3B:
        mov     edi, eax
        test    edi, edi
        jz      L_CAD54
        mov     ecx, ebx
        call    FUN_0041fd80
        cmp     edi, eax
        jz      L_CAD54
        push    edi
        mov     ecx, esi
        call    FUN_005dd750
L_CAD54:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }


}
