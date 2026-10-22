/*
 * FUN_00609de0 (459 B) — __thiscall (ECX = this), RET 0.
 *
 * Constructor-style initializer: sets up sub-objects, registers callbacks,
 * and builds a global object at 0x007f27e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_7f27e0;
extern int *g_7daa38;
extern int *g_78bf6c;
extern int *g_7dab04;

extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_006b46b0(void);
extern void __cdecl FUN_006b45a0(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004c32d0(void);
extern void __cdecl FUN_004c40e0(void);
extern void __cdecl FUN_004c43f0(void);

__declspec(naked) void __stdcall FUN_00609de0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        xor     ebx, ebx
        push    edi
        push    ebx
        lea     ecx, [esi + 0x8]
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi + 0x10], ebx
        mov     dword ptr [esi + 0x4], ebx
        call    FUN_00412780
        lea     ecx, [esi + 0x30]
        call    FUN_0041fcb0
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi + 0x2c], ebx
        lea     edi, [esi + 0x38]
        call    dword ptr [eax + 0x3c]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [edi], eax
        lea     ebp, [esi + 0x3c]
        call    dword ptr [edx + 0x38]
        mov     dword ptr [ebp], eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    ebx
        push    ebx
        push    0x1
        push    0x60a190
        push    0x78c044
        call    FUN_006b46b0
        push    ebx
        push    ebx
        push    0x1
        push    edi
        push    0x78c034
        call    FUN_006b45a0
        push    ebx
        push    ebx
        push    0x1
        push    ebp
        push    0x78c024
        call    FUN_006b45a0
        push    ebx
        push    ebx
        push    0x1
        lea     ecx, [esi + 0x40]
        push    ecx
        push    0x78c014
        call    FUN_006b45a0
        mov     ecx, dword ptr [g_7f27e0]
        cmp     ecx, ebx
        jz      L_e7f
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
        mov     dword ptr [g_7f27e0], ebx
L_e7f:
        mov     ecx, dword ptr [g_7daa38]
        call    FUN_00416110
        mov     edi, eax
        cmp     edi, ebx
        jz      L_e9c
        mov     ecx, edi
        call    FUN_00491280
        mov     dword ptr [edi + 0x18], ebx
        jmp     L_e9e
L_e9c:
        xor     edi, edi
L_e9e:
        mov     ebp, dword ptr [edi + 0x4]
        mov     edx, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [edi]
        mov     eax, 0x10
        or      ebp, eax
        or      edx, eax
        mov     eax, dword ptr [edi + 0x8]
        or      ecx, 0xcc00000
        or      eax, 0xcc00000
        push    0x2ec
        mov     dword ptr [edi + 0x4], ebp
        mov     dword ptr [edi + 0x10], edx
        mov     dword ptr [edi], ecx
        mov     dword ptr [edi + 0x8], eax
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_ee3
        push    edi
        mov     ecx, eax
        call    FUN_004c32d0
        jmp     L_ee5
L_ee3:
        xor     eax, eax
L_ee5:
        mov     ecx, dword ptr [g_78bf6c]
        push    0x3f400000
        lea     edx, [esp + 0x14]
        push    edx
        push    0x44898000
        mov     dword ptr [esp + 0x1c], ecx
        mov     edi, 0x3f800000
        push    edi
        mov     ecx, eax
        mov     dword ptr [g_7f27e0], eax
        call    FUN_004c40e0
        mov     eax, dword ptr [g_7f27e0]
        push    0x14c
        mov     dword ptr [eax + 0x2c8], ebx
        mov     dword ptr [eax + 0x2cc], ebx
        mov     dword ptr [eax + 0x2d0], edi
        mov     dword ptr [eax + 0x2d4], edi
        mov     byte ptr [eax + 0x268], bl
        mov     byte ptr [eax + 0x269], bl
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_f5c
        mov     ecx, dword ptr [g_7dab04]
        push    ecx
        mov     ecx, eax
        call    FUN_004c43f0
        mov     edi, eax
        jmp     L_f5e
L_f5c:
        xor     edi, edi
L_f5e:
        mov     edx, dword ptr [edi + 0x18]
        mov     dword ptr [esi + 0x14], edi
        mov     esi, 0xffffff3f
        and     edx, esi
        mov     dword ptr [edi + 0x18], edx
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        mov     dword ptr [edi + 0x10], ebx
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x14]
        mov     eax, dword ptr [g_7f27e0]
        mov     edx, dword ptr [edi]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [edi + 0x18]
        mov     edx, dword ptr [edi]
        and     eax, esi
        mov     ecx, edi
        mov     dword ptr [edi + 0x10], ebx
        mov     dword ptr [edi + 0x18], eax
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
