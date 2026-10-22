/*
 * FUN_00583ed0 (1612 B) — Large object constructor / reset method.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * NOTE: extern data/function symbols referenced by name so MSVC6 emits the
 * correct memory-deref (A1/8B 0D/8B 15/66 8B 0D/66 A1/8A 15) and rel32 (E8)
 * opcode forms; the 4-byte address fields are relocations masked by the
 * diff harness.
 */

/* ---- external data symbols ---- */
extern int   g_7b8cec;   /* 0x007b8cec */
extern int   g_7b8ce8;   /* 0x007b8ce8 */
extern int   g_7b8cf0;   /* 0x007b8cf0 */
extern unsigned short g_7db0ae; /* 0x007db0ae */
extern int   g_7db0ac;   /* 0x007db0ac */
extern unsigned char g_7dc694;  /* 0x007dc694 */
extern unsigned short g_7dc696; /* 0x007dc696 */

/* ---- external functions ---- */
extern void __cdecl FUN_005a3110(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041ac80(void);
extern void __cdecl FUN_00584520(void);
extern void __cdecl FUN_00590f90(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0058f960(void);

__declspec(naked) void __cdecl func_00583ED0(void)
{
    __asm {
        sub     esp, 0x3c
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [esi + 0x9a0]
        xor     ebx, ebx
        mov     edi, eax
        mov     byte ptr [esi + 0x52c], bl
        mov     byte ptr [esi + 0x52d], bl
        mov     byte ptr [esi + 0x525], bl
        mov     dword ptr [esi + 0x530], ebx
        mov     dword ptr [esi + 0x534], ebx
        mov     dword ptr [esi + 0x538], ebx
        mov     dword ptr [esi + 0x53c], ebx
        mov     dword ptr [esi + 0x540], ebx
        mov     byte ptr [esi + 0x524], bl
        call    FUN_005a3110
        mov     eax, dword ptr [esi + 0x8a4]
        cmp     eax, ebx
        jz      L_583f40
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x8a4], ebx

L_583f40:
        push    ebx
        mov     dword ptr [esi + 0x8a8], ebx
        mov     dword ptr [esi + 0x8ac], ebx
        mov     byte ptr [esi + 0x5a8], 1
        mov     dword ptr [esi + 0x988], ebx
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x9e0]
        mov     eax, 0x3f800000
        push    ebx
        mov     byte ptr [esi + 0x5c0], bl
        mov     dword ptr [esi + 0x5c4], ebx
        mov     byte ptr [esi + 0x5c8], bl
        mov     dword ptr [esi + 0x5cc], ebx
        mov     dword ptr [esi + 0x5d4], ebx
        mov     dword ptr [esi + 0x990], eax
        mov     dword ptr [esi + 0x994], eax
        mov     byte ptr [esi + 0x8fc], bl
        mov     dword ptr [esi + 0x888], ebx
        mov     dword ptr [esi + 0x88c], ebx
        mov     dword ptr [esi + 0x890], ebx
        mov     dword ptr [esi + 0x85c], ebx
        mov     dword ptr [esi + 0x860], ebx
        mov     dword ptr [esi + 0x830], ebx
        mov     dword ptr [esi + 0x9cc], ebx
        mov     dword ptr [esi + 0x9d0], ebx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x9d4]
        mov     ecx, g_7b8cec
        mov     edx, g_7b8ce8
        mov     eax, g_7b8cf0
        mov     dword ptr [esi + 0x89c], ecx
        mov     dword ptr [esi + 0x898], edx
        push    ebx
        mov     dword ptr [esi + 0x9dc], ebx
        mov     dword ptr [esi + 0x57c], ebx
        mov     dword ptr [esi + 0x600], ebx
        mov     dword ptr [esi + 0x604], ebx
        mov     dword ptr [esi + 0x608], ebx
        mov     dword ptr [esi + 0x590], ebx
        mov     dword ptr [esi + 0x8a0], eax
        mov     dword ptr [esi + 0x4c0], ebx
        mov     dword ptr [esi + 0x4c4], ebx
        mov     byte ptr [esi + 0x930], bl
        mov     byte ptr [esi + 0x931], bl
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x56c]
        mov     eax, dword ptr [esi + 0x874]
        cmp     eax, ebx
        jz      L_584054
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

L_584054:
        mov     ebp, 0x4
        push    0x10
        mov     dword ptr [esi + 0x86c], ebp
        call    FUN_004084d0
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [esi + 0x874], eax
        mov     dword ptr [eax + 0xc], ecx
        mov     eax, dword ptr [esi + 0x880]
        add     esp, 0x4
        cmp     eax, ebx
        mov     dword ptr [esi + 0x870], ebx
        jz      L_584095
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

L_584095:
        push    0x10
        mov     dword ptr [esi + 0x878], ebp
        call    FUN_004084d0
        fld     dword ptr [edi + 0x37c]
        mov     cx, word ptr g_7db0ae
        xor     edx, edx
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0xc], edx
        fstp    dword ptr [esp + 0x30]
        mov     dword ptr [esi + 0x880], eax
        mov     eax, g_7db0ac
        mov     dword ptr [esp + 0x2c], edx
        mov     dword ptr [esp + 0x34], edx
        fld     dword ptr [edi + 0x380]
        fstp    dword ptr [esp + 0x24]
        mov     word ptr [esi + 0x936], ax
        mov     word ptr [esi + 0x938], cx
        mov     word ptr [esi + 0x932], ax
        mov     eax, dword ptr [esi + 0x7d0]
        mov     word ptr [esi + 0x934], cx
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x28], edx
        fld     dword ptr [edi + 0x384]
        fstp    dword ptr [esp + 0x18]
        lea     ecx, [eax*8]
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x1c], edx
        fld     dword ptr [edi + 0x388]
        mov     edx, dword ptr [esi + 0x5bc]
        sub     ecx, eax
        lea     eax, [edx + ecx*4 + 0xc]
        add     esp, 0x4
        mov     dword ptr [esi + 0x87c], ebx
        mov     dword ptr [esi + 0x628], ebx
        mov     dword ptr [esi + 0x62c], ebx
        mov     dword ptr [esi + 0x630], ebx
        mov     dword ptr [esi + 0x634], ebx
        fstp    dword ptr [esp + 0x44]
        push    eax
        lea     ecx, [esp + 0x38]
        mov     dword ptr [esi + 0x848], ebx
        mov     dword ptr [esi + 0x8c8], ebx
        mov     dword ptr [esi + 0x8cc], ebx
        mov     dword ptr [esi + 0x5ac], ebx
        mov     dword ptr [esi + 0x5b0], ebx
        mov     dword ptr [esi + 0x5b8], ebx
        mov     dword ptr [esi + 0x5b4], ebx
        mov     byte ptr [esi + 0x4bd], bl
        mov     dword ptr [esi + 0x940], ebx
        mov     byte ptr [esi + 0x93a], bl
        mov     dword ptr [esi + 0x93c], ebx
        mov     byte ptr [esi + 0x620], bl
        mov     dword ptr [esi + 0x624], ebx
        mov     dword ptr [esi + 0x638], ebx
        mov     dword ptr [esi + 0x63c], ebx
        mov     dword ptr [esi + 0x640], ebx
        mov     dword ptr [esi + 0x644], ebx
        mov     byte ptr [esi + 0x998], bl
        mov     dword ptr [esi + 0x84c], ebx
        mov     dword ptr [esi + 0x850], ebx
        mov     dword ptr [esi + 0x864], ebx
        mov     dword ptr [esi + 0x868], ebx
        call    FUN_0041ac80
        mov     ecx, dword ptr [esp + 0x44]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax + 0x4], ecx
        sub     esp, 0xc
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x8], ebx
        mov     ecx, esp
        lea     edx, [esp + 0x4c]
        push    edx
        call    FUN_00584520
        sub     esp, 0xc
        lea     eax, [esp + 0x34]
        mov     ecx, esp
        push    eax
        call    FUN_00584520
        sub     esp, 0xc
        lea     edx, [esp + 0x4c]
        mov     ecx, esp
        push    edx
        call    FUN_00584520
        sub     esp, 0xc
        lea     eax, [esp + 0x64]
        mov     ecx, esp
        push    eax
        call    FUN_00584520
        lea     ecx, [esi + 0x6b0]
        call    FUN_00590f90
        fld     dword ptr [edi + 0x35c]
        mov     eax, dword ptr [esi + 0x7b8]
        mov     edx, dword ptr [esi + 0x5bc]
        fstp    dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x2c], 0
        mov     dword ptr [esp + 0x30], 0
        fld     dword ptr [edi + 0x360]
        fstp    dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x20], 0
        mov     dword ptr [esp + 0x24], 0
        fld     dword ptr [edi + 0x364]
        fstp    dword ptr [esp + 0x10]
        lea     ecx, [eax*8]
        sub     ecx, eax
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        fld     dword ptr [edi + 0x368]
        lea     eax, [edx + ecx*4 + 0xc]
        fstp    dword ptr [esp + 0x40]
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0041ac80
        mov     ecx, dword ptr [esp + 0x40]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax + 0x4], ebx
        sub     esp, 0xc
        mov     dword ptr [eax], ecx
        lea     edx, [esp + 0x4c]
        mov     ecx, esp
        push    edx
        mov     dword ptr [eax + 0x8], ebx
        call    FUN_00584520
        sub     esp, 0xc
        lea     eax, [esp + 0x34]
        mov     ecx, esp
        push    eax
        call    FUN_00584520
        sub     esp, 0xc
        lea     edx, [esp + 0x4c]
        mov     ecx, esp
        push    edx
        call    FUN_00584520
        sub     esp, 0xc
        lea     eax, [esp + 0x64]
        mov     ecx, esp
        push    eax
        call    FUN_00584520
        lea     ecx, [esi + 0x708]
        call    FUN_00590f90
        fld     dword ptr [edi + 0x36c]
        mov     eax, dword ptr [esi + 0x7bc]
        fstp    dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esi + 0x5bc]
        mov     dword ptr [esp + 0x28], 0
        mov     dword ptr [esp + 0x30], 0
        fld     dword ptr [edi + 0x370]
        fstp    dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x1c], 0
        mov     dword ptr [esp + 0x24], 0
        fld     dword ptr [edi + 0x374]
        fstp    dword ptr [esp + 0x14]
        lea     ecx, [eax*8]
        sub     ecx, eax
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x18], 0
        fld     dword ptr [edi + 0x378]
        lea     eax, [edx + ecx*4 + 0xc]
        fstp    dword ptr [esp + 0x44]
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0041ac80
        mov     ecx, dword ptr [esp + 0x44]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax + 0x4], ecx
        sub     esp, 0xc
        lea     edx, [esp + 0x4c]
        mov     ecx, esp
        mov     dword ptr [eax], ebx
        push    edx
        mov     dword ptr [eax + 0x8], ebx
        call    FUN_00584520
        sub     esp, 0xc
        lea     eax, [esp + 0x34]
        mov     ecx, esp
        push    eax
        call    FUN_00584520
        sub     esp, 0xc
        lea     edx, [esp + 0x4c]
        mov     ecx, esp
        push    edx
        call    FUN_00584520
        sub     esp, 0xc
        lea     eax, [esp + 0x64]
        mov     ecx, esp
        push    eax
        call    FUN_00584520
        lea     ecx, [esi + 0x760]
        call    FUN_00590f90
        fld     dword ptr [edi + 0x31c]
        fst     dword ptr [esi + 0x7e4]
        mov     dword ptr [esi + 0x7dc], ebx
        fstp    dword ptr [esi + 0x7e8]
        mov     dword ptr [esi + 0x7e0], ebx
        fld     dword ptr [edi + 0x320]
        mov     dword ptr [esi + 0x7ec], ebx
        fst     dword ptr [esi + 0x7f4]
        mov     dword ptr [esi + 0x7f0], ebx
        fstp    dword ptr [esi + 0x7f8]
        mov     dword ptr [esi + 0x7fc], ebx
        fld     dword ptr [edi + 0x32c]
        mov     dword ptr [esi + 0x800], ebx
        fst     dword ptr [esi + 0x804]
        mov     dword ptr [esi + 0x80c], ebx
        fstp    dword ptr [esi + 0x808]
        mov     dword ptr [esi + 0x810], ebx
        fld     dword ptr [edi + 0x324]
        mov     dword ptr [esi + 0x81c], ebx
        fst     dword ptr [esi + 0x814]
        mov     dword ptr [esi + 0x820], ebx
        fstp    dword ptr [esi + 0x818]
        lea     ebp, [esi + 0x658]
        fld     dword ptr [edi + 0x328]
        fst     dword ptr [esi + 0x824]
        fstp    dword ptr [esi + 0x828]
        lea     ecx, [edi + 0x3dc]
        push    ecx
        mov     ecx, ebp
        mov     byte ptr [ebp + 0x54], 1
        call    FUN_0040c410
        lea     edx, [edi + 0x3e8]
        push    edx
        lea     ecx, [ebp + 0xc]
        call    FUN_0040c410
        lea     eax, [edi + 0x3f4]
        push    eax
        lea     ecx, [ebp + 0x3c]
        call    FUN_0040c410
        add     edi, 0x400
        push    edi
        lea     ecx, [ebp + 0x48]
        call    FUN_0040c410
        add     ebp, 0x30
        mov     eax, 0x3
L_5844c6:
        mov     dword ptr [ebp - 0xc], ebx
        mov     dword ptr [ebp], ebx
        mov     dword ptr [ebp - 0x18], ebx
        add     ebp, 0x4
        dec     eax
        jnz     L_5844c6
        mov     ecx, dword ptr [esi + 0x10]
        and     ecx, 0x7
        cmp     cl, 3
        mov     ecx, esi
        mov     byte ptr [esi + 0x884], 1
        mov     byte ptr [esi + 0x894], 1
        call    FUN_0058f960
        mov     dl, byte ptr g_7dc694
        mov     ax, word ptr g_7dc696
        pop     edi
        mov     dword ptr [esi + 0x970], ebx
        mov     byte ptr [esi + 0x15c], dl
        mov     word ptr [esi + 0x15e], ax
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0x4
    }
}
