/*
 * FUN_004d94d0 (519 B) — __thiscall: main object/renderer setup routine.
 * Initializes a 0x60-byte struct, configures flags, wires up sub-objects
 * (vtable dispatch), copies blocks, and registers handles.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dc380(int, int);
extern void __cdecl FUN_00707e70(int);
extern void __cdecl FUN_004d1f80(int, int);
extern void __cdecl FUN_006f4950(int);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004b83e0(int, int);
extern void __cdecl FUN_004c8a50(int);
extern void __cdecl FUN_00416130(int);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004084e0(int);
extern void __cdecl FUN_004da550(void);
extern void __cdecl FUN_004da580(void);
extern void __cdecl FUN_004f1750(void);
extern void __cdecl FUN_004db210(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004dd1a0(int);

extern int g_007da9ec;
extern int g_007daa38;

__declspec(naked) void FUN_004d94d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        sub     esp, 0x44
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x50]
        push    esi
        push    edi
        push    eax
        mov     ebx, ecx
        push    ebp
        call    FUN_004dc380
        xor     edi, edi
        push    edi
        call    FUN_00707e70
        fst     qword ptr [ebx + 0xe4]
        fld     dword ptr [ebp + 0x50]
        mov     esi, dword ptr [ebx + 0x10]
        mov     edx, dword ptr [ebx + 0x78]
        fsubr   st(0), st(1)
        lea     ecx, [ebx + 0x78]
        and     esi, 0xfffffe7f
        fstp    qword ptr [ebx + 0xec]
        mov     dword ptr [ebx + 0x10], esi
        mov     dword ptr [ebx + 0x1c], edi
        fstp    st(0)
        mov     dword ptr [ebx + 0x28], edi
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [ebx + 0x10]
        mov     esi, eax
        mov     eax, dword ptr [esi + 0x18]
        and     ecx, 0xfff907ff
        or      ecx, eax
        mov     eax, ecx
        shr     eax, 0xb
        test    al, 0x1
        mov     dword ptr [ebx + 0x10], ecx
        jz      L_954d
        mov     edx, ecx
        shr     edx, 0xa
        test    dl, 0x1
        jz      L_954d
        and     ecx, 0xfffff7ff
        mov     dword ptr [ebx + 0x10], ecx
L_954d:
        push    1
        add     esi, 0x14
        push    esi
        lea     ecx, [esp + 0x18]
        call    FUN_004d1f80
        mov     eax, dword ptr [g_007da9ec]
        push    eax
        call    FUN_006f4950
        mov     esi, dword ptr [ebx + 0xd8]
        push    4
        lea     ecx, [esp + 0x60]
        push    ecx
        mov     dword ptr [esi + 0x14], ebx
        mov     edx, dword ptr [esp + 0x18]
        lea     ecx, [esp + 0x18]
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x5c]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi + 0x18], eax
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x40]
        mov     eax, dword ptr [ebx + 0xd8]
        mov     edx, dword ptr [esp + 0x10]
        push    0x40
        add     eax, 0xb0
        push    eax
        lea     ecx, [esp + 0x18]
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [g_007daa38]
        call    FUN_00416110
        cmp     eax, edi
        jz      L_95d6
        push    0xe
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, eax
        call    FUN_004b83e0
        jmp     L_95d8
L_95d6:
        xor     eax, eax
L_95d8:
        mov     edx, dword ptr [eax + 0x10]
        or      edx, dword ptr [eax + 0x8]
        jz      L_95ee
        mov     ecx, dword ptr [ebx + 0xd8]
        push    eax
        call    FUN_004c8a50
        jmp     L_95fe
L_95ee:
        cmp     eax, edi
        jz      L_95fe
        mov     ecx, dword ptr [g_007daa38]
        push    eax
        call    FUN_00416130
L_95fe:
        call    FUN_006f49a0
        lea     esi, [ebp + 0x1c]
        lea     edi, [ebx + 0xf4]
        mov     ecx, 0xc
        rep movsd
        mov     esi, dword ptr [ebx + 0xd8]
        mov     eax, dword ptr [esi + 0x18]
        mov     edx, dword ptr [esi]
        and     eax, 0xfffffffe
        or      eax, 0x4
        mov     ecx, esi
        mov     dword ptr [esi + 0x18], eax
        call    dword ptr [edx + 0x10]
        mov     edx, dword ptr [ebx + 0x10]
        lea     edi, [esi + 0x20]
        mov     ecx, 0xc
        lea     esi, [ebp + 0x1c]
        lea     eax, [ebp + 0x4c]
        rep movsd
        mov     ecx, dword ptr [ebx + 0xe0]
        or      edx, 0x20
        push    eax
        mov     dword ptr [ebx + 0x10], edx
        call    FUN_004dd1a0
        mov     esi, dword ptr [ebx + 0x12c]
        mov     ecx, dword ptr [ebp + 0x5c]
        xor     edi, edi
        cmp     esi, edi
        mov     dword ptr [ebx + 0x30], ecx
        mov     dword ptr [ebx + 0x13c], edi
        jz      L_9687
        mov     eax, dword ptr [esi]
        cmp     eax, edi
        jz      L_9678
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_9678:
        push    esi
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0x12c], edi
L_9687:
        mov     edx, dword ptr [ebp + 0x58]
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x140], edx
        mov     dword ptr [ebx + 0x154], edi
        mov     dword ptr [ebx + 0x158], 0x2
        call    FUN_004da550
        mov     ecx, ebx
        call    FUN_004da580
        mov     ecx, dword ptr [ebx + 0xd0]
        cmp     ecx, edi
        jz      L_96bd
        call    FUN_004f1750
L_96bd:
        mov     ecx, ebx
        call    FUN_004db210
        lea     ecx, [esp + 0x10]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     0x8
    }
}
