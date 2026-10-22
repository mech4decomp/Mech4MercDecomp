/*
 * FUN_0068d8a0 (1659 B) — __thiscall HUD element layout/update routine.
 * Reads element definitions from a stream, builds a linked list of
 * candidate elements, sorts/filters them, and lays out HUD elements
 * across the screen. Uses FPU for angle/position math.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005d7860(void);
extern void __cdecl FUN_00653ee0(void);
extern void __cdecl FUN_006553d0(void);
extern void __cdecl FUN_00655610(void);
extern void __cdecl FUN_0068f120(void);
extern void *__cdecl FUN_004084d0(unsigned int n);
extern void __cdecl FUN_0068f150(void);
extern void __cdecl FUN_0068df40(void);
extern void __cdecl FUN_0068df20(void);
extern void __cdecl FUN_0068e020(void);
extern void __cdecl FUN_005d83f0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_0068df80(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_005d8350(void);
extern void __cdecl FUN_0068d620(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_005d8270(void);
extern void __cdecl FUN_00658200(void);
extern void __cdecl FUN_005d7a80(void);
extern void __cdecl FUN_004084e0(void *p);
extern float g_770168;
extern unsigned int g_7f2464;
extern unsigned int g_7b220c;

__declspec(naked) void FUN_0068d8a0(void)
{
    __asm {
        sub     esp, 0xfc
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x124]
        push    0x42a00000
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0x18], esi
        call    FUN_005d7860
        mov     ecx, esi
        call    FUN_00653ee0
        push    0x42a00000
        push    edi
        mov     ecx, esi
        call    FUN_006553d0
        push    edi
        mov     ecx, esi
        call    FUN_00655610
        fild    dword ptr [esp + 0x114]
        mov     eax, dword ptr [esi + 0x14]
        mov     edi, dword ptr [esi + 0x10]
        fdivr   dword ptr [g_770168]
        sub     eax, edi
        sar     eax, 0x2
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [esp + 0x114]
        dec     eax
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0x0
        mov     dword ptr [esp + 0x40], 0x42b40000
        fstp    dword ptr [esp + 0x54]
        jle     dd_a7
        mov     ecx, dword ptr [esp + 0x110]
        mov     dword ptr [esp + 0x2c], 0x1
        mov     dword ptr [esp + 0x28], ecx
d931:
        fld     dword ptr [esp + 0x54]
        mov     eax, dword ptr [esp + 0x124]
        test    eax, eax
        fadd    dword ptr [esp + 0x40]
        fstp    dword ptr [esp + 0x40]
        jz      d952
        mov     edx, dword ptr [esp + 0x40]
        push    edx
        call    eax
        add     esp, 0x4
d952:
        mov     eax, dword ptr [esp + 0x28]
        mov     eax, dword ptr [eax]
        cmp     eax, -0x1
        mov     dword ptr [esp + 0x24], eax
        jz      dd7a
        mov     ecx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [ecx + 0x1c]
        mov     edx, eax
        cmp     dword ptr [edi + edx*0x4], 0x0
        jz      dd7a
        mov     ecx, dword ptr [esp + 0x18]
        xor     ebp, ebp
        cmp     ecx, ebp
        jz      d995
d982:
        cmp     ecx, ebp
        mov     esi, dword ptr [ecx]
        jz      d98f
        push    0x1
        call    FUN_0068f120
d98f:
        cmp     esi, ebp
        mov     ecx, esi
        jnz     d982
d995:
        mov     eax, dword ptr [esp + 0x114]
        cmp     dword ptr [esp + 0x2c], eax
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [esp + 0x1c], ebp
        jge     da1b
        mov     ecx, dword ptr [esp + 0x28]
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x2c]
        lea     ebx, [ecx + 0x4]
        sub     esi, eax
d9b9:
        mov     eax, dword ptr [ebx]
        cmp     eax, -0x1
        jz      da11
        mov     ecx, dword ptr [edi + eax*0x4]
        test    ecx, ecx
        jz      da11
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, ecx
        mov     ecx, dword ptr [edi + edx*0x4]
        push    0x10
        mov     dword ptr [esp + 0x64], ecx
        mov     dword ptr [esp + 0x68], eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      d9f4
        lea     edx, [esp + 0x60]
        push    edx
        mov     ecx, eax
        call    FUN_0068f150
        jmp     d9f6
d9f4:
        xor     eax, eax
d9f6:
        mov     edx, dword ptr [esp + 0x1c]
        inc     edx
        test    ebp, ebp
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [eax], ebp
        jz      da0f
        mov     dword ptr [ebp + 0x4], eax
da0f:
        mov     ebp, eax
da11:
        add     ebx, 0x4
        dec     esi
        jnz     d9b9
        mov     dword ptr [esp + 0x18], ebp
da1b:
        mov     eax, dword ptr [esp + 0x24]
        mov     eax, dword ptr [edi + eax*0x4]
        mov     ebx, dword ptr [eax + 0x18]
        mov     edx, dword ptr [eax + 0x14]
        add     eax, 0x14
        mov     eax, dword ptr [esp + 0x11c]
        sub     ebx, edx
        sar     ebx, 0x2
        cmp     ebx, eax
        jge     dbf9
da43:
        mov     ebp, dword ptr [esp + 0x10]
        cmp     dword ptr [esp + 0x20], 0x2710
        jge     dbf9
        mov     ecx, dword ptr [esp + 0x1c]
        xor     eax, eax
        cmp     ecx, eax
        jz      dbf9
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        dec     esi
        mov     dword ptr [esp + 0x34], eax
        mov     dword ptr [esp + 0x30], eax
        mov     edi, dword ptr [ecx]
        cmp     edi, eax
        mov     dword ptr [esp + 0x1c], esi
        mov     esi, ecx
        jz      da9b
da7a:
        lea     ecx, [esi + 0x8]
        push    ecx
        lea     edx, [edi + 0x8]
        push    edx
        lea     ecx, [esp + 0x74]
        call    FUN_0068df40
        test    al, al
        jz      da91
        mov     esi, edi
da91:
        mov     edi, dword ptr [edi]
        test    edi, edi
        jnz     da7a
        mov     ecx, dword ptr [esp + 0x18]
da9b:
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jz      daa6
        mov     edx, dword ptr [esi]
        mov     dword ptr [eax], edx
daa6:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      dab2
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [eax + 0x4], edx
dab2:
        cmp     ecx, esi
        jnz     dabc
        mov     eax, dword ptr [esi]
        mov     dword ptr [esp + 0x18], eax
dabc:
        test    esi, esi
        mov     ecx, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x30], ecx
        mov     edx, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x34], edx
        jz      dad7
        push    0x1
        mov     ecx, esi
        call    FUN_0068f120
dad7:
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_0068df20
        mov     esi, dword ptr [esp + 0x44]
        mov     edi, dword ptr [esp + 0x48]
        mov     dword ptr [esp + 0x58], esi
        mov     dword ptr [esp + 0x5c], edi
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [esi + 0x2c]
        fld     dword ptr [edx + ecx*0x4]
        fild    dword ptr [esp + 0x120]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     dbba
        lea     eax, [esp + 0x80]
        mov     ecx, 0x9
        xor     edx, edx
db1f:
        mov     dword ptr [eax + -0x4], edx
        mov     dword ptr [eax], edx
        add     eax, 0x8
        dec     ecx
        jnz     db1f
        push    edi
        mov     ecx, esi
        call    FUN_0068e020
        test    eax, eax
        jz      db3a
        mov     eax, dword ptr [eax]
        jmp     db91
db3a:
        push    edi
        push    esi
        mov     ecx, ebp
        call    FUN_005d83f0
        cmp     eax, -0x1
        jnz     db91
        mov     eax, dword ptr [g_7f2464]
        push    eax
        call    FUN_006f4950
        push    0xb0
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      db7e
        push    0x7b5524
        lea     ecx, [esp + 0x80]
        push    ecx
        push    edi
        push    esi
        mov     ecx, eax
        call    FUN_0068df80
        mov     esi, eax
        jmp     db80
db7e:
        xor     esi, esi
db80:
        call    FUN_006f49a0
        push    esi
        mov     ecx, ebp
        mov     byte ptr [ebp + 0x34], 0x1
        call    FUN_005d8350
db91:
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [edx + eax*0x4]
        push    eax
        mov     ecx, ebp
        call    FUN_0068d620
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x11c]
        inc     ebx
        inc     ecx
        cmp     ebx, eax
        mov     dword ptr [esp + 0x20], ecx
        /* __emit: MSVC6 miscomputes this backward jl rel32 (off-by-4, call-reloc between branch and target) */
        __emit  0x0F
        __emit  0x8C
        __emit  0x8B
        __emit  0xFE
        __emit  0xFF
        __emit  0xFF
        jmp     dbf9
dbba:
        push    0x10
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      dbd6
        lea     ecx, [esp + 0x58]
        push    ecx
        mov     ecx, eax
        call    FUN_0068f150
        jmp     dbd8
dbd6:
        xor     eax, eax
dbd8:
        mov     esi, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        inc     esi
        test    ecx, ecx
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [eax], ecx
        jz      dbf5
        mov     dword ptr [ecx + 0x4], eax
dbf5:
        mov     dword ptr [esp + 0x18], eax
dbf9:
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edx + 0x1c]
        mov     ecx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [eax + ecx*0x4]
        mov     ebx, dword ptr [eax + 0x18]
        mov     edx, dword ptr [eax + 0x14]
        add     eax, 0x14
        mov     eax, dword ptr [esp + 0x118]
        sub     ebx, edx
        sar     ebx, 0x2
        cmp     ebx, eax
        jge     dd7a
dc28:
        mov     ebp, dword ptr [esp + 0x10]
        cmp     dword ptr [esp + 0x20], 0x2710
        jge     dd7a
        mov     ecx, dword ptr [esp + 0x1c]
        xor     eax, eax
        cmp     ecx, eax
        jz      dd7a
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        dec     esi
        mov     dword ptr [esp + 0x3c], eax
        mov     dword ptr [esp + 0x38], eax
        mov     edi, dword ptr [ecx]
        cmp     edi, eax
        mov     dword ptr [esp + 0x1c], esi
        mov     esi, ecx
        jz      dc80
dc5f:
        lea     edx, [esi + 0x8]
        push    edx
        lea     eax, [edi + 0x8]
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_0068df40
        test    al, al
        jz      dc76
        mov     esi, edi
dc76:
        mov     edi, dword ptr [edi]
        test    edi, edi
        jnz     dc5f
        mov     ecx, dword ptr [esp + 0x18]
dc80:
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jz      dc8b
        mov     edx, dword ptr [esi]
        mov     dword ptr [eax], edx
dc8b:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      dc97
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [eax + 0x4], edx
dc97:
        cmp     ecx, esi
        jnz     dca1
        mov     eax, dword ptr [esi]
        mov     dword ptr [esp + 0x18], eax
dca1:
        test    esi, esi
        mov     ecx, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x38], ecx
        mov     edx, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x3c], edx
        jz      dcbc
        push    0x1
        mov     ecx, esi
        call    FUN_0068f120
dcbc:
        lea     eax, [esp + 0x38]
        push    eax
        lea     ecx, [esp + 0x50]
        call    FUN_0068df20
        lea     eax, [esp + 0xc8]
        mov     ecx, 0x9
        xor     edx, edx
dcd8:
        mov     dword ptr [eax + -0x4], edx
        mov     dword ptr [eax], edx
        add     eax, 0x8
        dec     ecx
        jnz     dcd8
        mov     esi, dword ptr [esp + 0x50]
        mov     edi, dword ptr [esp + 0x4c]
        push    esi
        mov     ecx, edi
        call    FUN_0068e020
        test    eax, eax
        jz      dcfb
        mov     eax, dword ptr [eax]
        jmp     dd53
dcfb:
        push    esi
        push    edi
        mov     ecx, ebp
        call    FUN_005d83f0
        cmp     eax, -0x1
        jnz     dd53
        mov     ecx, dword ptr [g_7f2464]
        push    ecx
        call    FUN_006f4950
        push    0xb0
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      dd40
        push    0x7b5524
        lea     edx, [esp + 0xc8]
        push    edx
        push    esi
        push    edi
        mov     ecx, eax
        call    FUN_0068df80
        mov     esi, eax
        jmp     dd42
dd40:
        xor     esi, esi
dd42:
        call    FUN_006f49a0
        push    esi
        mov     ecx, ebp
        mov     byte ptr [ebp + 0x34], 0x1
        call    FUN_005d8350
dd53:
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ecx + eax*0x4]
        push    edx
        mov     ecx, ebp
        call    FUN_0068d620
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x118]
        inc     ebx
        inc     ecx
        cmp     ebx, eax
        mov     dword ptr [esp + 0x20], ecx
        /* __emit: MSVC6 miscomputes this backward jl rel32 (off-by-4, call-reloc between branch and target) */
        __emit  0x0F
        __emit  0x8C
        __emit  0xAE
        __emit  0xFE
        __emit  0xFF
        __emit  0xFF
dd7a:
        mov     eax, dword ptr [esp + 0x2c]
        mov     esi, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x114]
        inc     eax
        lea     ecx, [eax + -0x1]
        mov     dword ptr [esp + 0x2c], eax
        add     esi, 0x4
        lea     eax, [edx + -0x1]
        cmp     ecx, eax
        mov     dword ptr [esp + 0x28], esi
        jl      d931
        mov     esi, dword ptr [esp + 0x10]
dd_a7:
        mov     edx, dword ptr [esi + 0x28]
        mov     ecx, dword ptr [esi + 0x2c]
        mov     ebx, dword ptr [esi + 0x14]
        mov     edi, dword ptr [esi + 0x10]
        sub     ecx, edx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        sub     ebx, edi
        add     edx, eax
        sar     ebx, 0x2
        test    edx, edx
        jle     dedc
        xor     edi, edi
        mov     ebp, edx
ddd6:
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x7c]
        call    FUN_0040c9c0
        mov     ecx, dword ptr [g_7b220c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        lea     edx, [esp + 0x74]
        push    edx
        mov     edx, dword ptr [ecx + 0x28]
        mov     eax, edi
        add     eax, edx
        push    eax
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     dece
        xor     esi, esi
        test    ebx, ebx
        jle     dece
de20:
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edx + 0x10]
        lea     ecx, [eax + esi*0x4]
        cmp     dword ptr [ecx], 0x0
        jz      dec5
        mov     eax, dword ptr [edx + 0x28]
        lea     edx, [edi + eax*0x1]
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x4c], eax
        mov     dword ptr [esp + 0x50], 0x0
        fild    qword ptr [esp + 0x4c]
        fcomp   dword ptr [edx]
        fnstsw  ax
        test    ah, 0x40
        jz      de7a
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x8]
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x44], eax
        mov     dword ptr [esp + 0x48], 0x0
        fild    qword ptr [esp + 0x44]
        fcomp   dword ptr [edx + 0x4]
        fnstsw  ax
        test    ah, 0x40
        jnz     debb
de7a:
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x38], eax
        mov     dword ptr [esp + 0x3c], 0x0
        fild    qword ptr [esp + 0x38]
        fcomp   dword ptr [edx + 0x4]
        fnstsw  ax
        test    ah, 0x40
        jz      dec5
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x30], ecx
        mov     dword ptr [esp + 0x34], 0x0
        fild    qword ptr [esp + 0x30]
        fcomp   dword ptr [edx]
        fnstsw  ax
        test    ah, 0x40
        jz      dec5
debb:
        mov     ecx, dword ptr [esp + 0x10]
        push    esi
        call    FUN_005d8270
dec5:
        inc     esi
        cmp     esi, ebx
        jl      de20
dece:
        add     edi, 0xc
        dec     ebp
        jnz     ddd6
        mov     esi, dword ptr [esp + 0x10]
dedc:
        mov     ecx, esi
        call    FUN_00658200
        mov     ecx, esi
        call    FUN_005d7a80
        mov     eax, dword ptr [esp + 0x18]
        xor     edi, edi
        cmp     eax, edi
        jz      df0e
def4:
        cmp     eax, edi
        mov     esi, dword ptr [eax]
        jz      df08
        mov     dword ptr [eax + 0x4], edi
        push    eax
        mov     dword ptr [eax], edi
        call    FUN_004084e0
        add     esp, 0x4
df08:
        cmp     esi, edi
        mov     eax, esi
        jnz     def4
df0e:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xfc
        ret     0x18
    }
}
