/*
 * FUN_004d9940 (928 B) — __thiscall: large object/renderer constructor.
 * Initializes vtables, sub-objects, flags, resolves handles, and wires up
 * the renderer pipeline (vtable dispatch).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dc260(int, int, int);
extern void __cdecl FUN_0041fc80(int);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_00707e70(int);
extern void __cdecl FUN_004d21d0(int, int);
extern void __cdecl FUN_004fcbe0(int);
extern void __cdecl FUN_00412780(int);
extern void __cdecl FUN_004fcb90(int, int);
extern void __cdecl FUN_004d1f80(int, int);
extern void __cdecl FUN_006f4950(int);
extern void __cdecl FUN_004084d0(int);
extern void __cdecl FUN_004c43f0(int);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004b83e0(int, int);
extern void __cdecl FUN_004c8a50(int);
extern void __cdecl FUN_00416130(int);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004da360(void);
extern void __cdecl FUN_004da580(void);
extern void __cdecl FUN_004d21c0(void);

extern int g_007dc580;
extern int *g_007dab44;
extern int g_007dab40;
extern int g_007dab00;
extern int g_007dab04;
extern int g_007daa38;
extern unsigned char g_007dc694;
extern unsigned short g_007dc696;

__declspec(naked) void FUN_004d9940(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x4]
        sub     esp, 0x44
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        mov     ecx, dword ptr [esp + 0x5c]
        push    eax
        push    ecx
        push    edx
        mov     ecx, ebp
        call    FUN_004dc260
        lea     esi, [ebp + 0x20]
        xor     ebx, ebx
        push    ebx
        mov     ecx, esi
        call    FUN_0041fc80
        mov     dword ptr [esi], 0x773340
        lea     esi, [ebp + 0x34]
        mov     ecx, esi
        mov     dword ptr [ebp + 0x2c], ebx
        call    FUN_004d1f10
        lea     edi, [ebp + 0x78]
        mov     ecx, edi
        call    FUN_004d1f10
        lea     ecx, [ebp + 0x148]
        push    ebx
        mov     dword ptr [ebp + 0xc0], ebx
        mov     dword ptr [ebp + 0xbc], ebx
        mov     dword ptr [ebp + 0xc4], ebx
        call    FUN_0041fc80
        mov     al, 0xff
        mov     byte ptr [ebp + 0x139], al
        mov     byte ptr [ebp + 0x138], al
        mov     byte ptr [ebp + 0x13b], al
        mov     byte ptr [ebp + 0x13a], al
        mov     eax, dword ptr [g_007dc580]
        mov     dword ptr [ebp + 0x148], 0x773328
        inc     eax
        mov     byte ptr [ebp + 0x15c], bl
        mov     word ptr [ebp + 0x15e], bx
        push    ebx
        mov     dword ptr [ebp], 0x773288
        mov     byte ptr [ebp + 0x144], 0x1
        mov     dword ptr [ebp + 0xe0], ebx
        mov     dword ptr [g_007dc580], eax
        call    FUN_00707e70
        fst     qword ptr [ebp + 0xe4]
        mov     eax, dword ptr [esp + 0x5c]
        fld     dword ptr [eax + 0x50]
        push    1
        fsubr   st(0), st(1)
        add     eax, 0x54
        push    eax
        mov     ecx, esi
        fstp    qword ptr [ebp + 0xec]
        mov     dword ptr [ebp + 0x1c], ebx
        mov     byte ptr [ebp + 0xdc], bl
        fstp    st(0)
        mov     dword ptr [ebp + 0x28], ebx
        call    FUN_004d21d0
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        push    1
        push    eax
        mov     ecx, edi
        call    FUN_004d21d0
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     esi, eax
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [esi + 0x18]
        and     eax, 0xfff907ff
        or      eax, ecx
        mov     ecx, eax
        mov     dword ptr [ebp + 0x10], eax
        shr     ecx, 0xb
        test    cl, 0x1
        jz      L_9a73
        mov     edx, eax
        shr     edx, 0xa
        test    dl, 0x1
        jz      L_9a73
        and     eax, 0xfffff7ff
        mov     dword ptr [ebp + 0x10], eax
L_9a73:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007dab40]
        mov     edi, dword ptr [ebp + 0x10]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0x10]
        and     edi, 0xfffffe7f
        xor     edx, 0x85739531
        mov     dword ptr [ebp + 0x10], edi
        jz      L_9ad9
        mov     ecx, dword ptr [esp + 0x5c]
        mov     edi, dword ptr [ecx + 0x5c]
        mov     ecx, dword ptr [eax + 0x10]
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004fcbe0
        push    eax
        lea     ecx, [ebp + 0x2c]
        call    FUN_00412780
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab40]
        xor     edx, ecx
        mov     ecx, dword ptr [edx + 0x10]
        push    ebp
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004fcb90
        jmp     L_9ae2
L_9ad9:
        push    ebx
        lea     ecx, [ebp + 0x2c]
        call    FUN_00412780
L_9ae2:
        push    1
        add     esi, 0x14
        push    esi
        lea     ecx, [esp + 0x18]
        call    FUN_004d1f80
        mov     ecx, dword ptr [g_007dab00]
        push    ecx
        call    FUN_006f4950
        mov     eax, dword ptr [esp + 0x64]
        cmp     eax, ebx
        jnz     L_9b28
        push    0x14c
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        jz      L_9b26
        mov     edx, dword ptr [g_007dab04]
        push    edx
        mov     ecx, eax
        call    FUN_004c43f0
        jmp     L_9b28
L_9b26:
        xor     eax, eax
L_9b28:
        mov     esi, eax
        mov     dword ptr [ebp + 0xd8], eax
        push    4
        lea     eax, [esp + 0x64]
        mov     dword ptr [esi + 0x14], ebp
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x18]
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x60]
        mov     dword ptr [esi + 0x18], eax
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x40]
        mov     eax, dword ptr [ebp + 0xd8]
        mov     edx, dword ptr [esp + 0x10]
        push    0x40
        add     eax, 0xb0
        push    eax
        lea     ecx, [esp + 0x18]
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [g_007daa38]
        mov     dword ptr [ebp + 0x124], ebx
        mov     dword ptr [ebp + 0x128], ebx
        call    FUN_00416110
        cmp     eax, ebx
        jz      L_9ba5
        push    0xe
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, eax
        call    FUN_004b83e0
        jmp     L_9ba7
L_9ba5:
        xor     eax, eax
L_9ba7:
        mov     edx, dword ptr [eax + 0x10]
        or      edx, dword ptr [eax + 0x8]
        jz      L_9bbd
        mov     ecx, dword ptr [ebp + 0xd8]
        push    eax
        call    FUN_004c8a50
        jmp     L_9bcd
L_9bbd:
        cmp     eax, ebx
        jz      L_9bcd
        mov     ecx, dword ptr [g_007daa38]
        push    eax
        call    FUN_00416130
L_9bcd:
        call    FUN_006f49a0
        mov     eax, dword ptr [esp + 0x5c]
        lea     esi, [eax + 0x1c]
        lea     edi, [ebp + 0xf4]
        mov     ecx, 0xc
        rep movsd
        mov     esi, dword ptr [ebp + 0xd8]
        mov     ecx, dword ptr [esi + 0x18]
        and     ecx, 0xfffffffe
        or      ecx, 0x4
        mov     dword ptr [esi + 0x18], ecx
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [esp + 0x5c]
        mov     edx, dword ptr [ebp + 0x10]
        lea     edi, [esi + 0x20]
        lea     esi, [eax + 0x1c]
        mov     ecx, 0xc
        rep movsd
        mov     ecx, dword ptr [esp + 0x58]
        mov     esi, eax
        or      edx, 0x20
        lea     eax, [esi + 0x4c]
        push    eax
        mov     dword ptr [ebp + 0x10], edx
        mov     edx, dword ptr [ecx + 0x28]
        push    ebp
        call    dword ptr [edx + 0x1c]
        mov     ecx, dword ptr [esi + 0x5c]
        mov     edx, dword ptr [esi + 0x58]
        mov     dword ptr [ebp + 0xe0], eax
        mov     eax, dword ptr [ebp + 0x10]
        or      edi, 0xffffffff
        shr     eax, 0x13
        add     esp, 8
        test    al, 0x1
        mov     dword ptr [ebp + 0x30], ecx
        mov     dword ptr [ebp + 0x13c], ebx
        mov     dword ptr [ebp + 0x164], edi
        mov     dword ptr [ebp + 0x150], ebx
        mov     dword ptr [ebp + 0x140], edx
        mov     dword ptr [ebp + 0x154], ebx
        mov     dword ptr [ebp + 0x158], ebx
        mov     byte ptr [ebp + 0xc8], bl
        jz      L_9c84
        mov     ecx, ebp
        mov     dword ptr [ebp + 0x154], 0x1
        call    FUN_004da360
L_9c84:
        mov     ecx, ebp
        call    FUN_004da580
        mov     cl, byte ptr [g_007dc694]
        mov     dx, word ptr [g_007dc696]
        mov     byte ptr [ebp + 0x15c], cl
        mov     word ptr [ebp + 0x15e], dx
        xor     eax, eax
        mov     dword ptr [ebp + 0x12c], ebx
        mov     dword ptr [ebp + 0x130], ebx
        mov     dword ptr [ebp + 0x160], edi
        mov     dword ptr [ebp + 0xcc], eax
        mov     dword ptr [ebp + 0xd0], eax
        lea     ecx, [esp + 0x10]
        mov     dword ptr [ebp + 0xd4], eax
        call    FUN_004d21c0
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     0x10
    }
}
