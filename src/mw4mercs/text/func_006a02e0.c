/*
 * FUN_006a02e0 (283 B) — __thiscall (RET 0x8). HUD element insertion /
 * tree-walk routine: FPU compare against a global, binary-tree search over
 * a node list, and insertion via FUN_006a0670 / FUN_006a0650 / FUN_006a0570.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_00799c28;
extern void __cdecl FUN_00707e70(int);
extern void __cdecl FUN_006a05f0(void);
extern void __cdecl FUN_006a0510(void);
extern void __cdecl FUN_006a0670(void);
extern void __cdecl FUN_004114b0(void);
extern void __cdecl FUN_006a0650(void);
extern void __cdecl FUN_006a0570(void);

__declspec(naked) void FUN_006a02e0(void)
{
    __asm {
        sub     esp, 0x30
        push    ebx
        push    esi
        push    edi
        push    0x0
        mov     ebx, ecx
        call    FUN_00707e70
        fadd    dword ptr [g_00799c28]
        mov     eax, dword ptr [esp + 0x44]
        lea     ecx, [esp + 0x30]
        push    ecx
        fstp    qword ptr [esp + 0x38]
        lea     edx, [esp + 0x48]
        add     ebx, 0x4
        push    edx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x38], eax
        call    FUN_006a05f0
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ebx]
        cmp     ecx, edx
        jz      L033F
        fld     qword ptr [ecx + 0x14]
        fcomp   qword ptr [esp + 0x34]
        __emit 0xDF          /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L03F2
        cmp     ecx, edx
        jz      L033F
        push    ecx
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, ebx
        call    FUN_006a0510
L033F:
        mov     ecx, dword ptr [ebx]
        mov     esi, dword ptr [ecx + 0x4]
        test    esi, esi
        mov     edx, dword ptr [esp + 0x30]
        mov     edi, ecx
        mov     al, 0x1
        jz      L0368
L0350:
        cmp     edx, dword ptr [esi + 0x10]
        setl    al
        test    al, al
        mov     edi, esi
        jz      L0361
        mov     esi, dword ptr [esi + 0x8]
        jmp     L0364
L0361:
        mov     esi, dword ptr [esi + 0xc]
L0364:
        test    esi, esi
        jnz     L0350
L0368:
        test    al, al
        mov     dword ptr [esp + 0xc], edi
        jz      L03A2
        cmp     edi, dword ptr [ecx + 0x8]
        jnz     L0391
        lea     eax, [esp + 0x30]
        push    eax
        push    edi
        push    esi
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, ebx
        call    FUN_006a0670
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x30
        ret     0x8
L0391:
        lea     edx, [esp + 0xc]
        push    edx
        call    FUN_004114b0
        mov     edx, dword ptr [esp + 0x34]
        add     esp, 0x4
L03A2:
        mov     eax, dword ptr [esp + 0xc]
        cmp     dword ptr [eax + 0x10], edx
        jge     L03D0
        lea     ecx, [esp + 0x30]
        push    ecx
        push    edi
        push    esi
        lea     edx, [esp + 0x20]
        push    edx
        mov     ecx, ebx
        call    FUN_006a0670
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], eax
        mov     byte ptr [esp + 0x1c], 0x1
        push    ecx
        jmp     L03E9
L03D0:
        lea     edx, [esp + 0x44]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x30]
        mov     byte ptr [esp + 0x4c], 0x0
        call    FUN_006a0650
        push    eax
L03E9:
        lea     ecx, [esp + 0x24]
        call    FUN_006a0570
L03F2:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x30
        ret     0x8
    }
}
