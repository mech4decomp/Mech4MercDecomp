/*
 * FUN_00627BC0 (371 B) — ABL point-selection / coordinate-string builder.
 *
 * __thiscall (ECX = this, RET 0x10). Converts a float coordinate into
 * integer form, formats it as a string, and copies a point-name string
 * (either from a selected object's virtual method or the literal
 * "No Point Selected") into this->field_0xb8, then into
 * this->field_0x108->field_0x114.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;
extern float g_78d018;
extern float g_78d01c;
extern void __cdecl FUN_0075db4a(void);
extern void *g_76b2d4;
extern void __cdecl FUN_00560420(void);
extern void *g_76b420;
extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_004fcb30(void);
extern char g_str_78d038[];
extern char g_fmt_76b9a8[];

__declspec(naked) void __fastcall FUN_00627bc0(void *this)
{
    __asm {
        fld     dword ptr [esp + 0x4]
        sub     esp, 0xc
        fcom    dword ptr [g_76c5b0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        __emit 0xDF                 /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        mov     ebx, ecx
        __emit 0xF6                 /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      l_627be0
        fadd    dword ptr [g_78d018]
    l_627be0:
        fld     dword ptr [g_78d018]
        fsub    st(0), st(1)
        fmul    dword ptr [g_78d01c]
        call    FUN_0075db4a
        fstp    st(0)
        mov     esi, dword ptr [ebx + 0x108]
        push    0xa
        lea     ecx, [esp + 0x14]
        push    ecx
        push    eax
        mov     dword ptr [ebx + 0xac], eax
        mov     dword ptr [esi + 0x50], eax
        call    dword ptr [g_76b2d4]
        mov     ecx, dword ptr [esi + 0x110]
        add     esp, 0xc
        push    0x0
        push    0x0
        lea     edx, [esp + 0x18]
        push    edx
        call    FUN_00560420
        fld     dword ptr [g_78d01c]
        fmul    dword ptr [esp + 0x24]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [ebx + 0xb0], eax
        mov     dword ptr [ebx + 0xb4], ecx
        mov     dword ptr [esi + 0x54], eax
        call    FUN_0075db4a
        push    eax
        lea     edi, [esi + 0x213]
        push    offset g_fmt_76b9a8
        push    edi
        mov     dword ptr [esi + 0x58], eax
        call    dword ptr [g_76b420]
        mov     ecx, dword ptr [esi + 0x68]
        add     esp, 0xc
        push    0x0
        push    0x0
        push    edi
        call    FUN_00560420
        mov     ecx, dword ptr [esp + 0x2c]
        cmp     ecx, -0x1
        jz      l_627cc7
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, dword ptr [ebx + 0xb8]
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, eax
        jmp     l_627ce8
    l_627cc7:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_78d038
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [ebx + 0xb8]
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
    l_627ce8:
        and     ecx, 0x3
        rep     movsb
        mov     edi, dword ptr [ebx + 0xb8]
        mov     edx, dword ptr [ebx + 0x108]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     ebp, [edx + 0x114]
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, eax
        push    0x0
        and     ecx, 0x3
        push    0x0
        rep     movsb
        mov     ecx, dword ptr [edx + 0x64]
        push    ebp
        call    FUN_00560420
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}
