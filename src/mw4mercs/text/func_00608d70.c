/*
 * FUN_00608d70 (1234 B) — animation-blend/archive subsystem. Iterates an
 * object list (FUN_00416cc0), accumulating blend weights (FPU) and
 * dispatching per-item work (FUN_0059fd90/FUN_0059e730, string compare
 * via IAT _strcmpi, virtual calls, FUN_00609d10/FUN_00614210 chain).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007db090;
extern int g_007f25a8;
extern int g_0076b41c;   /* IAT: _strcmpi */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_0059fd90(void);
extern void __cdecl FUN_0059e730(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00609d10(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_005178d0(void);
extern void __cdecl FUN_00614210(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00531f40(void);
extern void __cdecl FUN_0059fb90(void);
extern void __cdecl FUN_00415ca0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00608d70(void)
{
    __asm {
        sub     esp, 0x104
        push    ebx
        push    ebp
        push    esi
        add     ecx, 0x28
        push    edi
        push    ecx
        lea     ecx, [esp + 0x68]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x64]
        mov     dword ptr [esp + 0x64], 0x78bf24
        mov     dword ptr [esp + 0x24], 0
        call    FUN_00416cc0
        mov     ebx, eax
        test    ebx, ebx
        mov     dword ptr [esp + 0x18], ebx
        jz      L_609209
        jmp     L_608db4
L_608db0:
        mov     ebx, dword ptr [esp + 0x18]
L_608db4:
        mov     eax, dword ptr [ebx + 0x30]
        fld     dword ptr [ebx + 0x18]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        fimul   dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        jle     L_6091f4
        mov     ebp, dword ptr [ebx + 0x10]
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x1c], eax
L_608ddd:
        cmp     ebp, 0xc8
        jl      L_608e52
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x38]
        add     eax, 0x10
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_004c41d0
        lea     ecx, [esp + 0x44]
        mov     dword ptr [esp + 0x44], 0x77a108
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jz      L_608e46
L_608e22:
        mov     edi, dword ptr [ebx + 0x14]
L_608e25:
        mov     ecx, dword ptr [esi + 0x10]
        push    edi
        push    ecx
        call    dword ptr [g_0076b41c]
        add     esp, 0x8
        test    eax, eax
        jz      L_608e46
        lea     ecx, [esp + 0x44]
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jnz     L_608e25
L_608e46:
        mov     dword ptr [esi + 0x6c], 0
        jmp     L_6091ea
L_608e52:
        cmp     ebp, 0x96
        jge     L_608ea4
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x24]
        push    ebp
        call    FUN_0059fd90
        mov     edx, dword ptr [ebx + 0x14]
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        push    edx
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x2c]
        push    ebp
        call    FUN_0059e730
        jmp     L_6091ea
L_608ea4:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        add     edx, 0x54
        xor     ebx, ebx
        push    edx
        lea     ecx, [esp + 0x7c]
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_00416bc0
        lea     ecx, [esp + 0x78]
        mov     dword ptr [esp + 0x78], 0x779f0c
        mov     dword ptr [esp + 0x10], ebx
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jz      L_6091dd
L_608eec:
        cmp     dword ptr [edi + 0x20], 2
        jz      L_60908e
        mov     ecx, dword ptr [edi + 0x24]
        lea     eax, [ebp - 0x96]
        cmp     ecx, eax
        jnz     L_60908e
        mov     cx, word ptr [edi + 0x18]
        mov     dx, word ptr [edi + 0x1a]
        push    1
        lea     eax, [esp + 0x38]
        mov     word ptr [esp + 0x38], cx
        push    eax
        lea     ecx, [esp + 0xd8]
        mov     word ptr [esp + 0x3e], dx
        call    FUN_004d1f80
        mov     ecx, dword ptr [g_007db090]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x30], cl
        mov     dx, word ptr [eax + 0x2]
        push    1
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xd8]
        push    ecx
        mov     word ptr [esp + 0x3e], dx
        call    FUN_004d9910
        mov     ebp, eax
        mov     edx, dword ptr [ebp + 0x78]
        lea     ecx, [ebp + 0x78]
        add     esp, 0xc
        call    dword ptr [edx + 0x4]
        fild    dword ptr [eax + 0x78]
        lea     eax, [ebp + 0x34c]
        mov     dword ptr [esp + 0x3c], eax
        mov     eax, dword ptr [eax]
        fstp    dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x38]
        mov     dword ptr [esp + 0x40], eax
        mov     dword ptr [esp + 0x38], 0x782234
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jz      L_609032
L_608f9a:
        mov     eax, dword ptr [g_007f25a8]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_60901f
        mov     ecx, esi
        call    FUN_00609d10
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_00412570
        call    FUN_005178d0
        mov     ecx, dword ptr [eax + 0x8c]
        call    FUN_00614210
        lea     ecx, [esp + 0x8c]
        mov     esi, eax
        call    FUN_004d1f10
        mov     cx, word ptr [esi + 0x10]
        mov     dx, word ptr [esi + 0x12]
        lea     eax, [esp + 0x2c]
        mov     word ptr [esp + 0x2c], cx
        push    eax
        lea     ecx, [esp + 0x90]
        push    ecx
        mov     word ptr [esp + 0x36], dx
        call    FUN_004da8d0
        mov     edx, dword ptr [esp + 0xa8]
        fild    dword ptr [edx + 0x24]
        add     esp, 0x8
        lea     ecx, [esp + 0x8c]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        call    FUN_004d21c0
L_60901f:
        lea     ecx, [esp + 0x38]
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jnz     L_608f9a
L_609032:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_609070
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [esp + 0x20]
        /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B WAIT) */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah, imm8 not supported in MSVC6 inline asm */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      L_609061
        test    ebx, ebx
        jz      L_609055
        mov     eax, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [eax]
L_609055:
        mov     ecx, dword ptr [esp + 0x14]
        mov     ebx, ebp
        mov     dword ptr [esp + 0x20], ecx
        jmp     L_60907a
L_609061:
        test    ebp, ebp
        jz      L_60907e
        mov     edx, dword ptr [ebp]
        push    1
        mov     ecx, ebp
        call    dword ptr [edx]
        jmp     L_60907e
L_609070:
        mov     eax, dword ptr [esp + 0x14]
        mov     ebx, ebp
        mov     dword ptr [esp + 0x20], eax
L_60907a:
        mov     dword ptr [esp + 0x10], edi
L_60907e:
        lea     ecx, [esp + 0xd0]
        call    FUN_004d21c0
        mov     ebp, dword ptr [esp + 0x28]
L_60908e:
        lea     ecx, [esp + 0x78]
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jnz     L_608eec
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_6091dd
        mov     ebp, dword ptr [ebx + 0x34c]
        test    ebp, ebp
        jz      L_60910c
L_6090b3:
        mov     edi, dword ptr [ebp]
        test    edi, edi
        mov     ebp, dword ptr [ebp + 0x4]
        jz      L_60910c
        mov     eax, dword ptr [g_007f25a8]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        /* __emit: backward jz to L_6090b3; MSVC6 miscomputes rel by +4 (call-reloc in loop) */
        __emit  0x74
        __emit  0xE0
        mov     ecx, dword ptr [g_007dab44]
        mov     esi, dword ptr [ecx]
        xor     esi, dword ptr [g_007dab40]
        mov     edx, dword ptr [edi + 0x16c]
        mov     ecx, dword ptr [esi + 0xc]
        push    0
        push    edx
        xor     ecx, 0x85739531
        call    FUN_00531f40
        push    eax
        mov     eax, dword ptr [esi + 0x44]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x24]
        push    edi
        call    FUN_0059fb90
        /* __emit: backward jmp to L_6090b3; MSVC6 miscomputes rel by +4 */
        __emit  0xEB
        __emit  0xA7
L_60910c:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx + 0x44]
        xor     eax, 0x85739531
        add     eax, 0x40
        push    eax
        lea     ecx, [esp + 0x54]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x50]
        mov     dword ptr [esp + 0x50], 0x77a38c
        call    FUN_00416cc0
        test    eax, eax
        mov     esi, dword ptr [esp + 0x10]
        jz      L_609179
L_609148:
        mov     ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jz      L_60916c
        cmp     ecx, esi
        jnz     L_60916c
        mov     cl, byte ptr [eax + 0x14]
        test    cl, cl
        mov     dword ptr [eax + 0x10], 0
        jnz     L_609168
        mov     ecx, dword ptr [eax + 0x18]
        test    ecx, ecx
        jz      L_60916c
L_609168:
        mov     byte ptr [eax + 0x1c], 1
L_60916c:
        lea     ecx, [esp + 0x50]
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_609148
L_609179:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x44]
        xor     ecx, 0x85739531
        push    esi
        add     ecx, 0x54
        call    FUN_00415ca0
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [eax + 0x14]
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [g_007dab44]
        push    ecx
        mov     ecx, dword ptr [eax]
        push    edx
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x2c]
        call    FUN_0059e730
        test    ebx, ebx
        jz      L_6091d0
        mov     eax, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [eax]
L_6091d0:
        lea     ecx, [esp + 0x50]
        call    FUN_00416c60
        mov     ebp, dword ptr [esp + 0x28]
L_6091dd:
        lea     ecx, [esp + 0x78]
        call    FUN_00416c60
        mov     ebx, dword ptr [esp + 0x18]
L_6091ea:
        dec     dword ptr [esp + 0x1c]
        jnz     L_608ddd
L_6091f4:
        lea     ecx, [esp + 0x64]
        call    FUN_00416cc0
        test    eax, eax
        mov     dword ptr [esp + 0x18], eax
        jnz     L_608db0
L_609209:
        mov     ecx, dword ptr [g_007dab44]
        fld     dword ptr [esp + 0x24]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx + 0x44]
        xor     eax, 0x85739531
        mov     esi, dword ptr [eax + 0x24]
        call    FUN_0075db4a
        add     dword ptr [esi + 0x1c], eax
        lea     ecx, [esp + 0x64]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x104
        ret
    }
}
