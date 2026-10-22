/*
 * FUN_005fffc0 (997 B) — __thiscall: reallocates three parallel arrays
 * (0x229c/0x22a4/0x2294) to a new count, initializes them, and builds a
 * per-element object graph (allocating nodes, calling virtual methods,
 * registering callbacks). Returns 4 bytes of args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;
extern int g_007b8c10;
extern int g_007da848;
extern int g_007f27b0;

extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_004d05d0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_0048fac0(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00606c00(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00698b90(void);
extern void __cdecl FUN_00699160(void);
extern void __cdecl FUN_00605530(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_005fffc0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        sub     esp, 0x50
        push    esi
        mov     esi, ecx
        mov     cx, word ptr [eax]
        cmp     cx, word ptr [g_007db0ac]
        jnz     L_5fffe7
        mov     dx, word ptr [eax+2]
        cmp     dx, word ptr [g_007db0ae]
        jz      L_60039e
    L_5fffe7:
        push    ebx
        push    ebp
        push    edi
        push    1
        push    eax
        lea     ecx, [esp+0x24]
        call    FUN_004d1f80
        mov     edx, dword ptr [esp+0x1c]
        push    4
        lea     eax, [esp+0x68]
        push    eax
        lea     ecx, [esp+0x24]
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [esp+0x64]
        mov     edi, dword ptr [esi+0x22a0]
        cmp     eax, edi
        mov     dword ptr [esp+0x14], eax
        jz      L_600095
        test    eax, eax
        jbe     L_60006e
        shl     eax, 2
        push    eax
        call    FUN_004084d0
        mov     ebx, dword ptr [esi+0x229c]
        add     esp, 4
        test    ebx, ebx
        mov     ebp, eax
        jz      L_600066
        mov     ecx, dword ptr [esp+0x14]
        cmp     ecx, edi
        jc      L_600040
        mov     ecx, edi
    L_600040:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      L_60005d
        mov     edx, ebx
        lea     eax, [ebp+ecx*4]
        sub     edx, ebp
        inc     ecx
    L_600050:
        mov     edi, dword ptr [edx+eax]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_600050
    L_60005d:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
    L_600066:
        mov     dword ptr [esi+0x229c], ebp
        jmp     L_600087
    L_60006e:
        mov     eax, dword ptr [esi+0x229c]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0x229c], 0
    L_600087:
        mov     ecx, dword ptr [esp+0x14]
        mov     eax, dword ptr [esp+0x64]
        mov     dword ptr [esi+0x22a0], ecx
    L_600095:
        mov     ebp, dword ptr [esi+0x22a8]
        cmp     eax, ebp
        mov     dword ptr [esp+0x14], eax
        jz      L_600121
        test    eax, eax
        jbe     L_6000fa
        lea     edx, [eax*4]
        push    edx
        call    FUN_004084d0
        mov     ebx, dword ptr [esi+0x22a4]
        add     esp, 4
        test    ebx, ebx
        mov     edi, eax
        jz      L_6000f2
        mov     ecx, dword ptr [esp+0x14]
        cmp     ecx, ebp
        jc      L_6000cd
        mov     ecx, ebp
    L_6000cd:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_6000e9
        mov     edx, ebx
        lea     eax, [edi+ecx*4]
        sub     edx, edi
        inc     ecx
    L_6000dc:
        mov     ebp, dword ptr [edx+eax]
        mov     dword ptr [eax], ebp
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_6000dc
    L_6000e9:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
    L_6000f2:
        mov     dword ptr [esi+0x22a4], edi
        jmp     L_600113
    L_6000fa:
        mov     ecx, dword ptr [esi+0x22a4]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0x22a4], 0
    L_600113:
        mov     edx, dword ptr [esp+0x14]
        mov     eax, dword ptr [esp+0x64]
        mov     dword ptr [esi+0x22a8], edx
    L_600121:
        mov     ebx, dword ptr [esi+0x2298]
        cmp     eax, ebx
        mov     dword ptr [esp+0x14], eax
        jz      L_6001a9
        test    eax, eax
        jbe     L_600182
        shl     eax, 2
        push    eax
        call    FUN_004084d0
        mov     ebp, dword ptr [esi+0x2294]
        add     esp, 4
        test    ebp, ebp
        mov     edi, eax
        jz      L_60017a
        mov     ecx, dword ptr [esp+0x14]
        cmp     ecx, ebx
        jc      L_600155
        mov     ecx, ebx
    L_600155:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      L_600171
        mov     edx, ebp
        lea     eax, [edi+ecx*4]
        sub     edx, edi
        inc     ecx
    L_600164:
        mov     ebx, dword ptr [edx+eax]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_600164
    L_600171:
        push    ebp
        call    FUN_004084e0
        add     esp, 4
    L_60017a:
        mov     dword ptr [esi+0x2294], edi
        jmp     L_60019b
    L_600182:
        mov     eax, dword ptr [esi+0x2294]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0x2294], 0
    L_60019b:
        mov     ecx, dword ptr [esp+0x14]
        mov     eax, dword ptr [esp+0x64]
        mov     dword ptr [esi+0x2298], ecx
    L_6001a9:
        xor     ebp, ebp
        xor     ecx, ecx
        cmp     eax, ebp
        mov     dword ptr [esi+0x22c0], ebp
        jle     L_6001cb
    L_6001b7:
        mov     edx, dword ptr [esi+0x229c]
    L_6001bd:
        mov     dword ptr [edx], ebp
        mov     eax, dword ptr [esp+0x64]
        inc     ecx
        add     edx, 4
        cmp     ecx, eax
        jl      L_6001bd
    L_6001cb:
        xor     ecx, ecx
        cmp     eax, ebp
        jle     L_60036d
        mov     edx, dword ptr [esi+0x22a4]
    L_6001db:
        mov     dword ptr [edx], 0x3f800000
        mov     eax, dword ptr [esp+0x64]
        inc     ecx
        add     edx, 4
        cmp     ecx, eax
        jl      L_6001db
        cmp     eax, ebp
        jle     L_60036d
        lea     ebx, [esi+0x22ac]
    L_6001fb:
        lea     edx, [esp+0x10]
        push    edx
        lea     eax, [esp+0x20]
        push    eax
        mov     dword ptr [esp+0x18], 0
        call    FUN_00412a00
        push    0x14
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0xc
        test    edi, edi
        jz      L_600245
        mov     ecx, dword ptr [g_007b8c10]
        push    ecx
        mov     ecx, edi
        call    FUN_004d05d0
        lea     edx, [esp+0x10]
        push    edx
        lea     ecx, [edi+0x10]
        call    FUN_0040f060
        mov     dword ptr [edi], 0x76d650
        jmp     L_600247
    L_600245:
        xor     edi, edi
    L_600247:
        mov     eax, dword ptr [esi+0x2294]
        mov     dword ptr [eax+ebp*4], edi
        mov     ecx, dword ptr [esp+0x10]
        push    0
        push    ecx
        mov     ecx, dword ptr [g_007da848]
        call    FUN_0048fac0
        mov     edi, eax
        test    edi, edi
        jz      L_60028c
        mov     eax, dword ptr [edi+0x28]
        test    eax, eax
        mov     byte ptr [edi+0x24], 0
        jnz     L_60028c
        push    0x30
        call    FUN_004084d0
        add     esp, 4
        push    0x7b8c98
        mov     ecx, eax
        mov     dword ptr [edi+0x28], eax
        call    FUN_00419460
    L_60028c:
        mov     edx, dword ptr [esi+0x229c]
        lea     eax, [esp+0x14]
        push    eax
        lea     ecx, [esp+0x20]
        mov     dword ptr [edx+ebp*4], edi
        push    ecx
        mov     dword ptr [esp+0x1c], 0
        call    FUN_00412a00
        mov     edx, dword ptr [esp+0x1c]
        mov     ecx, dword ptr [g_007f27b0]
        add     esp, 8
        push    esi
        push    0x6004a0
        push    edx
        call    FUN_00606c00
        mov     edi, eax
        push    edi
        mov     ecx, ebx
        call    FUN_004179b0
        mov     edx, dword ptr [esp+0x1c]
        push    4
        lea     eax, [esp+0x1c]
        push    eax
        lea     ecx, [esp+0x24]
        call    dword ptr [edx+0x20]
        fld     dword ptr [esp+0x18]
        mov     eax, dword ptr [esi+0x22a4]
        push    0x2c
        fstp    dword ptr [eax+ebp*4]
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_600308
        push    edi
        mov     ecx, eax
        call    FUN_00698b90
        mov     edi, eax
        jmp     L_60030a
    L_600308:
        xor     edi, edi
    L_60030a:
        mov     ecx, edi
        call    FUN_00699160
        push    edi
        lea     ecx, [esi+0x22b4]
        call    FUN_004179b0
        mov     edx, dword ptr [esi+0x22c0]
        mov     eax, dword ptr [esp+0x14]
        inc     edx
        test    eax, eax
        mov     dword ptr [esi+0x22c0], edx
        jz      L_600345
    L_600332:
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_600345
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_600345:
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        jz      L_600360
    L_60034d:
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_600360
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_600360:
        mov     eax, dword ptr [esp+0x64]
        inc     ebp
        cmp     ebp, eax
        jl      L_6001fb
    L_60036d:
        push    0x28
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        pop     edi
        pop     ebp
        pop     ebx
        jz      L_60038d
        push    esi
        push    0x6003b0
        mov     ecx, eax
        call    FUN_00605530
        jmp     L_60038f
    L_60038d:
        xor     eax, eax
    L_60038f:
        lea     ecx, [esp+0x10]
        mov     dword ptr [esi+0x22bc], eax
        call    FUN_004d21c0
    L_60039e:
        pop     esi
        add     esp, 0x50
        ret     4
    }
}
