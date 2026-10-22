/*
 * FUN_00603740 (420 B) - __thiscall (ECX = this), RET 0xC (3 stack params).
 * Reads a float from a sub-object and maps its value to a category code
 * (0xa..0x11) via a chain of FPU comparisons against global constants,
 * then dispatches through FUN_00603ea0 / FUN_00603d70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00603ea0(void);
extern void __cdecl FUN_00603d70(void);
extern void __cdecl FUN_0058c2e0(void);
extern void __cdecl FUN_0058c060(void);

extern double g_76d588;
extern double g_78b7c0;
extern double g_77d038;
extern double g_78b7b8;
extern double g_78b7b0;
extern double g_782340;
extern double g_78b7a8;
extern float g_76d22c;
extern float g_78b7a4;

__declspec(naked) void __stdcall FUN_00603740(void *p1, void *p2, void *p3)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x8c]
        mov     cl, byte ptr [eax + 0x894]
        test    cl, cl
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        jz      L384b
        cmp     edi, 0xa
        jnz     L389e
        mov     eax, dword ptr [esi + 0x14]
        cmp     eax, 0x12
        jz      L3777
        cmp     eax, 0x13
        jnz     L389e
L3777:
        lea     ebx, [esi + 0x40]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L389e
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ecx, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x10], ecx
        fld     dword ptr [esp + 0x10]
        fcomp   qword ptr [g_76d588]
        fld     dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jz      L37fd
        fcomp   qword ptr [g_78b7c0]
        fnstsw  ax
        test    ah, 0x1
        jz      L37c3
        mov     edi, 0xc
        jmp     L389e
L37c3:
        fld     dword ptr [esp + 0x10]
        fcomp   qword ptr [g_77d038]
        fnstsw  ax
        test    ah, 0x1
        jz      L37de
        mov     edi, 0xd
        jmp     L389e
L37de:
        fld     dword ptr [esp + 0x10]
        fcomp   qword ptr [g_78b7b8]
        fnstsw  ax
        test    ah, 0x1
        jz      L3899
        mov     edi, 0xe
        jmp     L389e
L37fd:
        fcomp   qword ptr [g_78b7b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L3814
        mov     edi, 0xf
        jmp     L389e
L3814:
        fld     dword ptr [esp + 0x10]
        fcomp   qword ptr [g_782340]
        fnstsw  ax
        test    ah, 0x1
        jz      L382c
        mov     edi, 0x10
        jmp     L389e
L382c:
        fld     dword ptr [esp + 0x10]
        fcomp   qword ptr [g_78b7a8]
        fnstsw  ax
        test    ah, 0x1
        jz      L3844
        mov     edi, 0x11
        jmp     L389e
L3844:
        mov     edi, 0xa
        jmp     L389e
L384b:
        cmp     edi, 0xa
        jnz     L389e
        mov     eax, dword ptr [esi + 0x14]
        cmp     eax, 0x12
        jz      L385d
        cmp     eax, 0x13
        jnz     L389e
L385d:
        lea     ebx, [esi + 0x40]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L389e
        mov     ecx, ebx
        call    FUN_0041fd80
        fld     dword ptr [eax + 0x2c]
        fcomp   dword ptr [g_76d22c]
        fnstsw  ax
        test    ah, 0x41
        jz      L3899
        mov     ecx, ebx
        call    FUN_0041fd80
        fld     dword ptr [eax + 0x2c]
        fcomp   dword ptr [g_78b7a4]
        fnstsw  ax
        test    ah, 0x1
        jz      L389e
L3899:
        mov     edi, 0xb
L389e:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    edx
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_00603ea0
        mov     ebx, dword ptr [esi + 0x18]
        mov     ecx, esi
        mov     edi, eax
        call    FUN_00603d70
        cmp     eax, 0x1e
        jl      L38d5
        cmp     eax, 0x25
        jg      L38d5
        mov     ecx, ebx
        call    FUN_0058c2e0
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0xc
L38d5:
        mov     ecx, ebx
        call    FUN_0058c060
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
