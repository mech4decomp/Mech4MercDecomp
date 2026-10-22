/*
 * FUN_0062f6e0 (799 B) — ABL/game-logic: resolves an effect list, iterates
 * effect entries, and returns a 2-word (armature/subsystem) pair via param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007db0ac;
extern unsigned short g_007db0ae;
extern int g_007db0b0;
extern int g_007db0a0;

extern void __cdecl FUN_004d2000(int a, int b);
extern char __cdecl FUN_004d24f0(void);
extern char __cdecl FUN_004d2630(void);
extern void __cdecl FUN_004d2840(int a);
extern void __cdecl FUN_0041ee70(int a);
extern void *__cdecl FUN_0040ecc0(void *a);
extern void *__cdecl FUN_00411a80(void *a);
extern void *__cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_00412780(int a);
extern void *__cdecl FUN_00412820(void *a, int b, void *c);
extern void __cdecl FUN_00412740(void *a);
extern void __cdecl FUN_004084e0(void *a);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004d0100(void *a, int b);
extern int __cdecl FUN_004d5590(int a);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2680(void *a, void *b);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_0041ef60(void);

__declspec(naked) void FUN_0062f6e0(void)
{
    __asm {
        sub     esp, 0xd0
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xe8]
        mov     eax, dword ptr [edi]
        xor     ebx, ebx
        push    ebx
        push    eax
        lea     ecx, [esp + 0x60]
        call    FUN_004d2000
        cmp     dword ptr [esp + 0x94], ebx
        jz      L_f75c
        cmp     dword ptr [esp + 0x74], ebx
        jbe     L_f75c
        lea     ecx, [esp + 0x58]
        call    FUN_004d24f0
        test    al, al
        jz      L_f75c
        lea     ecx, [esp + 0x58]
        call    FUN_004d2630
        test    al, al
        jnz     L_f739
        mov     ecx, dword ptr [g_007db0b0]
        push    ecx
        lea     ecx, [esp + 0x5c]
        call    FUN_004d2840
    L_f739:
        mov     esi, dword ptr [esp + 0xe4]
        mov     dx, word ptr [esp + 0x98]
        mov     ax, word ptr [esp + 0x9a]
        mov     word ptr [esi], dx
        mov     word ptr [esi + 0x2], ax
        jmp     L_f9e9
    L_f75c:
        mov     ecx, dword ptr [esp + 0xec]
        and     ecx, 0xff
        lea     edx, [ecx*4 + 0x4]
        push    edx
        lea     ecx, [esp + 0x34]
        call    FUN_0041ee70
        mov     edx, dword ptr [esp + 0x30]
        push    0x1
        lea     eax, [esp + 0xf0]
        push    eax
        lea     ecx, [esp + 0x38]
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0x44]
        mov     dl, byte ptr [esp + 0xec]
        mov     ebp, eax
        xor     ecx, ecx
        cmp     dl, bl
        mov     dword ptr [esp + 0x10], ebp
        jbe     L_f7d3
        mov     edx, dword ptr [g_007db0ac]
        mov     si, word ptr [g_007db0ae]
    L_f7b3:
        mov     word ptr [eax], dx
        mov     word ptr [eax + 0x2], si
        mov     ebp, dword ptr [esp + 0xec]
        inc     ecx
        and     ebp, 0xff
        add     eax, 0x4
        cmp     ecx, ebp
        jl      L_f7b3
        mov     ebp, dword ptr [esp + 0x10]
    L_f7d3:
        push    0x78d460
        mov     ecx, edi
        call    FUN_0040ecc0
        cmp     eax, ebx
        jz      L_f9c5
        push    0x78d458
        mov     ecx, eax
        call    FUN_00411a80
        mov     esi, eax
        mov     dword ptr [esp + 0x28], esi
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x2c], eax
        mov     dword ptr [esp + 0x24], 0x76cc9c
        call    FUN_0040c0e0
        cmp     eax, ebx
        jz      L_f95e
    L_f818:
        mov     ecx, dword ptr [eax + 0x18]
        push    ecx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_00412780
        push    0x774288
        push    ebx
        lea     edx, [esp + 0x28]
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_00412820
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, ebx
        jz      L_f866
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_f866
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_f866:
        lea     ecx, [esp + 0x9c]
        call    FUN_004d1f10
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0xa0]
        push    ecx
        mov     ecx, dword ptr [g_007db0a0]
        call    FUN_004d0100
        push    0x774288
        push    0x1
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_00412820
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebx
        jz      L_f8c8
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_f8c8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_f8c8:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    FUN_004d5590
        mov     cx, word ptr [esp + 0xe0]
        lea     eax, [ebp + eax*4]
        mov     word ptr [eax], cx
        mov     dx, word ptr [esp + 0xe2]
        mov     word ptr [eax + 0x2], dx
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_f90b
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_f90b
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_f90b:
        lea     ecx, [esp + 0x9c]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      L_f932
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_f932
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_f932:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      L_f94d
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_f94d
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_f94d:
        lea     ecx, [esp + 0x24]
        call    FUN_0040c0e0
        cmp     eax, ebx
        jnz     L_f818
    L_f95e:
        mov     eax, dword ptr [esp + 0x44]
        sub     eax, dword ptr [esp + 0x40]
        jz      L_f9b1
        mov     ecx, dword ptr [g_007db0b0]
        push    ecx
        lea     edx, [esp + 0x34]
        push    edx
        lea     ecx, [esp + 0x60]
        call    FUN_004d2680
        cmp     esi, ebx
        jz      L_f991
        mov     ecx, esi
        call    FUN_00417980
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_f991:
        mov     esi, dword ptr [esp + 0xe4]
        mov     ax, word ptr [esp + 0x98]
        mov     cx, word ptr [esp + 0x9a]
        mov     word ptr [esi], ax
        mov     word ptr [esi + 0x2], cx
        jmp     L_f9e0
    L_f9b1:
        cmp     esi, ebx
        jz      L_f9c5
        mov     ecx, esi
        call    FUN_00417980
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_f9c5:
        mov     esi, dword ptr [esp + 0xe4]
        mov     dx, word ptr [g_007db0ac]
        mov     ax, word ptr [g_007db0ae]
        mov     word ptr [esi], dx
        mov     word ptr [esi + 0x2], ax
    L_f9e0:
        lea     ecx, [esp + 0x30]
        call    FUN_0041ef60
    L_f9e9:
        lea     ecx, [esp + 0x58]
        call    FUN_004d21c0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xd0
        ret
    }
}
