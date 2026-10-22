/*
 * FUN_00617d10 (868 B) — __thiscall animation/motion setup routine. Builds
 * several temporary objects on the stack, allocates a node, and wires it into
 * the animation list. Returns via RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_005178d0(void);
extern void __cdecl FUN_006140c0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d2110(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00618100(void);
extern void __cdecl FUN_00523e60(void);
extern void __cdecl FUN_00618080(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004cc3c0(void);
extern void __cdecl FUN_004c8eb0(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004c8e90(void);

extern int g_007dab44;
extern int g_007dab40;
extern int g_007db090;
extern void *g_0076b420;

__declspec(naked) void FUN_00617d10(void)
{
    __asm {
        sub     esp, 0x244
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0x254]
        push    edi
        mov     edi, ecx
        push    ecx
        mov     ecx, esp
        push    esi
        call    FUN_00412570
        call    FUN_005178d0
        mov     ecx, dword ptr [eax+0x84]
        call    FUN_006140c0
        mov     cx, word ptr [eax+0x10]
        mov     dx, word ptr [eax+0x12]
        push    0x1
        lea     eax, [esp+0x14]
        mov     word ptr [esp+0x14], cx
        push    eax
        lea     ecx, [esp+0x4c]
        mov     word ptr [esp+0x1a], dx
        call    FUN_004d1f80
        mov     eax, dword ptr [edi+0x34]
        test    eax, eax
        jz      L_d71
        mov     ecx, dword ptr [eax+0x3c]
        lea     edx, [ecx+0x1]
        mov     dword ptr [eax+0x3c], edx
        push    ecx
        jmp     L_d7b
    L_d71:
        mov     edx, dword ptr [edi+0x54]
        lea     ecx, [edi+0x54]
        call    dword ptr [edx+0x10]
        push    eax
    L_d7b:
        push    esi
        lea     eax, [esp+0x15c]
        push    0x77a504
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        lea     ebp, [edi+0x74]
        push    0x0
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        lea     ecx, [esp+0x15c]
        push    ecx
        lea     ecx, [esp+0x94]
        call    FUN_004d2110
        push    0x0
        push    0x0
        lea     ecx, [esp+0x90]
        call    FUN_004d2680
        mov     edx, dword ptr [esp+0x44]
        push    0x0
        lea     ecx, [esp+0x48]
        call    dword ptr [edx+0xc]
        push    0x0
        lea     eax, [esp+0x48]
        push    eax
        lea     ecx, [esp+0x90]
        mov     dword ptr [esp+0x54], 0xffffffec
        call    FUN_004d2680
        lea     ecx, [esp+0x154]
        push    ecx
        lea     ecx, [esp+0x18]
        call    FUN_00412570
        mov     esi, dword ptr [esp+0x58]
        lea     ecx, [esp+0x110]
        call    FUN_004d1f10
        add     esi, 0x54
        lea     edx, [esp+0x110]
        push    esi
        push    edx
        call    FUN_004da8d0
        mov     eax, dword ptr [esp+0x12c]
        mov     ecx, dword ptr [esp+0x264]
        mov     ebx, eax
        mov     eax, dword ptr [eax+0x78]
        push    0x34
        mov     dword ptr [ecx], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0xc
        test    esi, esi
        jz      L_e7e
        mov     edx, dword ptr [esp+0x264]
        mov     eax, dword ptr [esp+0x260]
        mov     ecx, dword ptr [ebx+0x634]
        push    edx
        push    eax
        push    ecx
        lea     edx, [esp+0x20]
        push    edx
        lea     ecx, [esp+0x98]
        call    FUN_00618100
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_00523e60
        mov     ecx, esi
        call    FUN_00618080
        mov     esi, eax
        jmp     L_e80
    L_e7e:
        xor     esi, esi
    L_e80:
        mov     eax, dword ptr [esi+0x10]
        test    eax, eax
        mov     dword ptr [esp+0x10], eax
        jz      L_e8e
        inc     byte ptr [eax-0x1]
    L_e8e:
        lea     eax, [esp+0x10]
        push    eax
        push    esi
        lea     ecx, [edi+0x54]
        call    FUN_00416a90
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        jz      L_eb7
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_eb7
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_eb7:
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx]
        xor     edx, eax
        mov     eax, dword ptr [edx+0x14]
        xor     bl, bl
        xor     eax, 0x85739531
        jnz     L_efb
        push    0x1c18
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_eec
        mov     ecx, eax
        call    FUN_004cc3c0
        jmp     L_eee
    L_eec:
        xor     eax, eax
    L_eee:
        push    0x5
        push    eax
        call    FUN_004c8eb0
        add     esp, 0x8
        mov     bl, 0x1
    L_efb:
        mov     cx, word ptr [esi+0x18]
        mov     dx, word ptr [esi+0x1a]
        push    0x1
        lea     eax, [esp+0x14]
        mov     word ptr [esp+0x14], cx
        push    eax
        lea     ecx, [esp+0xd4]
        mov     word ptr [esp+0x1a], dx
        call    FUN_004d1f80
        mov     ecx, dword ptr [g_007db090]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp+0x18], cl
        mov     dx, word ptr [eax+0x2]
        push    0x1
        lea     eax, [esp+0x1c]
        push    eax
        lea     ecx, [esp+0xd4]
        push    ecx
        mov     word ptr [esp+0x26], dx
        call    FUN_004d9910
        mov     esi, eax
        mov     eax, dword ptr [edi+0x24]
        mov     ecx, dword ptr [eax+0x2c]
        mov     dl, byte ptr [eax+0x30]
        add     esp, 0xc
        lea     eax, [esp+0x14]
        mov     dword ptr [esi+0x27c], ecx
        mov     dword ptr [esi+0x278], ecx
        push    eax
        lea     ecx, [esi+0x2c]
        mov     byte ptr [esi+0x274], dl
        call    FUN_00412740
        push    0x0
        lea     ecx, [esp+0x20]
        call    FUN_0041ee70
        mov     edi, dword ptr [esi]
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        lea     ecx, [esp+0x20]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edi+0xc]
        mov     edx, dword ptr [esp+0x1c]
        push    0x0
        lea     ecx, [esp+0x20]
        call    dword ptr [edx+0xc]
        push    0x0
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0xd4]
        mov     dword ptr [esp+0x2c], 0xffffffec
        call    FUN_004d2680
        test    esi, esi
        jz      L_fce
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
    L_fce:
        test    bl, bl
        jz      L_8016
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0x14]
        xor     ecx, 0x85739531
        jz      L_8016
        mov     edx, dword ptr [eax+0xc]
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx+0x17]
        test    cl, cl
        jnz     L_8016
        mov     eax, dword ptr [eax+0x14]
        xor     eax, 0x85739531
        jz      L_800c
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
    L_800c:
        push    0x5
        call    FUN_004c8e90
        add     esp, 0x4
    L_8016:
        lea     ecx, [esp+0x1c]
        call    FUN_0041ef60
        lea     ecx, [esp+0xcc]
        call    FUN_004d21c0
        lea     ecx, [esp+0x110]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp+0x14]
        test    eax, eax
        jz      L_8052
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_8052
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_8052:
        lea     ecx, [esp+0x88]
        call    FUN_004d21c0
        lea     ecx, [esp+0x44]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x244
        ret     0x10
    }
}
