/*
 * FUN_006d1ad0 (326 B) - __thiscall rasterizer/line-draw helper. Computes a
 * clipped line region from the this-object's geometry (offsets 0x0-0x14),
 * calls FUN_006d5050 to draw, and fills a span buffer. RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76e2bc;
extern int g_840008;
extern void __cdecl FUN_006e0d00(void);
extern int __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006d5050(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006cf3a0(void);

__declspec(naked) char FUN_006d1ad0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xc0]
        push    eax
        call    FUN_006e0d00
        mov     ebp, eax
        test    ebp, ebp
        jnz     L_1af1
        pop     esi
        xor     al, al
        pop     ebp
        ret     0x10
    L_1af1:
        fild    dword ptr [esi]
        push    ebx
        push    edi
        fmul    dword ptr [esi + 0x8]
        fld     dword ptr [esp + 0x18]
        fsub    dword ptr [esi + 0x10]
        fsubp   st(1), st(0)
        fmul    dword ptr [g_76e2bc]
        fdiv    dword ptr [esi + 0x8]
        call    FUN_0075db4a
        fild    dword ptr [esi + 0x4]
        mov     ebx, eax
        mov     eax, dword ptr [ebp + 0x4]
        fmul    dword ptr [esi + 0xc]
        cdq
        fld     dword ptr [esp + 0x1c]
        sub     eax, edx
        fsub    dword ptr [esi + 0x14]
        sar     eax, 0x1
        sub     ebx, eax
        fsubp   st(1), st(0)
        and     ebx, 0xfffffffc
        fmul    dword ptr [g_76e2bc]
        fdiv    dword ptr [esi + 0xc]
        call    FUN_0075db4a
        mov     ecx, dword ptr [g_840008]
        mov     edi, eax
        mov     eax, dword ptr [ebp + 0x8]
        cdq
        sub     eax, edx
        sar     eax, 0x1
        sub     edi, eax
        push    ecx
        and     edi, 0xfffffffc
        call    FUN_006f4950
        mov     ecx, dword ptr [esi + 0xbc]
        push    edi
        push    ebx
        push    ebp
        call    FUN_006d5050
        call    FUN_006f49a0
        lea     ecx, [esi + 0xc4]
        call    FUN_006cf3a0
        mov     eax, dword ptr [esi + 0xbc]
        mov     ecx, dword ptr [eax + 0x4]
        mov     eax, edi
        sar     eax, cl
        xor     edx, edx
        test    eax, eax
        setl    dl
        dec     edx
        and     edx, eax
        mov     eax, dword ptr [ebp + 0x8]
        add     eax, edi
        sar     eax, cl
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [esi + 0xbc]
        mov     edi, dword ptr [edx + 0x8]
        inc     eax
        cmp     eax, edi
        mov     dword ptr [esp + 0x14], edi
        jg      L_1bac
        mov     dword ptr [esp + 0x14], eax
    L_1bac:
        mov     ebp, dword ptr [ebp + 0x4]
        mov     edx, dword ptr [edx + 0xc]
        mov     edi, ebx
        sar     edi, cl
        xor     eax, eax
        test    edi, edi
        setl    al
        add     ebp, ebx
        sar     ebp, cl
        dec     eax
        and     edi, eax
        inc     ebp
        cmp     ebp, edx
        jle     L_1bcb
        mov     ebp, edx
    L_1bcb:
        mov     ebx, dword ptr [esp + 0x18]
        cmp     ebx, dword ptr [esp + 0x14]
        jge     L_1c0d
    L_1bd5:
        cmp     edi, ebp
        jge     L_1c04
    L_1bd9:
        mov     edx, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x9c]
        sub     edx, ebx
        imul    edx, dword ptr [esi]
        sub     edx, edi
        lea     eax, [edx + ecx*1 - 0x1]
        mov     edx, dword ptr [esi + 0x8c]
        sub     edx, ecx
        mov     ecx, ebp
        sub     ecx, edi
    L_1bf9:
        mov     byte ptr [edx + eax*1], 0x0
        mov     byte ptr [eax], 0x1
        dec     eax
        dec     ecx
        jnz     L_1bf9
    L_1c04:
        mov     eax, dword ptr [esp + 0x14]
        inc     ebx
        cmp     ebx, eax
        jl      L_1bd5
    L_1c0d:
        pop     edi
        pop     ebx
        pop     esi
        xor     al, al
        pop     ebp
        ret     0x10
    }
}
