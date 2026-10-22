/*
 * FUN_004B40B0 (376 B) — __thiscall (this in ECX), RET 0xC (3 params).
 * Computes a squared-length value, scans an array at [ebx+0x17c] (count at
 * +0x178), and on a hit calls 0x48bca0 / 0x4b43f0 / 0x48ca40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_7daac8;
extern float g_76c5b0;
extern char g_7dab08[];

extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040CA10(void);
extern void __cdecl FUN_0048BCA0(void);
extern void __cdecl FUN_004B43F0(void);
extern void __cdecl FUN_0048CA40(void);

__declspec(naked) void FUN_004B40B0(void)
{
    __asm {
        sub     esp, 0x70
        mov     eax, dword ptr [esp + 0x74]
        push    ebx
        push    ebp
        push    esi
        push    edi
        add     eax, 0x80
        mov     ebx, ecx
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00419480
        mov     ecx, dword ptr [ebx + 0x8c]
        mov     edx, dword ptr [ebx + 0x9c]
        mov     eax, dword ptr [ebx + 0xac]
        lea     ebp, [ebx + 0x80]
        mov     dword ptr [esp + 0x20], ecx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x24], edx
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x30], eax
        call    FUN_0040CA10
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x1c]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        faddp   st(1), st(0)
        fadd    dword ptr [g_7daac8]
        fst     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        je      L_413e
        mov     dword ptr [esp + 0x10], 0
L_413e:
        mov     edx, dword ptr [ebx + 0x178]
        xor     esi, esi
        test    edx, edx
        jbe     L_421e
        mov     edi, dword ptr [ebx + 0x17c]
        xor     ecx, ecx
L_4156:
        fld     dword ptr [edi + ecx*8]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        je      L_4173
        fld     dword ptr [edi + ecx*8 + 4]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je      L_418a
L_4173:
        inc     esi
        mov     ecx, esi
        and     ecx, 0xffff
        cmp     ecx, edx
        jb      L_4156
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x70
        ret     0xc
L_418a:
        lea     ecx, [esp + 0x4c]
        call    FUN_0048BCA0
        mov     eax, dword ptr [ebx + 0x174]
        mov     edx, dword ptr [esp + 0x8c]
        and     esi, 0xffff
        mov     ecx, dword ptr [eax + esi*4]
        lea     eax, [ebx + 0x144]
        mov     dword ptr [esp + 0x70], eax
        mov     eax, dword ptr [esp + 0x88]
        mov     dword ptr [esp + 0x4c], ecx
        and     edx, 0x3f
        mov     esi, eax
        mov     dword ptr [esp + 0x68], edx
        mov     dword ptr [esp + 0x6c], ebp
        mov     ecx, 6
        lea     edi, [esp + 0x50]
        rep     movsd
        add     eax, 0x18
        push    eax
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x84], offset g_7dab08
        call    FUN_004B43F0
        xor     edx, edx
        test    eax, eax
        setle   dl
        mov     dword ptr [esp + 0x78], eax
        lea     eax, [esp + 0x2c]
        lea     ecx, [esp + 0x4c]
        push    ecx
        dec     edx
        and     edx, eax
        mov     dword ptr [esp + 0x78], edx
        mov     edx, dword ptr [esp + 0x88]
        mov     ecx, dword ptr [edx + 0x26c]
        call    FUN_0048CA40
L_421e:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x70
        ret     0xc
    }
}
