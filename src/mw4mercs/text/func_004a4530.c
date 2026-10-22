/*
 * FUN_004a4530 (692 B) — MLR subsystem object constructor (__thiscall,
 * RET 0x8). Sets up vtable 0x770354 and a set of sub-objects, then
 * initializes fields depending on a size parameter.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a9250(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004ae5a0(void);
extern void __cdecl FUN_004aeb30(void);
extern void __cdecl FUN_004adfb0(void);
extern void __cdecl FUN_004addd0(void);
extern void __cdecl FUN_00495e30(void);
extern void __cdecl FUN_004add90(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004adf70(void);
extern void __cdecl FUN_004a4db0(void);

__declspec(naked) void FUN_004a4530(void)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x30]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x34]
        push    ebp
        push    edi
        mov     esi, ecx
        push    0x526
        call    FUN_004a9250
        mov     ebx, 0x5
        lea     ecx, [esi + 0x2b8]
        mov     dword ptr [esi + 0x2b4], ebx
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x2c4]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x2d8]
        mov     dword ptr [esi + 0x2d4], ebx
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x2e4]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x2f8]
        mov     dword ptr [esi + 0x2f4], 0x6
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x304], 0x2
        mov     dword ptr [esi + 0x31c], 0x0
        lea     ebx, [esi + 0x31c]
        mov     dword ptr [esi + 0x324], 0x0
        mov     dword ptr [esi + 0x32c], 0x0
        push    ebp
        mov     dword ptr [esi + 0x334], 0x0
        push    edi
        lea     ecx, [esi + 0x2b8]
        mov     dword ptr [esi], 0x770354
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea     ecx, [esi + 0x2c4]
        call    FUN_004ae5a0
        mov     eax, dword ptr [edi]
        push    0x1
        lea     ecx, [esi + 0x2d0]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        push    ebp
        push    edi
        lea     ecx, [esi + 0x2d8]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea     ecx, [esi + 0x2e4]
        call    FUN_004ae5a0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x2f0]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        cmp     ebp, 0xa
        jge     L_4753
        push    0x0
        lea     ecx, [esi + 0x2f8]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x304]
        call    FUN_004adfb0
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esi + 0x318], 0x0
        mov     dword ptr [esp + 0x10], 0x4
        call    FUN_004ae3c0
        push    ebp
        push    edi
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x28], 0x1
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_004addd0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    0x0
        lea     ecx, [esp + 0x18]
        call    FUN_00495e30
        mov     edx, dword ptr [esp + 0x18]
        lea     ecx, [eax + eax*0x2]
        fld     dword ptr [edx + ecx*0x4 + 0x4]
        lea     eax, [edx + ecx*0x4]
        fmul    dword ptr [eax]
        fsubr   dword ptr [eax + 0x8]
        mov     al, byte ptr [esp + 0x2c]
        test    al, al
        jz      L_46c5
        fmul    dword ptr [esp + 0x24]
L_46c5:
        push    ebp
        fstp    dword ptr [esi + 0x320]
        push    edi
        lea     ecx, [esp + 0x1c]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_004addd0
        mov     eax, dword ptr [edi]
        push    0x1
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        push    0x0
        lea     ecx, [esp + 0x18]
        call    FUN_00495e30
        lea     edx, [eax + eax*0x2]
        mov     eax, dword ptr [esp + 0x18]
        fld     dword ptr [eax + edx*0x4 + 0x4]
        lea     eax, [eax + edx*0x4]
        fmul    dword ptr [eax]
        fsubr   dword ptr [eax + 0x8]
        mov     al, byte ptr [esp + 0x2c]
        test    al, al
        jz      L_4719
        fmul    dword ptr [esp + 0x24]
L_4719:
        push    ebp
        fstp    dword ptr [esi + 0x328]
        push    edi
        lea     ecx, [esi + 0x32c]
        call    FUN_004add90
        push    ebp
        push    edi
        lea     ecx, [esi + 0x334]
        call    FUN_004add90
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        mov     byte ptr [esi + 0x33c], 0x0
        jz      L_47bd
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_47bd
L_4753:
        push    ebp
        push    edi
        lea     ecx, [esi + 0x2f8]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea     ecx, [esi + 0x304]
        call    FUN_004adf70
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x318]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        mov     ecx, ebx
        call    FUN_004add90
        push    ebp
        push    edi
        lea     ecx, [esi + 0x324]
        call    FUN_004add90
        push    ebp
        push    edi
        lea     ecx, [esi + 0x32c]
        call    FUN_004add90
        push    ebp
        push    edi
        lea     ecx, [esi + 0x334]
        call    FUN_004add90
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x33c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
L_47bd:
        mov     ecx, esi
        call    FUN_004a4db0
        pop     edi
        mov     dword ptr [esi + 0x26c], 0xd8
        mov     dword ptr [esi + 0x270], 0x78
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0x8
    }
}
