/*
 * FUN_0065a180 (568 B) — ABL/record processing loop. Converts two 3-int
 * vectors to floats, runs transform helpers (FUN_0040ca10/0x40d560/
 * 0x41a250), then iterates object pointers dispatching virtual calls
 * (0x104/0x1bc) and helper calls (FUN_00415230 / FUN_005c1990).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0080da64;
extern int g_007f23b0;

extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040d560(void);
extern void __cdecl FUN_0041a250(void);
extern char __cdecl FUN_00659eb0(int);
extern void __cdecl FUN_0041c7d0(void);
extern char __cdecl FUN_00415230(int);
extern void __cdecl FUN_005c1990(void);

__declspec(naked) void FUN_0065a180(void)
{
    __asm {
        sub     esp, 0x6c
        mov     eax, dword ptr [esp + 0x74]
        fild    dword ptr [eax]
        push    ebp
        push    esi
        push    edi
        fstp    dword ptr [esp + 0xc]
        lea     ecx, [esp + 0x24]
        fild    dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x10]
        fild    dword ptr [eax + 0x8]
        mov     eax, dword ptr [esp + 0x84]
        fstp    dword ptr [esp + 0x14]
        fild    dword ptr [eax]
        fstp    dword ptr [esp + 0x24]
        fild    dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x28]
        fild    dword ptr [eax + 0x8]
        lea     eax, [esp + 0xc]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x20]
        fstp    dword ptr [esp + 0x34]
        call    FUN_0040ca10
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x34]
        call    FUN_0040d560
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x4c]
        call    FUN_0041a250
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esp + 0x8c]
        push    ebp
        mov     dword ptr [esp + 0x58], ecx
        mov     dword ptr [esp + 0x68], edx
        mov     dword ptr [esp + 0x78], eax
        call    FUN_00659eb0
        add     esp, 0x4
        test    al, al
        jz      L5a3b1
        mov     eax, dword ptr [esp + 0x7c]
        mov     ecx, dword ptr [eax + 0x4]
        mov     esi, dword ptr [eax]
        mov     edx, ecx
        sub     edx, esi
        test    edx, 0xfffffffc
        mov     dword ptr [esp + 0x84], ecx
        jz      L5a3b1
        mov     eax, dword ptr [esp + 0x90]
        dec     eax
        mov     dword ptr [esp + 0x80], 0x3f800000
        jz      L5a26d
        dec     eax
        jz      L5a260
        dec     eax
        jnz     L5a278
        mov     dword ptr [esp + 0x80], 0x42340000
        jmp     L5a278
L5a260:
        mov     dword ptr [esp + 0x80], 0x41f00000
        jmp     L5a278
L5a26d:
        mov     dword ptr [esp + 0x80], 0x41700000
L5a278:
        mov     eax, dword ptr [g_0080da64]
        mov     edx, dword ptr [eax]
        lea     ebp, [ebp + ebp*0x2]
        add     esi, 0x4
        shl     ebp, 0x2
        cmp     esi, ecx
        push    ebx
        mov     ebx, dword ptr [edx + ebp*0x1]
        jz      L5a345
L5a295:
        mov     eax, dword ptr [g_0080da64]
        mov     ecx, dword ptr [eax]
        cmp     ebx, dword ptr [ecx + ebp*0x1 + 0x4]
        jz      L5a345
        fld     dword ptr [esp + 0x84]
        lea     edx, [esp + 0x4c]
        fmul    dword ptr [ebx]
        mov     dword ptr [esp + 0x20], 0x0
        push    edx
        lea     eax, [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x88]
        push    eax
        fmul    dword ptr [ebx + 0x8]
        lea     ecx, [esp + 0x48]
        fstp    dword ptr [esp + 0x2c]
        call    FUN_0041c7d0
        mov     eax, dword ptr [g_007f23b0]
        mov     edi, dword ptr [esi]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L5a30f
        mov     al, byte ptr [edi + 0x51c]
        test    al, al
        jz      L5a30f
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x104]
        test    al, al
        jz      L5a30f
        mov     ecx, edi
        call    FUN_005c1990
L5a30f:
        mov     ecx, dword ptr [esp + 0x98]
        mov     edx, dword ptr [esp + 0x8c]
        mov     eax, dword ptr [edi]
        push    ecx
        push    0x1
        push    edx
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x1bc]
        mov     eax, dword ptr [esp + 0x88]
        add     esi, 0x4
        add     ebx, 0xc
        cmp     esi, eax
        jnz     L5a295
L5a345:
        cmp     esi, dword ptr [esp + 0x88]
        pop     ebx
        jz      L5a3b1
L5a34f:
        mov     eax, dword ptr [g_007f23b0]
        mov     edi, dword ptr [esi]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L5a382
        mov     al, byte ptr [edi + 0x51c]
        test    al, al
        jz      L5a382
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x104]
        test    al, al
        jz      L5a382
        mov     ecx, edi
        call    FUN_005c1990
L5a382:
        mov     ecx, dword ptr [esp + 0x94]
        mov     edx, dword ptr [esp + 0x88]
        mov     eax, dword ptr [edi]
        push    ecx
        push    0x1
        push    edx
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x1bc]
        mov     eax, dword ptr [esp + 0x84]
        add     esi, 0x4
        cmp     esi, eax
        jnz     L5a34f
L5a3b1:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x6c
        ret
    }
}
