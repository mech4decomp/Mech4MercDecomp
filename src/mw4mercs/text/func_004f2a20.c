/*
 * FUN_004f2a20 (360 B) — MLR/Adept render/update dispatch (__thiscall, RET 8).
 * Calls FUN_004f3420, builds transform matrices via FUN_00419460/FUN_00419480,
 * issues three FUN_00724350 matrix ops, iterates a listener list (virtual
 * call via [eax+0xc]) and a render-object list (virtual call via [edx+0x4]),
 * scaling object volumes by a factor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f3420(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00724350(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_004164b0(void);
extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_004f2a20(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x54
        mov     eax, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_004f3420
        mov     eax, dword ptr [ebx + 0x88]
        test    eax, eax
        jz      L_2b7f
        mov     ecx, dword ptr [eax + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [esp + 0x34]
        call    FUN_00419460
        lea     edx, [esp + 0x30]
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_00419480
        fld     dword ptr [esp + 0x38]
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x48]
        push    eax
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x5c]
        push    ecx
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x3c]
        push    ecx
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x50]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x60]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x30]
        fchs
        fstp    dword ptr [esp]
        push    0x20
        push    -0x1
        call    FUN_00724350
        fld     dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x14]
        fchs
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        push    ecx
        fstp    dword ptr [esp]
        push    0x80
        push    -0x1
        call    FUN_00724350
        fld     dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x20]
        fchs
        mov     edx, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        push    ecx
        fstp    dword ptr [esp]
        push    0x100
        push    -0x1
        call    FUN_00724350
        mov     esi, dword ptr [ebx + 0x78]
L_2afd:
        test    esi, esi
        jz      L_2b19
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     esi, dword ptr [esi + 0x4]
        jz      L_2b19
        mov     ecx, dword ptr [eax + 0x2c]
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx]
        push    edi
        push    edx
        call    dword ptr [eax + 0xc]
        jmp     L_2afd
L_2b19:
        lea     eax, [ebx + 0x80]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x18], 0x774758
L_2b31:
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jz      L_2b7f
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L_2b7f
        lea     ecx, [esp + 0x18]
        call    FUN_00417ad0
        lea     ecx, [esi + 0x24]
        push    ecx
        lea     ecx, [ebx + 0x58]
        call    FUN_004164b0
        mov     edx, dword ptr [esi]
        mov     edi, eax
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        test    al, al
        jz      L_2b31
        push    esi
        lea     ecx, [ebx + 0x78]
        call    FUN_004179b0
        fld     dword ptr [edi + 0x74]
        fmul    dword ptr [esi + 0x1c]
        fstp    dword ptr [esi + 0x1c]
        fld     dword ptr [edi + 0x74]
        fmul    dword ptr [esi + 0x20]
        fstp    dword ptr [esi + 0x20]
        jmp     L_2b31
L_2b7f:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
