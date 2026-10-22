/*
 * FUN_0073cfc0 (1005 B) — Font/character rasterizer state machine.
 *
 * __stdcall RET 4, one byte param (AL). Dispatches on the param:
 *   1 = set flag, 9 = busy-wait loop (recursive), 0xa = advance cursor,
 *   otherwise = rasterize a glyph into a 0x50-entry table (g_8aaf50)
 *   with heavy FPU math, then post-process (add/sub offsets).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0073cfc0(void);
extern void FUN_00713ae0(void);

extern int g_8abae4;
extern int g_8aaf38;
extern int g_8aaf28;
extern int g_8aaf34;
extern int g_8aaf30;
extern int g_8aaf18;
extern int g_8abad0;
extern int g_8aaf24;
extern int g_8aaf2c;
extern int g_8aaf1c;
extern int g_8aaf20;
extern int g_8aaf48;
extern int g_8abacc;
extern int g_87bc48;
extern char g_8b2520;

extern float g_7880f8;
extern float g_76d064;
extern float g_7a1b08;
extern float g_76d040;
extern float g_79e428;
extern float g_7a71cc;
extern float g_775980;
extern float g_87b684;
extern float g_7a71c8;

__declspec(naked) void FUN_0073cfc0(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        sub     esp, 0x14
        cmp     al, 0x1
        jnz     L_cfdb
        mov     dword ptr [g_8abae4], 0x1
        add     esp, 0x14
        ret     0x4
    L_cfdb:
        cmp     al, 0x9
        jnz     L_cff5
    L_cfdf:
        push    0x20
        call    FUN_0073cfc0
        test    byte ptr [g_8aaf38], 0x3
        jnz     L_cfdf
        add     esp, 0x14
        ret     0x4
    L_cff5:
        cmp     al, 0xa
        jnz     L_d04d
        mov     ecx, dword ptr [g_8aaf28]
        mov     eax, dword ptr [g_8aaf34]
        inc     eax
        mov     dword ptr [g_8aaf30], ecx
        cmp     eax, dword ptr [g_8aaf18]
        mov     dword ptr [g_8aaf38], 0x0
        mov     dword ptr [g_8aaf34], eax
        jge     L_d3a7
        mov     edx, dword ptr [g_8abad0]
        mov     eax, dword ptr [g_8aaf24]
        neg     edx
        sbb     edx, edx
        and     edx, 0x8
        add     edx, 0x8
        add     eax, edx
        mov     dword ptr [g_8aaf2c], eax
        mov     dword ptr [g_8aaf24], eax
        add     esp, 0x14
        ret     0x4
    L_d04d:
        mov     ecx, dword ptr [g_8aaf34]
        cmp     ecx, dword ptr [g_8aaf18]
        jge     L_d397
        mov     ecx, dword ptr [g_8aaf38]
        cmp     ecx, dword ptr [g_8aaf1c]
        jge     L_d397
        cmp     ecx, dword ptr [g_8aaf20]
        jl      L_d397
        cmp     al, 0x20
        jz      L_d37b
        jc      L_d08b
        cmp     al, 0x86
        jc      L_d08d
    L_d08b:
        mov     al, 0x2e
    L_d08d:
        mov     dl, al
        and     dl, 0xf
        movsx   ecx, dl
        mov     dword ptr [esp + 0x18], ecx
        movsx   edx, al
        fild    dword ptr [esp + 0x18]
        sub     edx, 0x20
        sar     edx, 0x4
        fmul    dword ptr [g_7880f8]
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [g_8aaf48]
        mov     ecx, 0x3f800000
        fadd    dword ptr [g_76d064]
        mov     eax, edx
        shl     eax, 0x5
        mov     dword ptr [eax + 0x8aaf5c], ecx
        mov     dword ptr [eax + 0x8aaf7c], ecx
        fmul    dword ptr [g_7a1b08]
        mov     dword ptr [eax + 0x8aaf9c], ecx
        fild    dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x8aafbc], ecx
        mov     ecx, dword ptr [g_8abae4]
        neg     ecx
        fmul    dword ptr [g_76d040]
        sbb     ecx, ecx
        push    ebx
        push    edi
        fadd    dword ptr [g_79e428]
        mov     edi, dword ptr [g_87bc48]
        mov     ebx, dword ptr [g_8aaf2c]
        fmul    dword ptr [g_7a1b08]
        and     ecx, 0x3f3f3f
        add     ecx, edi
        mov     edi, dword ptr [g_8abacc]
        fst     dword ptr [esp + 0x18]
        add     ecx, edi
        fld     st(1)
        mov     dword ptr [eax + 0x8aaf60], ecx
        fadd    dword ptr [g_7a71cc]
        mov     dword ptr [eax + 0x8aaf80], ecx
        mov     dword ptr [eax + 0x8aafa0], ecx
        mov     dword ptr [eax + 0x8aafc0], ecx
        mov     ecx, dword ptr [g_8abad0]
        fstp    dword ptr [esp + 0x8]
        mov     edi, ecx
        fld     st(0)
        neg     edi
        fadd    dword ptr [g_775980]
        sbb     edi, edi
        and     edi, 0x8
        add     edi, 0x8
        fstp    dword ptr [esp + 0x20]
        add     edi, ebx
        fild    dword ptr [g_8aaf30]
        mov     ebx, dword ptr [g_8aaf30]
        mov     dword ptr [esp + 0xc], edi
        mov     edi, dword ptr [esp + 0x20]
        fst     dword ptr [eax + 0x8aaf50]
        fild    dword ptr [g_8aaf2c]
        fst     dword ptr [esp + 0x14]
        fstp    dword ptr [eax + 0x8aaf54]
        fld     st(2)
        fstp    dword ptr [eax + 0x8aaf68]
        fxch
        fstp    dword ptr [eax + 0x8aaf6c]
        fstp    dword ptr [eax + 0x8aaf70]
        fild    dword ptr [esp + 0xc]
        fst     dword ptr [esp + 0x10]
        fstp    dword ptr [eax + 0x8aaf74]
        fstp    dword ptr [eax + 0x8aaf88]
        mov     dword ptr [eax + 0x8aaf8c], edi
        mov     edi, ecx
        neg     edi
        sbb     edi, edi
        and     edi, 0x5
        add     edi, 0x5
        add     edi, ebx
        mov     dword ptr [esp + 0xc], edi
        fild    dword ptr [esp + 0xc]
        mov     edi, dword ptr [esp + 0x10]
        fst     dword ptr [eax + 0x8aaf90]
        mov     bl, byte ptr [g_8b2520]
        mov     dword ptr [eax + 0x8aaf94], edi
        mov     edi, dword ptr [esp + 0x8]
        mov     dword ptr [eax + 0x8aafa8], edi
        mov     edi, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 0x8aafac], edi
        fstp    dword ptr [eax + 0x8aafb0]
        mov     edi, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x8aafb4], edi
        mov     edi, dword ptr [esp + 0x8]
        mov     dword ptr [eax + 0x8aafc8], edi
        mov     edi, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x8aafcc], edi
        pop     edi
        test    bl, 0x40
        pop     ebx
        jz      L_d2c8
        fld     dword ptr [g_87b684]
        fadd    dword ptr [eax + 0x8aaf68]
        fstp    dword ptr [eax + 0x8aaf68]
        fld     dword ptr [g_87b684]
        fadd    dword ptr [eax + 0x8aaf6c]
        fstp    dword ptr [eax + 0x8aaf6c]
        fld     dword ptr [g_87b684]
        fadd    dword ptr [eax + 0x8aaf88]
        fstp    dword ptr [eax + 0x8aaf88]
        fld     dword ptr [g_87b684]
        fadd    dword ptr [eax + 0x8aaf8c]
        fstp    dword ptr [eax + 0x8aaf8c]
        fld     dword ptr [g_87b684]
        fadd    dword ptr [eax + 0x8aafa8]
        fstp    dword ptr [eax + 0x8aafa8]
        fld     dword ptr [g_87b684]
        fadd    dword ptr [eax + 0x8aafac]
        fstp    dword ptr [eax + 0x8aafac]
        fld     dword ptr [g_87b684]
        fadd    dword ptr [eax + 0x8aafc8]
        fstp    dword ptr [eax + 0x8aafc8]
        fld     dword ptr [g_87b684]
        fadd    dword ptr [eax + 0x8aafcc]
        fstp    dword ptr [eax + 0x8aafcc]
        jmp     L_d358
    L_d2c8:
        fld     dword ptr [eax + 0x8aaf50]
        fsub    dword ptr [g_7a71c8]
        fstp    dword ptr [eax + 0x8aaf50]
        fld     dword ptr [eax + 0x8aaf54]
        fsub    dword ptr [g_7a71c8]
        fstp    dword ptr [eax + 0x8aaf54]
        fld     dword ptr [eax + 0x8aaf70]
        fsub    dword ptr [g_7a71c8]
        fstp    dword ptr [eax + 0x8aaf70]
        fld     dword ptr [eax + 0x8aaf74]
        fsub    dword ptr [g_7a71c8]
        fstp    dword ptr [eax + 0x8aaf74]
        fld     dword ptr [eax + 0x8aaf90]
        fsub    dword ptr [g_7a71c8]
        fstp    dword ptr [eax + 0x8aaf90]
        fld     dword ptr [eax + 0x8aaf94]
        fsub    dword ptr [g_7a71c8]
        fstp    dword ptr [eax + 0x8aaf94]
        fld     dword ptr [eax + 0x8aafb0]
        fsub    dword ptr [g_7a71c8]
        fstp    dword ptr [eax + 0x8aafb0]
        fld     dword ptr [eax + 0x8aafb4]
        fsub    dword ptr [g_7a71c8]
        fstp    dword ptr [eax + 0x8aafb4]
    L_d358:
        add     edx, 0x4
        cmp     edx, 0x50
        mov     dword ptr [g_8aaf48], edx
        jnz     L_d381
        push    edx
        push    0x8aaf50
        call    FUN_00713ae0
        mov     dword ptr [g_8aaf48], 0x0
    L_d37b:
        mov     ecx, dword ptr [g_8abad0]
    L_d381:
        mov     eax, dword ptr [g_8aaf30]
        neg     ecx
        sbb     ecx, ecx
        and     ecx, 0x6
        add     ecx, 0x6
        add     eax, ecx
        mov     dword ptr [g_8aaf30], eax
    L_d397:
        inc     dword ptr [g_8aaf38]
        mov     dword ptr [g_8abae4], 0x0
    L_d3a7:
        add     esp, 0x14
        ret     0x4
    }
}
